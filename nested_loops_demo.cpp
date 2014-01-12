#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main() {
    int size;
    int seed;
    cout << "How many rows do you want to have (maximum 40 lines)? ";
    cin >> size;
    if (size > 40) {
        cout << endl;
        cout << "[ERROR] Overflow." << endl;
    }
    else {
        cout << endl;
        cout << "Initial seed (0-9)? ";
        cin >> seed;
        cout << endl;
        if (seed > 9) {
            cout << "[ERROR] The seed you entered was greater than 9." << endl;
        }
        else {
            int star = 0;
            int randSeed = 0;
            if (size <= 3) {
                for (int a = size - 1; a > 1; a--) {
                    cout << " ";
                }
                cout << "# #" << endl;
            }
            else {
                for (int a = size - 1; a > 1; a--) {
                    cout << " ";
                }
                cout << "# #" << endl;
                for (int a = size - 1; a > 2; a--) {
                    cout << " ";
                }
                cout << "# # #" << endl;
                for (int a = size - 1; a > 1; a--) {
                    cout << " ";
                }
                cout << "# #" << endl;
                }
            for (int r = 1; r <= size; r++) {
                for (int b = size - 1; b >= r; b--) {
                    cout << " ";
                }
                for (int c = 1; c <= r; c++) {
                    randSeed++;
                    srand(randSeed);
                    int randomNumber = rand() % 10;
                    int symbolSelect = rand() % 100;
                    if (randomNumber <= 2) {
                        if (symbolSelect <= 20) {
                            cout << "* ";
                        }
                        else if (symbolSelect <= 40 && symbolSelect >= 21) {
                            cout << "@ ";
                        }
                        else if (symbolSelect <= 60 && symbolSelect >= 41) {
                            cout << "! ";
                        }
                        else if (symbolSelect <= 80 && symbolSelect >= 61) {
                            cout << "^ ";
                        }
                        else if (symbolSelect <= 100 && symbolSelect >= 81) {
                            cout << "% ";
                        }
                    }
                    else {
                        cout << seed << " ";
                        if (seed == 9) {
                            seed = 0;
                        }
                        else {
                            seed++;
                        }
                    }
                }
                cout << endl;
            }
            if (size > 6) {
                for (int a = size - 1; a > 1; a--) {
                    cout << " ";
                }
                cout << "| |" << endl;
                for (int a = size - 1; a > 1; a--) {
                    cout << " ";
                }
                cout << "| |" << endl;
                for (int a = size - 1; a > 1; a--) {
                    cout << " ";
                }
                cout << "| |" << endl;
                for (int a = size - 1; a > 1; a--) {
                    cout << " ";
                }
                cout << "| |" << endl;
                }
            else {
                for (int a = size - 1; a > 1; a--) {
                    cout << " ";
                }
                cout << "| |" << endl;
            }
        }
    }
return 0;
}
