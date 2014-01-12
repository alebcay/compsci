///========================================================///
/// Grades Average Calculator (with do...while loop)       ///
/// Written by Caleb Xu                                    ///
/// Project start: 9/27/2013                               ///
///========================================================///

///namespace and headers declaration
#include <iostream>
using namespace std;

///declare global variables

///iteration is the number of grades being entered. This is used to figure out what to divide the sum of grades by.
int iteration = 0;

///gradeSum is the sum of grades entered, and is constantly being changed as new grades are entered.
double gradeSum = 0;

///final answer (gradesum / iteration)
double latestAvg;


///let's ask the user for a grade
void input(int &newGrade) {
    cout << "Enter the " << iteration;
    ///figure out what suffix to append to the number, e.g. 1st, 2nd, 3rd,...12th, etc.
    if (iteration % 100 == 11 | iteration % 100 == 12 | iteration % 100 == 13 | iteration % 100 == 14 | iteration % 100 == 15 |iteration % 100 == 16 | iteration % 100 == 17 | iteration % 100 == 18 | iteration % 100 == 19) {
        cout << "th grade (0-100 inclusive, integers only): ";
    }

    else if (iteration % 10 == 1) {
        cout << "st grade (0-100 inclusive, integers only): ";
    }

    else if (iteration % 10 == 2) {
        cout << "nd grade (0-100 inclusive, integers only): ";
    }

    else if (iteration % 10 == 3) {
        cout << "rd grade (0-100 inclusive, integers only): ";
    }

    else {
        cout << "th grade (0-100 inclusive, integers only): ";
    }

    cin >> newGrade;
    cout << endl;
}

double getGrade(int &newInput) {
    ///add the last grade we got to the rest of the grades (gradeSum starts defined at 0)
    gradeSum = gradeSum + double(newInput);
    ///find the average so far (the value gets rewritten on every iteration, only the last iteration is displayed)
    latestAvg = gradeSum / iteration;
}

void output(double finalGrade) {
    ///show our final average grade

    ///determine and display our letter grade
    cout << "Average Grade: " << finalGrade << " ";
    if (finalGrade >= 93) {
        cout << "(A)" << endl;
    }

    else if (finalGrade >= 85 && finalGrade < 93) {
        cout << "(B)" << endl;
    }

    else if (finalGrade >= 77 && finalGrade < 85) {
        cout << "(C)" << endl;
    }

    else if (finalGrade >= 70 && finalGrade < 77) {
        cout << "(D)" << endl;
    }

    else {
        cout << "(F)" << endl;
    }
}

///***START EXECUTION HERE***
int main() {
    ///let's make a name for our incoming grade from void input
    int incomingGrade;

    ///prepare to ask if user wants to continue adding grades
    char continueOrNot = 'y';

    ///recursively request and add grades
    do {
        ///add one to the counter
        iteration++;
        ///get a grade
        input(incomingGrade);
        ///sum it with the other existing grades
        getGrade(incomingGrade);
        ///ask to continue or not?
        cout << "Would you like to enter another grade? (Y/n) ";
        cin >> continueOrNot;
        cout << endl; }
    while (continueOrNot == 'y' | continueOrNot == 'Y');
    ///if we're done, show the last average that we calculated, which will include all of the entered grades
    output(latestAvg);
return 0;
}
