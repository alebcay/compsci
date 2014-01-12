///==================================================///
/// Guess a Number Game Using srand, rand, and time  ///
/// Written by Caleb Xu                              ///
/// Project start: 12/2/2013                         ///
///==================================================///


#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
    srand(time(NULL));
    bool guessedCorrect = false;
    cout << "Welcome to Guess A Number!" << endl;
    int targetNumber = ( rand() % 100 ) + 1;
    int iteration = 1;
    while ( guessedCorrect == false ) {
        cout << "Please guess a number between 1-100: ";
        int currentGuess;
        cin >> currentGuess;
        if ( currentGuess == targetNumber ) {
            guessedCorrect = true;
        }
        else if ( currentGuess < targetNumber ) {
            cout << "Wrong! Guess higher!" << endl;
            iteration++;
        }
        else if ( currentGuess > targetNumber ) {
            cout << "Wrong! Guess lower!" << endl;
            iteration++;
        }
        else {
            cout << "Hmmm...something's up with this program. Please contact the developer." << endl;
            return 0;
        }
    }
    if ( iteration == 1 ) {
        cout << "You got it right! The number was " << targetNumber << " and it took you " << iteration << " try to get it. " << endl;
    }
    else {
        cout << "You got it right! The number was " << targetNumber << " and it took you " << iteration << " tries to get it. " << endl;
    }
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
