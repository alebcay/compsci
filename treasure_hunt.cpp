#include <iostream> ///we need std::cout
#include <time.h> ///and time(NULL)
#include <stdlib.h> ///and rand() and srand()

using namespace std;

///define switches, boards, and counters for gold pieces, traps, that are found or left
char displayBoard[5][5];
char solutionBoard[5][5];
int playerGuessXCoord;
int playerGuessYCoord;
int goldPieceCheck;
int trapCheck;
int robberCheck;
int hiddenTileCounter = 0;
int hitCounter = 0;
int trapCounter = 0;
int playerGuesses = 0;
int gameStatus = 0;
bool justEncounteredARobber = false;
bool justEncounteredARobberOnGoldPiece = false;
bool justEncounteredARobberOnTrap = false;
bool error = false; ///error handling
bool successfullyMovedRobber = false;
bool successfullyMovedGold = false;
bool robberScrewedUptheGame = false; ///weird robber logic exception handling

void clear() {
    cout << string(24, '\n');
}

int errorScenario() {
    cout << "Something broke. What do you have to say for yourself?" << endl;
    return 0;
}

///first, fill up the board with something to prevent further errors
int setupBoard() {
    for (int i=0; i<5; i++) {
        for (int j=0; j<5;j++) {
            solutionBoard[i][j] = 'n';
        }
    }
    for (int i=0; i<5; i++) {
        for (int j=0; j<5;j++) {
            displayBoard[i][j] = '?';
        }
    }
}

///randomly place gold
int placeGold() {
    int i = 0; ///we start with no gold pieces
    while ( i < 10 ) { ///stop when we get 10 unique gold pieces
        cout << "Placing gold pieces: " << i + 1 << " of 10..."; ///progress indication
        ///pick a random number from 1 to 5
        int newGoldPieceXCoord = rand() % 5 ;
        int newGoldPieceYCoord = rand() % 5 ; ///pick a random number from 1 to 5
        if ( solutionBoard[newGoldPieceYCoord][newGoldPieceXCoord] == 'g' ) { ///is the chosen space from these random numbers already a gold piece?
            ///if yes, then don't increment the counter because the location is invalid; instead, let's try again
        }
        else { ///if no, then we have a valid gold piece. go ahead and place it, then increment the counter.
            solutionBoard[newGoldPieceYCoord][newGoldPieceXCoord] = 'g';
            i++;
        }
        ///afterwards, lets check to make sure we have ten pieces.
        goldPieceCheck = 0;
        for ( int j = 0; j < 5; j++ ) {
            for ( int k = 0; k < 5; k++ ) {
                if ( solutionBoard[j][k] == 'g' ) {
                    goldPieceCheck++;
                }
                else {}
            }
        }
        cout << "\r";
    }

    if ( goldPieceCheck == 10 ) { ///did we count ten gold pieces?
        ///if yes, then we're done here.
        return 0;
    }
    else {
        ///if no, then something screwed up. return error.
        cout << "Improper number of gold pieces generated: " << goldPieceCheck;
        error = true;
        return 0;
    }
}

int placeTraps() {
    int i = 0; ///we start with no traps
    while ( i < 5 ) { ///stop when we get five unique traps
        cout << "Placing traps: " << i + 1 << " of 5..."; ///progress indicator
        int newTrapXCoord = rand() % 5 ; ///pick a random number from 1 to 5
        ///pick a random number from 1 to 5
        int newTrapYCoord = rand() % 5 ;
        ///is the chosen spot taken already?
        if ( solutionBoard[newTrapYCoord][newTrapXCoord] != 'n' ) {
            ///yes, already occupied: then the space is invalid, so don't increment the counter; let's try again
        }
        else {
            ///no, it's empty: place a trap there and increment our counter
            solutionBoard[newTrapYCoord][newTrapXCoord] = 't';
            i++;
        }
        ///afterwards, check if there are five traps
        trapCheck = 0;
        for ( int j = 0; j < 5; j++ ) {
            for ( int k = 0; k < 5; k++ ) {
                if ( solutionBoard[j][k] == 't' ) {
                    trapCheck++;
                }
                else {}
            }
        }
        cout << "\r";
    }
    ///are there exactly five traps
    if ( trapCheck == 5 ) {
        ///yes: we're done here.
        return 0;
    }
    else {
        ///no: something screwed up. return error.
        cout << "Improper number of traps generated: " << trapCheck;
        error = true;
        return 0;
    }
}

