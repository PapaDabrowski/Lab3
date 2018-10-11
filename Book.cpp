#include <iostream>
#include "Book.h"
using namespace std;

void Book::info()
{
	cout<<"Liczba stron: "<<NumberOfSites<<endl;
}

 
Book::Book(unsigned int X)
{
	NumberOfSites=X;
	std::cout<<"Konstruktor Książka"<<std::endl;
}
