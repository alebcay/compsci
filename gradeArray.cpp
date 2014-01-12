///===============================================================================///
/// Grades Average Calculator Using Arrays                                        ///
/// Written by Caleb Xu as a part of the Enloe High School Computer Science class ///
///===============================================================================///

#include <iostream>
#include <iomanip>

using namespace std;

int gradeArray[5];

void input()
{
    for (int i=0; i<4; i++) {
        cout << "Please enter the " << i + 1;
        if ((i + 1) % 100 == 11 | (i + 1) % 100 == 12 | (i + 1) % 100 == 13 | (i + 1) % 100 == 14 | (i + 1) % 100 == 15 | (i + 1) % 100 == 16 | (i + 1) % 100 == 17 | (i + 1) % 100 == 18 | (i + 1) % 100 == 19) {
            cout << "th grade (0-100 inclusive, integers only): ";
        }

        else if ((i + 1) % 10 == 1) {
            cout << "st grade (0-100 inclusive, integers only): ";
        }

        else if ((i + 1) % 10 == 2) {
            cout << "nd grade (0-100 inclusive, integers only): ";
        }

        else if ((i + 1) % 10 == 3) {
            cout << "rd grade (0-100 inclusive, integers only): ";
        }

        else {
            cout << "th grade (0-100 inclusive, integers only): ";
        }
        cin >> gradeArray[i];
        cout << endl;
    }
}

double math(double &avg)
{
    avg = (double(gradeArray[0]) + double(gradeArray[1]) + double(gradeArray[2]) + double(gradeArray[3])) / 4;
}

void output (double output)
{
    cout << "Student #1: " << "     " << gradeArray[0] << "   " << gradeArray[1] << "   " << gradeArray[2] << "   " << gradeArray[3] << "   " << "Avg: " << output;
    if (output >= 93)
    {
        cout << " (A)" << endl;
    }

    else if ((output >= 85) && (output <= 92.9))
    {
        cout << " (B)" << endl;
    }

    else if ((output >= 77) && (output <= 84.9))
    {
        cout << " (C)" << endl;
    }

    else if ((output >= 70) && (output <= 76.9))
    {
        cout << " (D)" << endl;
    }

    else
    {
        cout << " (F)" << endl;
    }
}

int main()
{
    double ans;
    input();
    cout << setprecision(2);
    cout.setf(ios::showpoint | ios::fixed);
    math(ans);
    output(ans);
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
