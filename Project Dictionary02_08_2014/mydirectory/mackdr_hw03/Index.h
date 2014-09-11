/******************************************************************************
 * Header for the 'Index' class
 *
 * Author/copyright:  Duncan Buell
 * Date: 11 January 2014
 * Modified by: Domonick R. Mack
 * CSCE 240 Spring 2014
 * Date: 18 February 2014
 ******************************************************************************/

#ifndef INDEX_H
#define INDEX_H

#include <map>

#include "../../Utilities/Scanner.h"
#include "../../Utilities/Utils.h"

#include "Stoplist.h"
#include "Word.h"

class Index
{
public:
/****************************************************************
 * Constructors and destructors for the class. 
**/
  Index();
  virtual ~Index();

/****************************************************************
 * General functions.
**/
  void processTheWords(Stoplist stoplist);
  void readData(Scanner& inScanner);

  string toString();

private:
  map<string, Word> theWords;

/****************************************************************
 * General private functions.
**/
};

#endif // INDEX_H
