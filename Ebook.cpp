#include <iostream>
#include "Ebook.h"
using namespace std;

void Ebook::info()
{
	std::cout<<"Rozmiar w MB: "<<rozmiar_MB_<<std::endl;
	Book::info();
}

Ebook::Ebook(unsigned int Y , unsigned int X):Book(Y)
{
		cout<<"Konstruktor Ebook"<<endl;
		rozmiar_MB_=X;
}

