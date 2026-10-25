#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    for (int row = 1; row <= x; row++) {
        for (int col = 1; col <= x - row; col++) {
         cout << " ";
        }
        for (int col = 1; col <= 2 * row - 1; col++) {
         cout << "*";
        }
        cout << endl;
    }
    for (int row = x; row >= 1; row--) {
        for (int col = 1; col <= x - row; col++) {
         cout << " ";
        }
        for (int col = 1; col <= 2 * row - 1; col++) {
        cout << "*";
        }
        cout << endl;
    }
    return 0;
}