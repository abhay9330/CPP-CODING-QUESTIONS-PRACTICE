#include <iostream>
using namespace std;
int main() 
{
    int n,i;
    cin>>n;
    int arr [n];
    for( i=0;i<n; i++){
        cin>>arr[i];
    }
    bool p = true;
    for (i=0;i<n/2;i++){
        if(arr[i]!=arr[n-1-i]){
            p = false ;
            break;
        }
    }
    if(p){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    }




//     second way from while

//     #include <iostream>
// using namespace std;
// int main() {
//     int n, i = 0;
//     bool p= true;
//     cin >> n;
//     int arr[n];
//     while (i < n) {
//         cin >> arr[i];
//         i++;
//     }
//      i = 0;
//     while (i < n / 2) {
//     if (arr[i] != arr[n - 1 - i]) {
//          p = false;
//       break;
//         }
//         i++;

//     }
//     if (p) {
//     cout << "Yes";
//     } 
//     else{
//     cout << "No";
// }}