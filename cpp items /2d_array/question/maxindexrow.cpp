
#include <iostream>
using namespace std;
int main() {
    int arr[5][4] = {0, 0, 0, 1, 2, 8, 3, 9, 5, 4, 2, 2, 7, 3, 0, 8, 2, 8, 9, 1};
    int minimum = -2147483647;
    int index = -1;
    for (int i = 0; i < 5; i++) {
        int total = 0;
        for (int j = 0; j < 4; j++) {
            total = total + arr[i][j];
        }
        if (minimum < total) {
            minimum = total;
            index = i;
        }
    }
    cout << index;
    return 0;
}
