/*******************************************************************************
Modified by: Domonick R. Mack
CSCE 240 Spring 2014
19 February 2014

Objective:
This Word.cpp file is where the program will instantiate the original words in
the 'txt' file, the frequency (i.e. the number of time the word shows up in the 
'txt' file. This is also where the program will get the 'stopword' and set that
certain word as a 'stopword'.

********************************************************************************/
#include "Word.h"

Word::Word()
{
}

Word::Word(string wordString)
{
  // assigning the variable 'original' located in Word.h file to parameter 
  original = wordString;
  //assign freq variable in Word.h file to one
  freq = 1;
  //assign the boolean to false
  isStopWord = false;
}

Word::~Word()
{
}
/******************************************************************************
This function getOriginal() returns the string value of the original word that 
is located in the 'txt' file. Once we get the string value of the original word
it gives the word to the parameter in the function Word::Word(string wordString). 
******************************************************************************/
string Word::getOriginal()
{
  return original; 
} // string Word::getOriginal()
/******************************************************************************
This function returns a boolean. It basically gets a true or false result and 
returns it to see if the word is a 'stopword' or not.
******************************************************************************/
bool Word::isAStopWord()
{
  return isStopWord;
} // bool Word::isAStopWord()
/******************************************************************************
This function tells if the word that the program finds is a 'stopword' then set 
the boolean variable to true.
******************************************************************************/
void Word::setAsStopWord()
{
  isStopWord = true;
} // void Word::setAsStopWord()
/******************************************************************************
This function just increments the frequency by 1 every time a copy of a regular
word and 'stopword'
******************************************************************************/
void Word::bumpCount()
{
  freq++;
} // void Word::bumpCount()
/******************************************************************************
This function prints out the results (i.e. the original word the frequency) by
using a stringstream data type named Dom. Then it uses a if statement that says
if the word that is read is a 'stopword' then append (label) the string 
"STOPWORD".
******************************************************************************/
string Word::toString()
{
  stringstream Dom;
  Dom << original << " " << freq;
  if(isAStopWord() == true)
  {
     Dom << " " << "STOPWORD";
  }
  return Dom.str();
} // string Word::toString()

