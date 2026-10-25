#include <iostream>
using namespace std;
 void swapNumbers(int& a, int& b) {   // pass by refrence
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int a, b;
    cout << "Do numbers enter karo: ";
    cin >> a >> b;
    swapNumbers(a, b);
    cout << "Swap ke baad: " << a << " " << b << '\n';
    return 0;
}