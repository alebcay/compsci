///=================================================================================///
/// Math/doubles/integers/output formatting operation practice - simplified output -///
/// Written by Caleb Xu as a part of the Enloe High School Computer Science class --///
///=================================================================================///

#include<iostream>
#include<iomanip>
using namespace std;

main() {
    ///set formatting
    cout << setprecision(3);
    ///constant declarations
    const int x = 6;
    const int y = 8;
    const double a = 7.0;
    const double b = 5.0;

    ///calculating
    int mult1 = x * y;
    int quot1 = x / y;
    int quot2 = y / x;
    double mult2 = a * b;
    int mod1 = y % int(b);
    int mod2 = x % int(b);
    double quot3 = x / y;
    double quot4 = b / a;
    double quot5 = a / b;
    double quot6 = y / x;
    double quot7 = double(x) / double(y);
    double quot8 = double(y) / double(x);

    ///output
    cout << setw(6) << mult1 << endl;
    cout << setw(6) << quot1 << endl;
    cout << setw(6) << quot2 << endl;
    cout << setw(6) << mult2 << endl;
    cout << setw(6) << mod1 << endl;
    cout << setw(6) << mod2 << endl;
    cout << setw(6) << quot3 << endl;
    cout << setw(10) << quot4 << endl;
    cout << setw(8) << quot5 << endl;
    cout << setw(6) << quot6 << endl;
    cout << setw(9) << quot7 << endl;
    cout << setw(9) << quot8;

    return 0;

}

/**====================================================================

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
