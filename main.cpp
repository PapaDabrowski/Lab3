//Created by PAPA Dabrowski
#include <iostream>

#include <vector>
#include "Book.h"
#include "Ebook.h"
#include "Drukowana.h"

using namespace std;
 


 
 
 
 
int main()
{
  std::vector<Book*>Biblioteczka;
    Biblioteczka.push_back(new Drukowana(1,"Siemanko"));
    Biblioteczka[0]->info();
    Biblioteczka.push_back(new Drukowana(4,"WitaM"));
    Biblioteczka[1]->info();
    Biblioteczka.push_back(new Ebook(4,5));
    Biblioteczka.push_back(new Ebook(4,10));
    Biblioteczka[2]->info();
    Biblioteczka[3]->info();
    delete Biblioteczka[0];
    delete Biblioteczka[1];
    delete Biblioteczka[2];
    delete Biblioteczka[3];
      return 0;
}
