///===============================================================================///
/// BMI Calculator Program  -- Using Functions                                    ///
/// Written by Caleb Xu as a part of the Enloe High School Computer Science class ///
///===============================================================================///

///header and namespace declarations
#include <iostream>
#include <iomanip>

using namespace std;

///define variables/constants
const int scalar = 703;

int myWeight;
int myHeight;
int neighborWeight;
int neighborHeight;
double myBMI;
double neighborBMI;

double getBMI (int &h, int &w) {
    return ( (double(w) * scalar) / (double(h) * double(h)) );
}

void output (double &b1, double &b2) {

    cout << "Your BMI: " << b1 << endl;
    cout << "Your neighbor's BMI: " << b2 << endl;
    if (b1 < 18.5) {
        cout << "You are underweight." << endl;
    }
    else if ((b1 >= 18.5) && (b1 <= 24.9)) {
        cout << "Your weight is normal." << endl;
    }
    else {
        cout << "You are overweight." << endl;
    }

    if (b2 < 18.5) {
        cout << "Your neighbor is underweight." << endl;
    }
    else if ((b2 >= 18.5) && (b2 <= 24.9)) {
        cout << "Your neighbor's weight is normal." << endl;
    }
    else {
        cout << "Your neighbor is overweight." << endl;
    }
}

///main function
main () {

    ///get user information
    setprecision(2);
    cout << "Please enter your weight to the nearest pound:" << endl;
    cin >> myWeight;
    cout << "Please enter your height to the nearest inch:" << endl;
    cin >> myHeight;
    cout << "Please enter your neighbor's weight to the nearest pound:" << endl;
    cin >> neighborWeight;
    cout << "Please enter your neighbor's height to the nearest inch:" << endl;
    cin >> neighborHeight;

    ///calculate
    myBMI = getBMI(myHeight, myWeight);
    neighborBMI = getBMI(neighborHeight, neighborWeight);

    ///output BMI
    output(myBMI, neighborBMI);

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


