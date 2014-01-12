// Yes, I know I used more stuff than was necessary. Please deal with it. :P
// Math/doubles/integers operation practice
// Written by Caleb Xu as a part of the Enloe High School Computer Science class

#include<iostream>
using namespace std;

main() {

const int x = 6;
const int y = 8;
const double a = 7.0;
const double b = 5.0;
cout << "Let x and y be integers with values 6 and 8, respectively, and let a and b be doubles with values 7.0 and 5.0, respectively" << endl;
int mult1 = x * y;
cout << "The product of x and y as an integer named mult1 is " << mult1 << endl;
int quot1 = x / y;
cout << "The quotient of x and y as an integer named quot1 is " << quot1 << endl;
int quot2 = y / x;
cout << "The quotient of y and x as an integer named quot2 is " << quot2 << endl;
double mult2 = a * b;
cout << "The product of a and b as a double named mult2 is " << mult2 << endl;
int mod1 = y % int(b);
cout << "The modulo of y (an integer) and b (a double, converted to integer) as an integer named mod1 is " << mod1 << endl;
int mod2 = x % int(b);
cout << "The modulo of x (an integer) and b (a double, converted to integer) as an integer named mod2 is " << mod2 << endl;
double quot3 = x / y;
cout << "The quotient of x and y as a double named quot3 is " << quot3 << endl;
double quot4 = b / a;
cout << "The quotient of b and a as a double named quot4 is " << quot4 << endl;
double quot5 = a / b;
cout << "The quotient of a and b as a double named quot5 is " << quot5 <<endl;
double quot6 = y / x;
cout << "The quotient of y and x as a double named quot6 is " << quot6 << endl;
double quot7 = double(x) / double(y);
cout << "The quotient of x and y, each converted to doubles, as a double named quot7 is " << quot7 << endl;
double quot8 = double(y) / double(x);
cout << "The quotient of y and x, each converted to doubles, as a double named quot8 is " << quot8 << endl;

return 0;
}
