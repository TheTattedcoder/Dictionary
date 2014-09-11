/****************************************************************
 * Header for the 'Word' class.
 *
 * This class is basically a data payload for a single candidate.
 * We make the variables public so we can do things like
 * increment them as we tally the votes. 
 *
 * Author/copyright:  Duncan Buell
 * Date: 24 January 2014
 *
**/

#ifndef WORD_H
#define WORD_H

#include "../../Utilities/Utils.h"

class Word
{
public:
/****************************************************************
 * Constructors and destructors for the class. 
**/
  Word();
  Word(string wordString);
  virtual ~Word();

/****************************************************************
 * Accessors and mutators.
**/
  string getOriginal();
  bool isAStopWord();
  void setAsStopWord();

/****************************************************************
 * General functions.
**/

  void bumpCount();
  string toString();

/****************************************************************
 * Variables.
**/

private:
/****************************************************************
 * Functions.
**/

/****************************************************************
 * Variables.
**/
  bool isStopWord;
  int freq;
  string original;

};

#endif // WORD_H
