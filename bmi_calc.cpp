///===============================================================================///
/// BMI Calculator Program                                                        ///
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

///main calculating function
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

    ///start calculating
    myBMI = (double(myWeight) * scalar) / (double(myHeight) * double(myHeight));
    neighborBMI = (double (neighborWeight) * scalar) / (double(neighborHeight) * double(neighborHeight));

    ///output BMI
    cout << setw(8) << "Your BMI is " << myBMI << endl;
    cout << setw(8) << "Your neighbor's BMI is " << neighborBMI << endl;

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


