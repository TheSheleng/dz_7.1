#include "Student.h"

using namespace std;

Student::Student() : step(0), book(nullptr, 0) 
{
	name = nullptr;
}

Student::Student(const char* n, double st, const char* bookName, int bookPages) : step(st), book(bookName, bookPages)
{
	if (n != nullptr)
	{
		int len = 0;
		while (n[len] != '\0') len++;
		name = new char[len + 1];

		for (int i = 0; i < len + 1; i++)
			name[i] = n[i];
	}
}

Student::~Student()
{
	if (name != nullptr) delete[] name;
}

void Student::Print()
{
	cout << "Name: "; name != nullptr ? cout << name : cout << "-"; cout << endl;
	cout << "Step: " << step << endl;

	cout << "Book: "; cout << endl;
	book.Print();
}