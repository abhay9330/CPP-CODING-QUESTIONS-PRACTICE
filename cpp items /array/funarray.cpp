
#include <iostream>
using namespace std;
void fun(int arr[], int n) {
for (int i = 0; i < n; i++) {
     cout << arr[i] << " ";
    }
}
int main() {
 int n, arr[100];
 cin >> n;
    for (int i = 0; i < n; i++) {
     cin >> arr[i];
    }
    fun(arr, n);
    return 0;
}
