/****************************************************************
 * Header for the 'Stoplist' class.
 *
 * This class is basically a data class for a 'set' that holds
 * a stoplist.
 *
 * Author/copyright:  Duncan Buell
 * Date: 24 January 2014
 *
**/

#ifndef STOPLIST_H
#define STOPLIST_H

#include <set>

#include "../../Utilities/Scanner.h"
#include "../../Utilities/Utils.h"

class Stoplist
{
public:
/****************************************************************
 * Constructors and destructors for the class. 
**/
  Stoplist();
  virtual ~Stoplist();

/****************************************************************
 * General functions.
**/

  bool isInStoplist(string word);
  void readData(Scanner& stoplistScanner);
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
  set<string> theStoplist;

};

#endif // STOPLIST_H
