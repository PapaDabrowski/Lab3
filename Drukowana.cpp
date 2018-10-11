#include <iostream>
#include "Drukowana.h"
using namespace std;

void Drukowana::info()
{
	Book::info();
	std::cout<<"Oprawa: "<<oprawa_<<std::endl;
}


Drukowana::Drukowana(unsigned int Y , string X):Book(Y)
{
	oprawa_=X;
	cout<<"Konstruktor Drukowana"<<endl;
}

