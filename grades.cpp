///===============================================================================///
/// Grades Average Calculator                                                     ///
/// Written by Caleb Xu as a part of the Enloe High School Computer Science class ///
///===============================================================================///

#include <iostream>
#include <iomanip>

using namespace std;

void input(int &grade1, int &grade2, int &grade3, int &grade4, int &grade5)
{
    cout << "Please enter the first grade: ";
    cin >> grade1;
    cout << endl;
    cout << "Please enter the second grade: ";
    cin >> grade2;
    cout << endl;
    cout << "Please enter the third grade: ";
    cin >> grade3;
    cout << endl;
    cout << "Please enter the fourth grade: ";
    cin >> grade4;
    cout << endl;
    cout << "Please enter the fifth grade: ";
    cin >> grade5;
    cout << endl;
}

double math(int &g1, int &g2, int &g3, int &g4, int &g5)
{
    return(double(g1+ g2 + g3 + g4 + g5) / 5);
}

void output (double &ans)
{
    cout << "Average Grade: " << ans << " ";
    if (ans >= 93)
    {
        cout << "(A)" << endl;
    }

    else if ((ans >= 85) && (ans <= 92.9))
    {
        cout << "(B)" << endl;
    }

    else if ((ans >= 77) && (ans <= 84.9))
    {
        cout << "(C)" << endl;
    }

    else if ((ans >= 70) && (ans <= 76.9))
    {
        cout << "(D)" << endl;
    }

    else
    {
        cout << "(F)" << endl;
    }
}

int main()
{
    double avg;
    int i1;
    int i2;
    int i3;
    int i4;
    int i5;
    input(i1,i2,i3,i4,i5);
    cout << setprecision(2);
    cout.setf(ios::showpoint | ios::fixed);

    avg = math(i1,i2,i3,i4,i5);
    output(avg);
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
