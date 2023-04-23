#include "../include/repositories/student.hpp"

std::vector<StudentModel> StudentRepository::getAllStudents() {
  SAConnection* con = WabDatabaseConnection::get_connection();

  SACommand cmd;
  cmd.setConnection(con);

  cmd.setCommandText("select * from Students");
  cmd.Execute();

  std::vector<StudentModel> vector = {};

  while (cmd.FetchNext()) {
    int id = cmd.Field('id').asInt64();
    std::string name = static_cast<std::string>(cmd.Field('name').asString());

    StudentModel model(id, name);
    vector.push_back(model);
  }

  return vector;
}