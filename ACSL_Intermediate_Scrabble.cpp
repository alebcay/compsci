#include <iostream>
#include <string>

using namespace std;

int intFirstPosition;
int intSecondPosition;
int intThirdPosition;
int intFourthPosition;
int intFirstMultiplier;
int intSecondMultiplier;
int intThirdMultiplier;
int intFourthMultiplier;
int intWordMultiplier = 1;
int intFirstBasePoints;
int intSecondBasePoints;
int intThirdBasePoints;
int intFourthBasePoints;
int intAnswerOne;
int intAnswerTwo;
int intAnswerThree;
int intAnswerFour;
int intAnswerFive;
string strFirstLetter;
string strSecondLetter;
string strThirdLetter;
string strFourthLetter;
string strWord;

int calc() {
    intWordMultiplier = 1;
    string strPosDirOne;
    cin >> strPosDirOne;
    cout << endl;
    int intPos = strPosDirOne.find_first_of( ',' );
    string strFirstPosition = strPosDirOne.substr(0, intPos);
    string strDirection = strPosDirOne.substr(intPos + 1);
    if ( strFirstPosition == "1" ) {
        intFirstPosition = 1;
    }
    else if ( strFirstPosition == "2" ) {
        intFirstPosition = 2;
    }
    else if ( strFirstPosition == "3" ) {
        intFirstPosition = 3;
    }
    else if ( strFirstPosition == "4" ) {
        intFirstPosition = 4;
    }
    else if ( strFirstPosition == "5" ) {
        intFirstPosition = 5;
    }
    else if ( strFirstPosition == "6" ) {
        intFirstPosition = 6;
    }
    else if ( strFirstPosition == "7" ) {
        intFirstPosition = 7;
    }
    else if ( strFirstPosition == "8" ) {
        intFirstPosition = 8;
    }
    else if ( strFirstPosition == "9" ) {
        intFirstPosition = 9;
    }
    else if ( strFirstPosition == "10" ) {
        intFirstPosition = 10;
    }
    else if ( strFirstPosition == "11" ) {
        intFirstPosition = 11;
    }
    else if ( strFirstPosition == "12" ) {
        intFirstPosition = 12;
    }
    else if ( strFirstPosition == "13" ) {
        intFirstPosition = 13;
    }
    else if ( strFirstPosition == "14" ) {
        intFirstPosition = 14;
    }
    else if ( strFirstPosition == "15" ) {
        intFirstPosition = 15;
    }
    else if ( strFirstPosition == "16" ) {
        intFirstPosition = 16;
    }
    else if ( strFirstPosition == "17" ) {
        intFirstPosition = 17;
    }
    else if ( strFirstPosition == "18" ) {
        intFirstPosition = 18;
    }
    else if ( strFirstPosition == "19" ) {
        intFirstPosition = 19;
    }
    else if ( strFirstPosition == "20" ) {
        intFirstPosition = 20;
    }
    else if ( strFirstPosition == "21" ) {
        intFirstPosition = 21;
    }
    else if ( strFirstPosition == "22" ) {
        intFirstPosition = 22;
    }
    else if ( strFirstPosition == "23" ) {
        intFirstPosition = 23;
    }
    else if ( strFirstPosition == "24" ) {
        intFirstPosition = 24;
    }
    else if ( strFirstPosition == "25" ) {
        intFirstPosition = 25;
    }
    else if ( strFirstPosition == "26" ) {
        intFirstPosition = 26;
    }
    else if ( strFirstPosition == "27" ) {
        intFirstPosition = 27;
    }
    else if ( strFirstPosition == "28" ) {
        intFirstPosition = 28;
    }
    else if ( strFirstPosition == "29" ) {
        intFirstPosition = 29;
    }
    else if ( strFirstPosition == "30" ) {
        intFirstPosition = 30;
    }
    else if ( strFirstPosition == "31" ) {
        intFirstPosition = 31;
    }
    else if ( strFirstPosition == "32" ) {
        intFirstPosition = 32;
    }
    else if ( strFirstPosition == "33" ) {
        intFirstPosition = 33;
    }
    else if ( strFirstPosition == "34" ) {
        intFirstPosition = 34;
    }
    else if ( strFirstPosition == "35" ) {
        intFirstPosition = 35;
    }
    else if ( strFirstPosition == "36" ) {
        intFirstPosition = 36;
    }
    else if ( strFirstPosition == "37" ) {
        intFirstPosition = 37;
    }
    else {
        cout << "Invalid first position.";
        cout << endl;
        return 0;
    }
    if ( strDirection == "H" || strDirection == "h" ) {
        intSecondPosition = intFirstPosition + 1;
        intThirdPosition = intFirstPosition + 2;
        intFourthPosition = intFirstPosition + 3;
    }
    else if ( ( strDirection == "v" || strDirection == "V" ) && intFirstPosition <= 10 ) {
        intSecondPosition = intFirstPosition + 10;
        intThirdPosition = intFirstPosition + 20;
        intFourthPosition = intFirstPosition + 30;
    }
    else {
        cout << endl << "Direction or start position invalid.";
        return 0;
    }

    if (intFirstPosition == 3 || intFirstPosition == 9 || intFirstPosition == 15 || intFirstPosition == 21 || intFirstPosition == 27 || intFirstPosition == 33 || intFirstPosition == 39) {
        intFirstMultiplier = 2;
    }
    else if (intFirstPosition == 5 || intFirstPosition == 10 || intFirstPosition == 20 || intFirstPosition == 25 || intFirstPosition == 30 || intFirstPosition == 35 || intFirstPosition == 40) {
        intFirstMultiplier = 3;
    }
    else if (intFirstPosition == 7 || intFirstPosition == 14 || intFirstPosition == 28) {
        intFirstMultiplier = 1;
        intWordMultiplier = 2;
    }
    else if (intFirstPosition == 8 || intFirstPosition == 16 || intFirstPosition == 24 || intFirstPosition == 32) {
        intFirstMultiplier = 1;
        intWordMultiplier = 3;
    }
    else {
        intFirstMultiplier = 1;
    }

    if (intSecondPosition == 3 || intSecondPosition == 9 || intSecondPosition == 15 || intSecondPosition == 21 || intSecondPosition == 27 || intSecondPosition == 33 || intSecondPosition == 39) {
        intSecondMultiplier = 2;
    }
    else if (intSecondPosition == 5 || intSecondPosition == 10 || intSecondPosition == 20 || intSecondPosition == 25 || intSecondPosition == 30 || intSecondPosition == 35 || intSecondPosition == 40) {
        intSecondMultiplier = 3;
    }
    else if (intSecondPosition == 7 || intSecondPosition == 14 || intSecondPosition == 28) {
        intSecondMultiplier = 1;
        intWordMultiplier = 2;
    }
    else if (intSecondPosition == 8 || intSecondPosition == 16 || intSecondPosition == 24 || intSecondPosition == 32) {
        intSecondMultiplier = 1;
        intWordMultiplier = 3;
    }
    else {
        intSecondMultiplier = 1;
    }

    if (intThirdPosition == 3 || intThirdPosition == 9 || intThirdPosition == 15 || intThirdPosition == 21 || intThirdPosition == 27 || intThirdPosition == 33 || intThirdPosition == 39) {
        intThirdMultiplier = 2;
    }
    else if (intThirdPosition == 5 || intThirdPosition == 10 || intThirdPosition == 20 || intThirdPosition == 25 || intThirdPosition == 30 || intThirdPosition == 35 || intThirdPosition == 40) {
        intThirdMultiplier = 3;
    }
    else if (intThirdPosition == 7 || intThirdPosition == 14 || intThirdPosition == 28) {
        intThirdMultiplier = 1;
        intWordMultiplier = 2;
    }
    else if (intThirdPosition == 8 || intThirdPosition == 16 || intThirdPosition == 24 || intThirdPosition == 32) {
        intThirdMultiplier =1;
        intWordMultiplier = 3;
    }
    else {
        intThirdMultiplier = 1;
    }

    if (intFourthPosition == 3 || intFourthPosition == 9 || intFourthPosition == 15 || intFourthPosition == 21 || intFourthPosition == 27 || intFourthPosition == 33 || intFourthPosition == 39) {
        intFourthMultiplier = 2;
    }
    else if (intFourthPosition == 5 || intFourthPosition == 10 || intFourthPosition == 20 || intFourthPosition == 25 || intFourthPosition == 30 || intFourthPosition == 35 || intFourthPosition == 40) {
        intFourthMultiplier = 3;
    }
    else if (intFourthPosition == 7 || intFourthPosition == 14 || intFourthPosition == 28) {
        intFourthMultiplier = 1;
        intWordMultiplier = 2;
    }
    else if (intFourthPosition == 8 || intFourthPosition == 16 || intFourthPosition == 24 || intFourthPosition == 32) {
        intFourthMultiplier = 1;
        intWordMultiplier = 3;
    }
    else {
        intFourthMultiplier = 1;
    }
	intAnswerOne = (( intFirstBasePoints * intFirstMultiplier ) + ( intSecondBasePoints * intSecondMultiplier) + ( intThirdBasePoints * intThirdMultiplier) + ( intFourthBasePoints * intFourthMultiplier)) * intWordMultiplier;
    cout << intAnswerOne;
    cout << endl;
}