int placeRobber() {
    ///we start with no robbers
    int i = 0;
    ///stop when we have one correctly placed robber
    while ( i < 1 ) {
        ///progress indicator
        cout << "Placing robber: " << i + 1 << " of 1...";
        ///pick a random number from 1 to 5
        int newRobberXCoord = rand() % 5 ;
        ///find new seed from time
        ///pick a random number from 1 to 5
        int newRobberYCoord = rand() % 5 ;
        ///check that particular space
        if ( solutionBoard[newRobberYCoord][newRobberXCoord] == 'r' ) { ///if there's already a robber there...
            ///we should NEVER encounter this outcome. something broke.
            error = true;
            return 0;
        }
        else if (solutionBoard[newRobberYCoord][newRobberXCoord] == 'g' ) { ///if there's gold on that spot...
            ///...rig the spot. now there's gold AND a robber.
            solutionBoard[newRobberYCoord][newRobberXCoord] = 'G';
            i++;
        }
        else if (solutionBoard[newRobberYCoord][newRobberXCoord] == 't' ) { ///if there's a trap on that spot...
            ///...now there's a robber AND a trap on that spot.
            solutionBoard[newRobberYCoord][newRobberXCoord] = 'T';
            i++;
        }
        else {
            ///there's seriously nothing on that spot? just put the robber on it then, with nothing else.
            solutionBoard[newRobberYCoord][newRobberXCoord] = 'r';
            i++;
        }
        ///check and make sure we have the right number of robbers.
        if ( i == 1 ) { ///do we have one and exactly one robber on the board?
            return 0; ///if yes, then we're done here.
        }
        else {
            ///if no, then we screwed up. return error.
            cout << "Improper number of robbers generated: " << trapCheck;
            error = true;
            return 0;
        }
    }
}

int moveRobber() { ///this code is executed on every robber encounter
    ///when we start, the robber and gold haven't moved yet. we need to reset them in case the robber is encountered multiple times
    successfullyMovedRobber = false;
    successfullyMovedGold = false;
    ///moving the robber
    solutionBoard[playerGuessYCoord -1][playerGuessXCoord -1] = 'n'; ///on the spot the user chose, there should be nothing now. if there was anything on it, the result has already been displayed, so the space can be safely set to 'n'.
    while ( successfullyMovedRobber == false ) { ///while the robber hasn't been moved to a valid spot yet
        int moveRobberXCoord = rand() % 5 ; ///pick a number between 1 and 5
        int moveRobberYCoord = rand() % 5 ; ///pick another number between 1 and 5
        if ( displayBoard[moveRobberYCoord][moveRobberXCoord] == '?' ) { ///if the space is uncovered...
            if ( solutionBoard[moveRobberYCoord][moveRobberXCoord] == 'n' ) { ///...and the space is also empty...
                solutionBoard[moveRobberYCoord][moveRobberXCoord] = 'r'; ///...then there is only a robber on the space now.
                successfullyMovedRobber = true; ///also, we're done moving the robber.
            }
            else if ( solutionBoard[moveRobberYCoord][moveRobberXCoord] == 'g' ) { ///...and if the space has a gold piece on it...
                solutionBoard[moveRobberYCoord][moveRobberXCoord] = 'G'; ///...then there is a gold piece AND a robber on the space now.
                successfullyMovedRobber = true; ///also, we're done moving the robber.
            }
            else if ( solutionBoard[moveRobberYCoord][moveRobberXCoord] == 't' ) { ///...and if the space has a trap on it...
                solutionBoard[moveRobberYCoord][moveRobberXCoord] = 'T'; ///...then there is a trap AND a robber on the space now.
                successfullyMovedRobber = true; ///also, we're done moving the robber.
            }
            else { ///if the spot is uncovered but has some other character on it, then something is very wrong. return error.
                error = true;
                return 0;
            }
        }
    }
    ///now that we're done moving the robber, we also need to move the gold somewhere else too.
    while ( successfullyMovedGold == false ) {
        int moveGoldXCoord = rand() % 5 ; ///pick a number between 1 and 5
        int moveGoldYCoord = rand() % 5 ; ///pick a number between 1 and 5
        hiddenTileCounter = 0;
        for ( int i = 0; i < 5; i++ ) { ///first, check if there's any valid tiles to move the gold piece to
            for ( int j = 0; j < 5; j++ ) {
                if ( displayBoard[i][j] == '?' && ( solutionBoard[i][j] == 'n' || solutionBoard[i][j] == 'r' )) {
                    hiddenTileCounter++;
                }
                else {}
            }
        }
        if ( hiddenTileCounter < 1 ) { ///if there's less than one...
            robberScrewedUptheGame = true; ///go to time lord ending scenario.
            return 0;
        }
        else{} ///otherwise, go ahead and move it.
        if ( displayBoard[moveGoldYCoord][moveGoldXCoord] == '?' ) { ///if the spot chosen is uncovered...
            if ( solutionBoard[moveGoldYCoord][moveGoldXCoord] == 'n' ) { ///...and the spot is empty...
                solutionBoard[moveGoldYCoord][moveGoldXCoord] = 'g'; ///...place the gold there. then we're done.
                successfullyMovedGold = true;
            }
            else if ( solutionBoard[moveGoldYCoord][moveGoldXCoord] == 'r' ) { ///...or if there's a robber there...
                solutionBoard[moveGoldYCoord][moveGoldXCoord] = 'G'; ///...place the gold there with the robber. then we're done.
                successfullyMovedGold = true;
            }
            else { ///otherwise, the spot is invalid, and we need to try again.
            }
        }
    }
}

