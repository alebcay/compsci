#include <iostream> ///contains everything we need
#include <string> ///already indirectly inherited, but just in case

using namespace std;

string strRawSentence; ///used for user input, word splicing operations will be performed on this copy
string strRawSentenceBackup; ///save it again, just in case we'll need it later
string strSubstringCarrier; ///this will catch the spliced word pieces and the pig latin operations are performed on this
string strPrefixCarrier; ///find the consonant prefix on the word if larger than one letter
string strAppliedSubstringCarrier; ///once we have a nice spliced word, we can copy it and append it to our waiting "pig latin" sentence
string strOutput; ///the final sentence we will be outputting
int intSpaceLocation = 0; ///when we find the first space in the sentence, this will hold the position. default to 0 in case there are no spaces left in the sentence
bool boolApostrophePossession = false; ///is there an apostrophe (for possesion purposes only, not contractions) in the sentence that we need to move?
char charPunctuationRelocator; ///determine the type of punctuation at the end of a word, if any

int input() { ///get the user input
    cout << "Enter a sentence to be translated into pig latin (no punctuation, please)." << endl << endl;
    getline(cin, strRawSentence); ///save to strRawSentence, ignore spaces
    strRawSentenceBackup = strRawSentence; ///make a copy before we do anything
}

int splice() { ///cut words out of the sentence
    if (strRawSentence.find(" ") == string::npos) { ///if there aren't any spaces left
        strSubstringCarrier = strRawSentence; ///the remainder of the sentence must be the last word
    }
    else { ///otherwise, there is more than one word left
        intSpaceLocation = strRawSentence.find(" "); ///find the space separating the first two words
        strSubstringCarrier = strRawSentence.substr(0,intSpaceLocation); ///pull out the first word
        strRawSentence.erase(0,intSpaceLocation + 1); ///erase the first word and the space following. now we have a situation similar to how we first started.
    }
}
int scrubPunctuation() { ///before we do anything to the word, check for some punctuation
    boolApostrophePossession = false; ///default to false. we don't want to have all subsequent words after one with an apostrophe to have them also
    if ( strSubstringCarrier.find("'s") != string::npos ) { ///if there is at least one "'s" in the word
        boolApostrophePossession = true; ///then there is an apostrophe to deal with
        strSubstringCarrier.erase(strSubstringCarrier.size() - 2,2); ///shave off the original apostrophe, so we don't end up with two of them
    }
    if ( strSubstringCarrier.find(".") != string::npos ) { ///if there's a period
        charPunctuationRelocator = '.'; ///then we'll have to add one later
        strSubstringCarrier.erase(strSubstringCarrier.size() - 1 ,1); ///shave off the original period, so we don't end up with two of them
    }
    else if ( strSubstringCarrier.find(",") != string::npos ) { ///if there's a comma
        charPunctuationRelocator = ','; ///then we'll have to add one later
        strSubstringCarrier.erase(strSubstringCarrier.size() - 1 ,1); ///shave off the original comma, so we don't end up with two of them
    }
    else if ( strSubstringCarrier.find("?") != string::npos ) { ///if there's a question mark
        charPunctuationRelocator = '?'; ///then we'll have to add one later
        strSubstringCarrier.erase(strSubstringCarrier.size() - 1 ,1); ///shave off the original question mark, so we don't end up with two of them
    }
    else if ( strSubstringCarrier.find("!") != string::npos ) { ///if there's an exclamation mark
        charPunctuationRelocator = '!'; ///then we'll have to add one later
        strSubstringCarrier.erase(strSubstringCarrier.size() - 1 ,1); ///shave off the original exclamation mark, so we don't end up with two of them
    }
    else { ///otherwise there's no punctuation
        charPunctuationRelocator = '_'; ///set to underscore (this will be interpreted as "no punctuation" later)
    }
}
int apply() { ///apply pig latin transformations to word
    if ( strSubstringCarrier[0] == 'a' || strSubstringCarrier[0] == 'A' || strSubstringCarrier[0] == 'e' || strSubstringCarrier[0] == 'E' || strSubstringCarrier[0] == 'i' || strSubstringCarrier[0] == 'I' || strSubstringCarrier[0] == 'o' || strSubstringCarrier[0] == 'O' || strSubstringCarrier[0] == 'u' || strSubstringCarrier[0] == 'U' ) {
        strAppliedSubstringCarrier = strSubstringCarrier + "way"; ///if it starts with a vowel, just add "way" to the end
    }
    else if ( strSubstringCarrier[0] == 'y' || strSubstringCarrier[0] == 'Y' ) { ///if it starts with "y", then in most usage cases it must be a consanant
        strSubstringCarrier.erase(0,1); ///erase the start letter
        strAppliedSubstringCarrier = strSubstringCarrier + "yay"; ///and add "y + ay" to the end
    }
    else if ( strSubstringCarrier[0] != 'a' || strSubstringCarrier[0] != 'A' || strSubstringCarrier[0] != 'e' || strSubstringCarrier[0] != 'E' || strSubstringCarrier[0] != 'i' || strSubstringCarrier[0] != 'I' || strSubstringCarrier[0] != 'o' || strSubstringCarrier[0] != 'O' || strSubstringCarrier[0] != 'u' || strSubstringCarrier[0] != 'U' ) {
        bool boolNextLetterIsConsanant = true; ///default to true so we check for the next letter
        int intPositionofLastContiguousConsanant = 0; ///default to zero in case there is only one initial consanant
        while( boolNextLetterIsConsanant == true ) { ///as long as the next letter is still a consanant
            if ( strSubstringCarrier[intPositionofLastContiguousConsanant] == 'a' || strSubstringCarrier[intPositionofLastContiguousConsanant] == 'A' || strSubstringCarrier[intPositionofLastContiguousConsanant] == 'e' || strSubstringCarrier[intPositionofLastContiguousConsanant] == 'E' || strSubstringCarrier[intPositionofLastContiguousConsanant] == 'i' || strSubstringCarrier[intPositionofLastContiguousConsanant] == 'I' || strSubstringCarrier[intPositionofLastContiguousConsanant] == 'o' || strSubstringCarrier[intPositionofLastContiguousConsanant] == 'O' || strSubstringCarrier[intPositionofLastContiguousConsanant] == 'u' || strSubstringCarrier[intPositionofLastContiguousConsanant] == 'U' ) {
                boolNextLetterIsConsanant = false; ///if the next letter is a vowel, we don't need to check any more because that's the end of what we need to move to the end of the word
            }
            else { ///if there's still more initial consanants to come, then we need to keep looking
                boolNextLetterIsConsanant = true;
                intPositionofLastContiguousConsanant++; ///keep track of how many letters we need to move later
            }
        }
        strPrefixCarrier = strSubstringCarrier.substr(0,intPositionofLastContiguousConsanant); ///make a substring of the consanants we need to move
        strSubstringCarrier.erase(0,intPositionofLastContiguousConsanant); ///erase the initial consanants
        strAppliedSubstringCarrier = strSubstringCarrier + strPrefixCarrier + "ay"; ///add the prefix substring and "ay" to the end
    }
    if ( boolApostrophePossession == true ) { ///if there is an apostrophe used to indicate possession
        strAppliedSubstringCarrier = strAppliedSubstringCarrier + "'s"; ///add it after we've done with all of that letter moving
    }
    if ( charPunctuationRelocator != '_' ) { ///if there's any punctuation
        strAppliedSubstringCarrier = strAppliedSubstringCarrier + charPunctuationRelocator; ///add it
    }
}
int append() {
    strOutput = strOutput + strAppliedSubstringCarrier + " "; ///add our word to the growing output sentence
}

main() {
    input(); ///get user input
    while ( strRawSentence.size() > 0 && strRawSentence.find(" ") != string::npos ) { ///as long as there are words left
        splice(); ///cut words out
        scrubPunctuation(); ///scrub it for punctuation
        apply(); ///do pig latin stuff on it
        append(); ///add it to the sentence
    }
    ///at the end, there will be one word left
    splice();
    scrubPunctuation();
    apply();
    append();
    cout << string(80, '-'); ///draw separator line
    cout << strOutput << endl;; ///output the finished sentence
}

/** =====================================================================

This is free and unencumbered software released into the public domain.

Anyone is free to copy, modify, publish, use, compile, sell, or
distribute this software, either in source code form or as a compiled
binary, for any purpose, commercial or non-commercial, and by any
means.

In jurisdictions that recognize copyright laws, the author or authors
of this software dedicate any and all copyright interest in the
software to the public domain. We make this dedication for the benefit
of the public at large and to the detriment of our heirs and
successors. We intend this dedication to be an overt act of
relinquishment in perpetuity of all present and future rights to this
software under copyright law.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

For more information, please refer to http://unlicense.org/

**/

