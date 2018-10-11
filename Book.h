#pragma once

class Book
{
  unsigned int NumberOfSites;
public:
  virtual void info()=0;
  Book(unsigned int);
  virtual ~Book(){};
};
 



