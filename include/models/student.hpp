
#ifndef STUDENTMODELHPP
#define STUDENTMODELHPP

#include <string>

class StudentModel {

	public:
		int m_id;
		std::string m_name;

		StudentModel(int &id, const std::string &name);
};

#endif