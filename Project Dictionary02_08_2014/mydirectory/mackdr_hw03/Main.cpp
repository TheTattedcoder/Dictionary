#include "Main.h"

/****************************************************************
 * Main program for doing indexing of words.
 *
 * Author/copyright:  Duncan Buell. All rights reserved.
 * Date: 24 January 2014
 *
**/

static const string TAG = "Main: ";

int main(int argc, char *argv[])
{
  string stoplistFileName = "";
  string inFileName = "";
  string outFileName = "";
  string logFileName = "";
  ofstream outStream;

  Scanner stoplistScanner;
  Scanner inScanner;

  Stoplist stoplist;
  Index index;

  Utils::CheckArgs(4, argc, argv, "stoplistfilename infilename outfilename logfilename");
  stoplistFileName = static_cast<string>(argv[1]); // DO NOT USE OLD STYLE CAST!!!!!
  inFileName = static_cast<string>(argv[2]);
  outFileName = static_cast<string>(argv[3]);
  logFileName = static_cast<string>(argv[4]);

  Utils::FileOpen(outStream, outFileName);
  Utils::LogFileOpen(logFileName);

  Utils::logStream << TAG << "Beginning execution" << endl;
  Utils::logStream << TAG << "stoplistfile:  '" << stoplistFileName << "'" << endl;
  Utils::logStream << TAG << "infile:  '" << inFileName << "'" << endl;
  Utils::logStream << TAG << "outfile: '" << outFileName << "'" << endl;
  Utils::logStream << TAG << "logfile: '" << logFileName << "'" << endl;
  Utils::logStream.flush();

  stoplistScanner.openFile(stoplistFileName);
  stoplist.readData(stoplistScanner);
//  outStream << TAG << "STOPLIST \n" << stoplist.toString() << endl;
  stoplistScanner.close();

  inScanner.openFile(inFileName);
  index.readData(inScanner);
  index.processTheWords(stoplist);
  outStream << TAG << "DATA \n" << index.toString() << endl;

  Utils::logStream << TAG << "Ending execution" << endl;
  Utils::logStream.flush();

  Utils::FileClose(outStream);
  Utils::FileClose(Utils::logStream);

  return 0;
}