int main() {
    cout << "Enter the word (4 letters, case insensitive, separated by commas, no whitespace characters): ";
    cin >> strWord;
    strFirstLetter = strWord.substr (0,1);
    strSecondLetter = strWord.substr (2,1);
    strThirdLetter = strWord.substr(4,1);
    strFourthLetter = strWord.substr(6,1);
    if (strFirstLetter == "A" || strFirstLetter == "E" || strFirstLetter == "a" || strFirstLetter == "e") {
        intFirstBasePoints = 1;
    }
    else if (strFirstLetter == "D" || strFirstLetter == "R" || strFirstLetter == "d" || strFirstLetter == "r") {
        intFirstBasePoints = 2;
    }
    else if (strFirstLetter == "B" || strFirstLetter == "M" || strFirstLetter == "b" || strFirstLetter == "m") {
        intFirstBasePoints = 3;
    }
    else if (strFirstLetter == "V" || strFirstLetter == "Y" || strFirstLetter == "v" || strFirstLetter == "y") {
        intFirstBasePoints = 4;
    }
    else if (strFirstLetter == "J" || strFirstLetter == "X" || strFirstLetter == "j" || strFirstLetter == "x") {
        intFirstBasePoints = 8;
    }
    else {
        cout << "Invalid letter. Accepted: A, E, D, R, B, M, V, Y, J, X (case insensitive)";
        return 0;
    }

    if (strSecondLetter == "A" || strSecondLetter == "E" || strSecondLetter == "a" || strSecondLetter == "e") {
        intSecondBasePoints = 1;
    }
    else if (strSecondLetter == "D" || strSecondLetter == "R" || strSecondLetter == "d" || strSecondLetter == "r") {
        intSecondBasePoints = 2;
    }
    else if (strSecondLetter == "B" || strSecondLetter == "M" || strSecondLetter == "b" || strSecondLetter == "m") {
        intSecondBasePoints = 3;
    }
    else if (strSecondLetter == "V" || strSecondLetter == "Y" || strSecondLetter == "v" || strSecondLetter == "y") {
        intSecondBasePoints = 4;
    }
    else if (strSecondLetter == "J" || strSecondLetter == "X" || strSecondLetter == "j" || strSecondLetter == "x") {
        intSecondBasePoints = 8;
    }
    else {
        cout << "Invalid letter. Accepted: A, E, D, R, B, M, V, Y, J, X (case insensitive)";
        return 0;
    }

    if (strThirdLetter == "A" || strThirdLetter == "E" || strThirdLetter == "a" || strThirdLetter == "e") {
        intThirdBasePoints = 1;
    }
    else if (strThirdLetter == "D" || strThirdLetter == "R" || strThirdLetter == "d" || strThirdLetter == "r") {
        intThirdBasePoints = 2;
    }
    else if (strThirdLetter == "B" || strThirdLetter == "M" || strThirdLetter == "b" || strThirdLetter == "m") {
        intThirdBasePoints = 3;
    }
    else if (strThirdLetter == "V" || strThirdLetter == "Y" || strThirdLetter == "v" || strThirdLetter == "y") {
        intThirdBasePoints = 4;
    }
    else if (strThirdLetter == "J" || strThirdLetter == "X" || strThirdLetter == "j" || strThirdLetter == "x") {
        intThirdBasePoints = 8;
    }
    else {
        cout << "Invalid letter. Accepted: A, E, D, R, B, M, V, Y, J, X (case insensitive)";
        return 0;
    }

    if (strFourthLetter == "A" || strFourthLetter == "E" || strFourthLetter == "a" || strFourthLetter == "e") {
        intFourthBasePoints = 1;
    }
    else if (strFourthLetter == "D" || strFourthLetter == "R" || strFourthLetter == "d" || strFourthLetter == "r") {
        intFourthBasePoints = 2;
    }
    else if (strFourthLetter == "B" || strFourthLetter == "M" || strFourthLetter == "b" || strFourthLetter == "m") {
        intFourthBasePoints = 3;
    }
    else if (strFourthLetter == "V" || strFourthLetter == "Y" || strFourthLetter == "v" || strFourthLetter == "y") {
        intFourthBasePoints = 4;
    }
    else if (strFourthLetter == "J" || strFourthLetter == "X" || strFourthLetter == "j" || strFourthLetter == "x") {
        intFourthBasePoints = 8;
    }
    else {
        cout << "Invalid letter. Accepted: A, E, D, R, B, M, V, Y, J, X (case insensitive)";
        return 0;
    }

    cout << endl;
    cout << "Enter a starting position for the word between 1-37 (1 of 5) and H or V for direction: ";
    calc();
    cout << "Enter a starting position for the word between 1-37 (2 of 5) and H or V for direction: ";
    calc();
    cout << "Enter a starting position for the word between 1-37 (3 of 5) and H or V for direction: ";
    calc();
    cout << "Enter a starting position for the word between 1-37 (4 of 5) and H or V for direction: ";
    calc();
    cout << "Enter a starting position for the word between 1-37 (5 of 5) and H or V for direction: ";
    calc();
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
