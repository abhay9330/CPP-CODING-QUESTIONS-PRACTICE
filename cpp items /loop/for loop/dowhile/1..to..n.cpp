#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 1;
    cout << "Enter the number: ";
    cin >> n;
    do {
        cout << i << " ";
        i++;
    } while (i <= n);
    return 0;
}