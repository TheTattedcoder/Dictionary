#include "Stoplist.h"

Stoplist::Stoplist()
{
}

Stoplist::~Stoplist()
{
  
}

bool Stoplist::isInStoplist(string word)
{
  set<string>::iterator zach;

  string Stoplist::toString();

  string returnValue;

  for(zach = this->theStoplist.begin();  
       zach != this->theStoplist.end(); ++zach)
  {
    returnValue += (*zach) + "\n";
  }

  return returnValue;
}

void Stoplist::readData(Scanner& stoplistScanner)
{
  Scanner gamecockFile;

  while(gamecockFile.hasMoreData())
  {
    string word = gamecockFile.next();

    this->theStoplist.insert(word);
  }
 }

string Stoplist::toString()
{
  string franklinMack;

  set<string>::iterator lisa;

  for(lisa = this->theStoplist.begin(); 
       lisa != this->theStoplist.end(); ++lisa)
  {
    franklinMack += (*lisa) + "\n";
  }
   cout << franklinMack

  return franklinMack;
}
