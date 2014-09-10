Dictionary

The main purpose of the program is the beginnings of a program that would
parse text and analyze it. This program has been substantially simplied
from what would actually be needed for text analysis, but you should be
able to see what would go into the analysis of text.
And the primary purposes of this are to have you code with string data
and to give you experience with the STL containers and their iterators.
You have been given a \stop list" of common words that don't usually
get included in text analysis.
You have been given the text of Darwin's Voyage of the Beagle from the
Gutenberg Project.
I have cleaned up the text by removing punctuation, lower-casing all the
words, etc. This is both good and bad. In a real text program, you would
also have a list of proper nouns and you would rst parse things so as to deal
properly with things like possessives. In this case, text that originally read
as \the Beagle's course" would have been changed to \the beagle s course",
thus introducing a one-character word \s" into the text where it should not
be.
Don't worry about this.
You must add to the determination of stop words, however, that all one-
character words are to be treated as stop words.
==========

C++ Program
