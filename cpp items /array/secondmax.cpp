
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
     cin >> arr[i];
    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
         second = first;
         first = arr[i];
        }
        if (arr[i] != first)
            second = max(second, arr[i]);
    }
    if (second == INT_MIN)
     cout << -1;
    else
     cout << second;
    return 0;
}
