///========================================================///
/// Grades Average Calculator Using Two Dimensional Arrays ///
/// Written by Caleb Xu                                    ///
/// Project start: 10/21/2013                              ///
///========================================================///

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double gradeArray[3][5];
string nameArray[3];

void input() {
    for (int i=0; i<3; i++) {
        cout << "Enter a name for Student " << i + 1 << " (limit 24 chars in length): ";
        getline(cin, nameArray[i]);
        cout << endl;
    }
    for (int i=0; i<3; i++) {
        for (int j=0; j<4;j++) {
            cout << "Enter the " << j+1;
            if ((j + 1) % 100 == 11 | (j + 1) % 100 == 12 | (j + 1) % 100 == 13 | (j + 1) % 100 == 14 | (j + 1) % 100 == 15 | (j + 1) % 100 == 16 | (j + 1) % 100 == 17 | (j + 1) % 100 == 18 | (j + 1) % 100 == 19) {
            cout << "th grade (0-999 inclusive) ";
            }
            else if ((j + 1) % 10 == 1) {
                cout << "st grade (0-999 inclusive) ";
            }

            else if ((j + 1) % 10 == 2) {
                cout << "nd grade (0-999 inclusive) ";
            }

            else if ((j + 1) % 10 == 3) {
                cout << "rd grade (0-999 inclusive) ";
            }

            else {
                cout << "th grade (0-999 inclusive) ";
            }
            cout << "grade for " << nameArray[i] << ": ";
            cin >> gradeArray[i][j];
        }
    }
}

double math() {
    for (int i = 0; i<3; i++) {
        gradeArray[i][4] = (double(gradeArray[i][0]) + double(gradeArray[i][1]) + double(gradeArray[i][2]) + double(gradeArray[i][3])) / 4;
    }
}

void output () {
    cout << endl;
    cout << "Name" << "       Grade #:              " << "1" << "        " << "2" << "        " << "3" << "        " << "4" << "      " << "Avg" << "    " << "Letter" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    for (int i=0; i<3; i++) {
        int nameBuffer = 24 - nameArray[i].size();
        cout << nameArray[i];
        for (int k=0; k<nameBuffer; k++) {
            cout << " ";
        }
        cout << ": " << "     ";
        for (int j=0; j<5; j++) {
            cout << gradeArray[i][j];
            if (gradeArray[i][j] >= 100) {
                cout << "   ";
            }
            else if (gradeArray[i][j] <= 10 && gradeArray[i][j] >=0) {
                cout << "     ";
            }
            else {
                cout << "    ";
            }
        }
        if (gradeArray[i][4] >= 93) {
            cout << " (A)" << endl;
        }

        else if ((gradeArray[i][4] >= 85) && (gradeArray[i][4] <= 92.9)) {
            cout << " (B)" << endl;
        }

        else if ((gradeArray[i][4] >= 77) && (gradeArray[i][4] <= 84.9)) {
            cout << " (C)" << endl;
        }

        else if ((gradeArray[i][4] >= 70) && (gradeArray[i][4] <= 76.9)) {
            cout << " (D)" << endl;
        }

        else {
            cout << " (F)" << endl;
        }
    }
}

int main()
{
    input();
    cout << setprecision(2);
    cout.setf(ios::showpoint | ios::fixed);
    math();
    output();
    return 0;

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
