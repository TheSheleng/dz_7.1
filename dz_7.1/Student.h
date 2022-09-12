#pragma once

#include "Book.h"

class Student
{
	char* name;
	const double step;
	Book book;

public:
	Student();
	Student(const char* n, double st, const char* bookName, int bookPages);// использовать инициализаторы!!!
	~Student();
	void Print();
};

