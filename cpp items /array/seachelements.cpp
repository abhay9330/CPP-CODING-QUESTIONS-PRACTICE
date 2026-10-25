#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int x;
    cout << "Enter the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element: ";
    cin >> x;
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            cout << "Element found";
            return 0;
        }
    }
    cout << "Element not found";
    return 0;
}