int drawDisplayBoard() { ///this function is executed every time the board is redrawn
    clear();
    cout << "Treasure Hunt" << endl;
    cout << string(80, '-');
    cout << "Number of guesses: " << playerGuesses << endl;
    cout << "Gold pieces left: " << goldPieceCheck - hitCounter << endl;
    cout << "Traps left: " << trapCheck - trapCounter << endl;
    cout << string(80, '-') << endl;
    ///display the solution board (debug purposes only)
    for ( int i = 0; i < 5; i++ ) {
        for ( int j = 0; j < 5; j++ ) {
            cout << solutionBoard[i][j] << " ";
        }
        cout << endl;
        cout << endl;
    }
    ///display the display board
    cout << string(80, '-') << endl;
    for ( int i = 0; i < 5; i++ ) {
        for ( int j = 0; j < 5; j++ ) {
            cout << displayBoard[i][j] << " ";
        }
        cout << endl;
        cout << endl;
    }
}

int getPlayerGuess() {
    ///get player input
    if ( justEncounteredARobber == true ) { ///if the player just ran into a robber, let them know
        cout << "Ouch! You ran into the robber! Be on the lookout!" << endl;
        cout << "The robber took one piece of gold from you and hid it." << endl;
        justEncounteredARobber = false;
    }
    else if ( justEncounteredARobberOnGoldPiece == true ) { ///if the player just ran into a robber on a gold space, let them know
        cout << "Ouch! You ran into the robber! Be on the lookout!" << endl;
        cout << "He took one piece of your gold and hid it, but you also found one." << endl;
        justEncounteredARobberOnGoldPiece = false;
    }
    else if ( justEncounteredARobberOnTrap == true ) { ///if the player just ran into a robber on a trap, let them know
        cout << "Ouch! You ran into the robber! Be on the lookout!" << endl;
        cout << "He hid one piece of your gold, and you fell on a trap. Tough luck, eh?" << endl;
        justEncounteredARobberOnTrap = false;
    }
    else {}
    cout << "Time to search for gold!" << endl;
    cout << "Input x-coordinate (top left is 1, ascending going right): ";
    cin >> playerGuessXCoord;
    cout << "Input y-coordinate (top left is 1, ascending going down): ";
    cin >> playerGuessYCoord;
}

