#include <iostream>

using namespace std;

int main() {
    int rows;
    int symbolCount = 1;
    cout << "How many rows do you want to have?" << endl;
    cin >> rows;
    for (int r = 1; r <= rows; r++) {
        for (int s = 1; s <= symbolCount; s++) {
            cout << "*";
        }
        cout << endl;
    }
}
