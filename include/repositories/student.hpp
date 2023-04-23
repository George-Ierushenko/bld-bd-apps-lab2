#ifndef STUDENTREPOSITORYHPP
#define STUDENTREPOSITORYHPP

#include <ctime>
#include "../infrastructure/wab_db_connection.hpp"
#include "../models/student.hpp"

class StudentRepository {

	public:
		StudentModel getStudent(int id);
		std::vector<StudentModel> getAllStudents(time_t &updateDate);
		std::vector<StudentModel>  getAllStudents();
};

#endif