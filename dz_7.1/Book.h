#pragma once

#include <iostream>

class Book
{
	char* name;
	int pages;

public:
	Book(const char* n);
	Book(const char* n, int p);
	void Print();
	~Book();
};