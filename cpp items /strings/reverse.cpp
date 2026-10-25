#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        n++;
    }
    for (int i = n - 1; i >= 0; i--) {
        cout << s[i];
    }
    return 0;
}