int checkSpace() { ///this code is executed on every player guess
    if ( displayBoard[playerGuessYCoord - 1][playerGuessXCoord -1] == '?' ) { ///first, check if the player has guessed there yet already
        playerGuesses++; ///if it's valid, then go increment counter, and continue
    }
    else {
        return 0; ///if it's not, discard guess and prompt player again
    }
    if ( solutionBoard[playerGuessYCoord - 1][playerGuessXCoord - 1] == 'g' ) { ///if there's gold on the space guessed
        displayBoard[playerGuessYCoord - 1][playerGuessXCoord - 1] = '$' ; ///display a $ on the space
        hitCounter++; ///add one to the number of gold found
    }
    else if ( solutionBoard[playerGuessYCoord - 1][playerGuessXCoord - 1] == 't' ) { ///if there's a trap on the space guessed
        displayBoard[playerGuessYCoord - 1][playerGuessXCoord - 1] = '^'; ///display a ^ on the space
        trapCounter++; ///add one to the number of traps triggered
    }
    else if ( solutionBoard[playerGuessYCoord - 1][playerGuessXCoord - 1] == 'r' ) { ///if the player runs into the robber
        justEncounteredARobber = true; ///on next board draw refresh, let the player know that they ran into a robber
        hitCounter--; ///make the player lose a piece of gold
        displayBoard[playerGuessYCoord - 1][playerGuessXCoord - 1] = '_'; ///display _ on the space (there was nothing else there)
        moveRobber(); ///move the robber and a gold piece
    }
    else if ( solutionBoard[playerGuessYCoord - 1][playerGuessXCoord - 1] == 'G' ) { ///if the robber AND gold piece are on the space
        justEncounteredARobberOnGoldPiece = true; ///on next board draw refresh, let the player know that they ran into a robber and a gold piece
        displayBoard[playerGuessYCoord - 1][playerGuessXCoord - 1] = '$'; ///display $ on the space (there was gold there)
        moveRobber(); ///move the robber and a gold piece
    }
    else if ( solutionBoard[playerGuessYCoord - 1][playerGuessXCoord - 1] == 'T' ) { ///if the robber AND a trap are on the spot
        justEncounteredARobberOnTrap = true; ///on next board draw refresh, let the player know that they ran into a robber and a trap
        hitCounter--; ///make the player lose a piece of gold
        trapCounter++; ///add one to the number of traps triggered
        displayBoard[playerGuessYCoord - 1][playerGuessXCoord - 1] = '^'; ///display ^ on the space (there was a trap there)
        moveRobber(); ///move the robber and a gold piece
    }
    else { ///otherwise, there's just nothing there
        displayBoard[playerGuessYCoord - 1][playerGuessXCoord - 1] = '_'; ///display _ on the space
        return 0; ///we're done evaluating the guess if the spot is blank
    }
    if ( hitCounter >= 10 ) { ///if the player has found 10 gold pieces
        gameStatus = 1; ///on leaving function, game will end and display win message
    }
    else if ( trapCounter >= 5 ) { ///if the player has found 5 traps
        gameStatus = 2; ///on leaving function, game will end and display death by trap message
    }
    else { ///otherwise, nothing happened
        gameStatus = 0;
        return 0;
    }
}

