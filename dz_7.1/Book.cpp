#include "Book.h"

using namespace std;

Book::Book(const char* n)
{
	if (n != nullptr)
	{
		int len = 0;
		while (n[len] != '\0') len++;
		name = new char[len + 1];

		for (int i = 0; i < len + 1; i++)
			name[i] = n[i];
	}
	else name = nullptr;
	
	pages = 0;
}

Book::Book(const char* n, int p) : Book(n)
{
	pages = p;
}

void Book::Print()
{
	cout << "Name: "; name != nullptr ? cout << name : cout << "-"; cout << endl;
	cout << "Pages: " << pages << endl;
}

Book::~Book() 
{
	delete[] name;
}