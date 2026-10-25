#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        n++;
    }
    for (int i = 0; i < n / 2; i++) {
        swap(s[i], s[n - 1 - i]);
    }
    cout << s;
    return 0;
}