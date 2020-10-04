#pragma once
#include "Cperson.h"

class Cstudent :
	public Cperson
{
public:
	void input_stud();
	void student_info();
	
private:
	string department;
	int number;
};

