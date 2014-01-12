///===============================================================================///
/// Means Calculator                                                              ///
/// Written by Caleb Xu as a part of the Enloe High School Computer Science class ///
///===============================================================================///

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

double getArith (int &arith1, int &arith2) {
	return ( (double(arith1) + double(arith2) ) / 2);
}

double getGeo (int &geo1, int &geo2) {
    return ( sqrt( double(geo1) * double(geo2) ));
}

double getHar (int &har1, int &har2) {
    return (( 2 * double(har1) * double(har2) ) / ( double(har1) + double(har2) ));
}

void output (double &arith, double &geo, double &harm, int &i1, int &i2) {
    cout.setf(ios::showpoint | ios::fixed);
    cout << endl;
    cout << "Arithmetic mean:" << endl;
    cout << setprecision(3) << arith << endl;
    cout << endl;
    cout << "Geometric mean:" << endl;
    cout << setprecision(3) << geo << endl;
    cout << endl;
    cout << "Harmonic mean:" << endl;
    cout << setprecision(3) << harm << endl;
    cout << endl;
}

int main() {
    int a;
    int b;
    double arithMean;
    double geoMean;
    double harMean;
    cout << "Program 5: Means" << endl;
    cout << "Enter the first number:" << endl;
    cin >> a;
    cout << "Enter the second number:" << endl;
    cin >> b;
    setprecision(3);
    cout.setf(ios::showpoint | ios::fixed);
    arithMean = getArith(a, b);
    geoMean = getGeo(a, b);
    harMean = getHar(a, b);

    output(arithMean, geoMean, harMean, a, b);

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
