#include <iostream>

using namespace std;

int main() {

    ///-----------------------------------------------------------------
    /// STEP 1: DECLARE VARIABLES
    ///-----------------------------------------------------------------


    ///letter positions on board
    int intFirstPosition;
    int intSecondPosition;
    int intThirdPosition;
    int intFourthPosition;

    ///letter multipliers based on letter position
    int intFirstMultiplier;
    int intSecondMultiplier;
    int intThirdMultiplier;
    int intFourthMultiplier;

    ///word multiplier based on letter position, default is "1"
    int intWordMultiplier = 1;

    ///base points based on actual letter used
    int intFirstBasePoints;
    int intSecondBasePoints;
    int intThirdBasePoints;
    int intFourthBasePoints;

    ///answers derived from inputs 1-5
    int intAnswerOne;
    int intAnswerTwo;
    int intAnswerThree;
    int intAnswerFour;
    int intAnswerFive;

    ///the actual letters being used in the Scrabble
    char charFirstLetter;
    char charSecondLetter;
    char charThirdLetter;
    char charFourthLetter;


    ///-----------------------------------------------------------------
    /// STEP 2: GET LETTERS TO FORM A WORD
    ///-----------------------------------------------------------------

    cout << "ACSL Scrabble (Junior Level) v1.1" << endl;
    cout << "Written by Caleb Xu for the ACSL Contest #1 2013-2014" << endl;
    cout << "Questions? Consult the README file included with this software." << endl;
    cout << "---------------------------------------------------------------" << endl;
    cout << "Enter the first letter of the word: ";
    cin >> charFirstLetter;
    if (charFirstLetter == 'A' || charFirstLetter == 'E' || charFirstLetter == 'a' || charFirstLetter == 'e') {
        intFirstBasePoints = 1;
    }
    else if (charFirstLetter == 'D' || charFirstLetter == 'R' || charFirstLetter == 'd' || charFirstLetter == 'r') {
        intFirstBasePoints = 2;
    }
    else if (charFirstLetter == 'B' || charFirstLetter == 'M' || charFirstLetter == 'b' || charFirstLetter == 'm') {
        intFirstBasePoints = 3;
    }
    else if (charFirstLetter == 'V' || charFirstLetter == 'Y' || charFirstLetter == 'v' || charFirstLetter == 'y') {
        intFirstBasePoints = 4;
    }
    else if (charFirstLetter == 'J' || charFirstLetter == 'X' || charFirstLetter == 'j' || charFirstLetter == 'x') {
        intFirstBasePoints = 8;
    }
    else {
        cout << "Cause: Invalid letter. Accepted: A, E, D, R, B, M, V, Y, J, X (case insensitive)";
        return 0;
    }
    cout << endl;
    cout << "Enter the second letter of the word: ";
    cin >> charSecondLetter;
    if (charSecondLetter == 'A' || charSecondLetter == 'E' || charSecondLetter == 'a' || charSecondLetter == 'e') {
        intSecondBasePoints = 1;
    }
    else if (charSecondLetter == 'D' || charSecondLetter == 'R' || charSecondLetter == 'd' || charSecondLetter == 'r') {
        intSecondBasePoints = 2;
    }
    else if (charSecondLetter == 'B' || charSecondLetter == 'M' || charSecondLetter == 'b' || charSecondLetter == 'm') {
        intSecondBasePoints = 3;
    }
    else if (charSecondLetter == 'V' || charSecondLetter == 'Y' || charSecondLetter == 'v' || charSecondLetter == 'y') {
        intSecondBasePoints = 4;
    }
    else if (charSecondLetter == 'J' || charSecondLetter == 'X' || charSecondLetter == 'j' || charSecondLetter == 'x') {
        intSecondBasePoints = 8;
    }
    else {
        cout << "Cause: Invalid letter. Accepted: A, E, D, R, B, M, V, Y, J, X (case insensitive)";
        return 0;
    }
    cout << endl;
    cout << "Enter the third letter of the word: ";
    cin >> charThirdLetter;
    if (charThirdLetter == 'A' || charThirdLetter == 'E' || charThirdLetter == 'a' || charThirdLetter == 'e') {
        intThirdBasePoints = 1;
    }
    else if (charThirdLetter == 'D' || charThirdLetter == 'R' || charThirdLetter == 'd' || charThirdLetter == 'r') {
        intThirdBasePoints = 2;
    }
    else if (charThirdLetter == 'B' || charThirdLetter == 'M' || charThirdLetter == 'b' || charThirdLetter == 'm') {
        intThirdBasePoints = 3;
    }
    else if (charThirdLetter == 'V' || charThirdLetter == 'Y' || charThirdLetter == 'v' || charThirdLetter == 'y') {
        intThirdBasePoints = 4;
    }
    else if (charThirdLetter == 'J' || charThirdLetter == 'X' || charThirdLetter == 'j' || charThirdLetter == 'x') {
        intThirdBasePoints = 8;
    }
    else {
        cout << "Invalid letter. Accepted: A, E, D, R, B, M, V, Y, J, X (case insensitive)";
        return 0;
    }
    cout << endl;
    cout << "Enter the fourth letter of the word: ";
    cin >> charFourthLetter;
    if (charFourthLetter == 'A' || charFourthLetter == 'E' || charFourthLetter == 'a' || charFourthLetter == 'e') {
        intFourthBasePoints = 1;
    }
    else if (charFourthLetter == 'D' || charFourthLetter == 'R' || charFourthLetter == 'd' || charFourthLetter == 'r') {
        intFourthBasePoints = 2;
    }
    else if (charFourthLetter == 'B' || charFourthLetter == 'M' || charFourthLetter == 'b' || charFourthLetter == 'm') {
        intFourthBasePoints = 3;
    }
    else if (charFourthLetter == 'V' || charFourthLetter == 'Y' || charFourthLetter == 'v' || charFourthLetter == 'y') {
        intFourthBasePoints = 4;
    }
    else if (charFourthLetter == 'J' || charFourthLetter == 'X' || charFourthLetter == 'j' || charFourthLetter == 'x') {
        intFourthBasePoints = 8;
    }
    else {
        cout << "Invalid letter. Accepted: A, E, D, R, B, M, V, Y, J, X (case insensitive)";
        return 0;
    }


    ///-----------------------------------------------------------------
    /// STEP 3: GET STARTING POSITIONS AND CALCULATE SCORE
    ///-----------------------------------------------------------------


    cout << endl;
    cout << "Enter a starting position for the word between 1-37 (1 of 5): ";
    cin >> intFirstPosition;
    if (intFirstPosition > 37 || intFirstPosition < 1 ) {
        cout << "Invalid position. Accepted: 1-37 integers";
        return 0;
    }
    else {
    }
    intSecondPosition = intFirstPosition + 1;
    intThirdPosition = intFirstPosition + 2;
    intFourthPosition = intFirstPosition + 3;
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
    intWordMultiplier = 1;
    cout << endl;
    cout << "Enter a starting position for the word between 1-37 (2 of 5): ";
    cin >> intFirstPosition;
    if (intFirstPosition > 37 || intFirstPosition < 1 ) {
		cout << "Invalid position. Accepted: 1-37 integers";
        return 0;
    }
    else {
    }
    intSecondPosition = intFirstPosition + 1;
    intThirdPosition = intFirstPosition + 2;
    intFourthPosition = intFirstPosition + 3;
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

    intAnswerTwo = (( intFirstBasePoints * intFirstMultiplier ) + ( intSecondBasePoints * intSecondMultiplier) + ( intThirdBasePoints * intThirdMultiplier) + ( intFourthBasePoints * intFourthMultiplier)) * intWordMultiplier;
    cout << intAnswerTwo;
    cout << endl;
    intWordMultiplier = 1;
    cout << "Enter a starting position for the word between 1-37 (3 of 5): ";
    cin >> intFirstPosition;
    if (intFirstPosition > 37 || intFirstPosition < 1 ) {
        cout << "Invalid position. Accepted: 1-37 integers";
        return 0;
    }
    else {
    }
    intSecondPosition = intFirstPosition + 1;
    intThirdPosition = intFirstPosition + 2;
    intFourthPosition = intFirstPosition + 3;
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

    intAnswerThree = (( intFirstBasePoints * intFirstMultiplier ) + ( intSecondBasePoints * intSecondMultiplier) + ( intThirdBasePoints * intThirdMultiplier) + ( intFourthBasePoints * intFourthMultiplier)) * intWordMultiplier;
    cout << intAnswerThree;
    cout << endl;
    intWordMultiplier = 1;
    cout << "Enter a starting position for the word between 1-37 (4 of 5): ";
    cin >> intFirstPosition;
    if (intFirstPosition > 37 || intFirstPosition < 1 ) {
        cout << "Invalid position. Accepted: 1-37 integers";
        return 0;
    }
    else {
    }
    intSecondPosition = intFirstPosition + 1;
    intThirdPosition = intFirstPosition + 2;
    intFourthPosition = intFirstPosition + 3;
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

    intAnswerFour = (( intFirstBasePoints * intFirstMultiplier ) + ( intSecondBasePoints * intSecondMultiplier) + ( intThirdBasePoints * intThirdMultiplier) + ( intFourthBasePoints * intFourthMultiplier)) * intWordMultiplier;
    cout << intAnswerFour;
    cout << endl;
    intWordMultiplier = 1;
    cout << "Enter a starting position for the word between 1-37 (5 of 5): ";
    cin >> intFirstPosition;
    if (intFirstPosition > 37 || intFirstPosition < 1 ) {
        cout << "Invalid position. Accepted: 1-37 integers";
        return 0;
    }
    else {
    }
    intSecondPosition = intFirstPosition + 1;
    intThirdPosition = intFirstPosition + 2;
    intFourthPosition = intFirstPosition + 3;
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

    intAnswerFive = (( intFirstBasePoints * intFirstMultiplier ) + ( intSecondBasePoints * intSecondMultiplier) + ( intThirdBasePoints * intThirdMultiplier) + ( intFourthBasePoints * intFourthMultiplier)) * intWordMultiplier;
    cout << intAnswerFive;
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
