#include "../include/services/student.hpp"
#include "../include/repositories/student.hpp"

void StudentService::printAllStudentTable() {
	StudentRepository repository;

	auto students = repository.getAllStudents();

  std::cout << "ID\tName" << std::endl;
  for (auto& singleStudent : students) {
		std::cout << singleStudent.m_id << "\t" << singleStudent.m_name << std::endl;
	}
}