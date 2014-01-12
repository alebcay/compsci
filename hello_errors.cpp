#include <iostream>

using namespace std;

const int decade = 10;

int main() {

int age, fage, year, dyear;
cout << "Hello!" << endl;
cout << "Please input your age:" << endl;
cin>>age;
cout<<"Please input the current year:"<<endl;
cin>>year;
dyear = decade + year;
cout<<"I will now tell you your age in "<<dyear<< "."<<endl;
fage = decade + age;
cout<<"Your age will be "<<fage<<endl;

return 0;
}
