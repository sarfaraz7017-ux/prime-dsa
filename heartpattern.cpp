#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 7; j++) {
            if ((j == 1 || j == 2 || j == 4 || j == 5) && i == 0)
                cout << "*";
            else if ((j == 0 || j == 3 || j == 6) && i == 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    for (int i = 3; i >= 0; i--) {
        for (int j = 0; j <= 6; j++) {
            if (j >= 3 - i && j <= 3 + i)
                cout << "*";
            else
                cout <<" ";
        }
        cout << endl;
    }
    return 0;
}