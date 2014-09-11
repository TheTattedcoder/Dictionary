#include "Word.h"

Word::Word()
{
}

Word::Word(string wordString)
{
  string ramon;
  original = ramon;
  int freq = 1;
  isAStopWord = false;
}

Word::~Word()
{
}

string Word::getOriginal()
{
 return original; 
} // string Word::getOriginal()

bool Word::isAStopWord()
{
  return isStopWord;
} // bool Word::isAStopWord()

void Word::setAsStopWord()
{
   isStopWord = true;
} // void Word::setAsStopWord()

void Word::bumpCount()
{
  freq++;
} // void Word::bumpCount()

string Word::toString()
{
  stringstream Dom;
  
  Dom << original << " " << freq;
} // string Word::toString()

