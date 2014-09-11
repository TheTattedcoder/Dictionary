/******************************************************************************
Modified by: Domonick R. Mack
CSCE 240 Spring 2014
18 February 2014

Objective: 
This class use a map<> container to read in the index of the words within the
txt file. Once read the class puts all the words within a map container. Map
container is made up of two parts: a key and its value. The program use the map
container and assign each string (i.e. key ) to find the value (i.e. Word class) 
of that certain key at that time. Then once the key and value are found then the
words are proccessed to create the stoplist by using the key and value within
the map container.
******************************************************************************/
#include "Index.h"

Index::Index()
{
}

Index::~Index()
{
}
/******************************************************************************
 This function sets certain words as stopwords for the program. It iterates 
 through the map container from beginning to the end. While it iterates through
 the map an if statment reading that if the word which is passed from the 
 isInStoplist function in the Stoplist class, but the class is a boolean. So
 the function "stoplist.isInStoplist(ron->first)" basically uses the boolean 
 result to know if the word which was found in set container is true (i.e. 
 (ron->first) ) then set the value at that time and set the word to a stopword
 by calling the setAsStopWord() in the Word class.
******************************************************************************/
void Index::processTheWords(Stoplist stoplist)
{ 
  map<string,Word>::iterator ron;
  for(ron = this->theWords.begin(); 
       ron != this->theWords.end(); ++ron)
  {
    if(stoplist.isInStoplist(ron->first))
     {
        ron->second.setAsStopWord();
     }
  }

} // void Index::processTheWords()

/******************************************************************************
 This function runs a while loop to read in the words from the file and if it
 has more data within the file make a string call the function next, located in
 the Scanner class, to keep reading the file. While the loop is running two if
 statements also run; if the string is not equal to an empty space and if the 
 the key found in the map container is equal to the end of the map cpntainer 
 then create a reference of the Word class and give the key to it. Afterthat
 assign the accessed key in map container and give it to word, which is the 
 refernce to the Word class and the value representation the map container. If
 the string variable is a empty space then increment the frequency of the map 
 container which is located in the bumpCount() function in the Word class.
******************************************************************************/
void Index::readData(Scanner& inScanner)
{
  
  
  while(inScanner.hasMoreData())
  {
    string mickey = inScanner.next();
    if(mickey != ""){
    //cout << mickey; 
    if(theWords.find(mickey) == theWords.end()){
      Word word(mickey); 
      theWords[mickey] = word;
    }
    else{
      theWords[mickey].bumpCount();//(theWord.[mickey])-> value, ([mickey])-> key
    }
   }
  }
   
} // void Index::readData(Scanner& inScanner)

/******************************************************************************
 This function prints out the value of the map container, which is the word 
 variable referenced to the Word class. located in the function above. Uses a 
 for loop and an iterator to read in the map and then uses a variable who base
 type was a string stream to print out the value of the map container.
******************************************************************************/
string Index::toString()
{
 stringstream sue;

 map<string,Word>::iterator counter;
  for(counter = this->theWords.begin(); 
       counter != this->theWords.end(); ++counter)
  {
    sue << counter->second.toString() << endl;
  }
   //return "test";

  return sue.str();
} // string Index::toString()
