#include <iostream>

using namespace std;

const int future = 5;

int main() {

    int age,fage;
    cout << "Hello...\n";
    cout << "Please input your age as a positive integer:\n";
    cin >> age;
    cout << "Now I will tell you your age in " << future << " years...\n";
    fage = future + age;
    cout << "Your future age is " << fage << endl;

return 0;
}