int main() { ///program execution starts here
    setupBoard(); ///place blank spaces into the array boards
    clear(); ///once loading is done there, clear screen
    srand(time(NULL)); ///get seed for rand
    placeGold(); ///randomly place gold
    if ( error == true ) { ///if an error occurred after placing gold, catch and funnel to handler
        errorScenario();
        return 0;
    }
    clear(); ///clear screen again
    placeTraps(); ///randomly place traps
    if ( error == true ) { ///if an error occurred after placing traps, catch and funnel to handler
        errorScenario();
        return 0;
    }
    clear(); ///clear screen again
    placeRobber(); ///randomly place robber (initial placement)
    if ( error == true ) { ///if an error occurred while placing robber, catch and funnel to handler
        errorScenario();
        return 0;
    }
    clear(); ///clear screen again
    drawDisplayBoard(); ///draw the actual display board (initial drawing)
    if ( error == true ) { ///if an error occurred while drawing the board, catch and funnel to handler
        errorScenario();
        return 0;
    }
    for ( playerGuesses ; playerGuesses < 25; playerGuesses ) { ///while the player has not guessed all 25 spaces (the player should never have more than 25 unique guesses), we should...
        getPlayerGuess(); ///prompt for player guess
        if ( error == true ) { ///if an error occurred while getting player guess, catch and funnel to handler
        errorScenario();
        return 0;
        }
        checkSpace(); ///check the player guess
        if ( error == true ) { ///if an error occurred while checking the space, catch and funnel to handler
        errorScenario();
        return 0;
        }
        drawDisplayBoard(); ///re-draw the display board, reflecting changes in solution and display boards
        if ( error == true ) {
        errorScenario();
        return 0;
        }
        if ( robberScrewedUptheGame == true ) { ///if there is an unsolvable position (no spots for robber and gold to both move to), referred to as "time lord ending"
            clear(); ///clear screen again, hide the boards
            cout << "////////////////////////////////////////////////////////////////////////////////";
            cout << "/---------------------------------YOU LOSE-------------------------------------/";
            cout << "////////////////////////////////////////////////////////////////////////////////";
            cout << "The robber decided to take a piece of gold from you. However, seeing that there" << endl;
            cout << "was nowhere to put the gold piece, he has placed it into interdimensional space.";
            cout << "Perhaps you should hire a Time Lord for this one." << endl;
            cout << endl;
            cout << "Guesses: " << playerGuesses << endl;
            if ( hitCounter >= 0 ) {
                cout << "Gold Pieces Acquired: " << hitCounter << endl;
            }
            else{
                cout << "Gold Pieces Acquired: none" << endl;
            }
            cout << "Traps Set Off: " << trapCounter << endl;
            return 0;
        }
        else if ( hitCounter < 0 ) { ///if you ran out of gold for the robber to steal
            clear(); ///clear screen again, hide the boards
            cout << "////////////////////////////////////////////////////////////////////////////////";
            cout << "/---------------------------------YOU LOSE-------------------------------------/";
            cout << "////////////////////////////////////////////////////////////////////////////////";
            cout << "The robber, tired of your antics, shoots you in the back of the head," << endl;
            cout << "executioner style. And you thought it was just a game of hide and seek..." << endl;
            cout << endl;
            cout << "Guesses: " << playerGuesses << endl;
            if ( hitCounter >= 0 ) {
                cout << "Gold Pieces Acquired: " << hitCounter << endl;
            }
            else{
                cout << "Gold Pieces Acquired: none" << endl;
            }
            cout << "Traps Set Off: " << trapCounter << endl;
            return 0;
        }
        else if ( gameStatus == 0 ) { ///if nothing is happening, continue the game
        }
        else if ( gameStatus == 1) { ///if the player actually found all of the gold without dying, which is statistically improbable
            clear();
            cout << "You won!" << endl;
            cout << "The news crews are on their way to interview you. Just sit tight and consider" << endl;
            cout << "what part of your adventure you should tell them about." << endl << endl;
            cout << "Guesses: " << playerGuesses << endl;
            cout << "Gold Pieces Acquired: " << hitCounter << endl;
            cout << "Traps Set Off: " << trapCounter << endl;
            return 0;
        }
        else if ( gameStatus == 2) { ///if the player ran into all of the traps first
            clear();
            cout << "////////////////////////////////////////////////////////////////////////////////";
            cout << "/---------------------------------YOU LOSE-------------------------------------/";
            cout << "////////////////////////////////////////////////////////////////////////////////";
            cout << "You fall face first into the trap, being instantaneously decapitated. Your head,";
            cout << "or what remains of it, now serves as a warning to other treasure hunters." << endl;
            cout << endl;
            cout << "Guesses: " << playerGuesses << endl;
            if ( hitCounter >= 0 ) {
                cout << "Gold Pieces Acquired: " << hitCounter << endl;
            }
            else{
                cout << "Gold Pieces Acquired: none" << endl;
            }
            cout << "Traps Set Off: " << trapCounter << endl;
            return 0;
        }
        else if ( error == true) { ///if something broke within the while loop, catch and funnel to handler
            errorScenario();
            return 0;
        }
        else{}
    }
    ///somehow, the player exited the while loop while continuing execution, which really should never happen
    cout << "Looks like you didn't quite finish the game..." << endl;
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



