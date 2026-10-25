#include <iostream>
using namespace std;

int main() {
    int n, choice;
    cin >> choice;
    switch(choice) {
        case 1:
            cin >> n;

            if(n % 2 == 0)
                cout << "Even";
            else
                cout << "Odd";

            break;

        default:
            cout << "Invalid";
    }
    return 0;
}