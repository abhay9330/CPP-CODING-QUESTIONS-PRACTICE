#include <iostream>
using namespace std;
int main() {
    int arr[5][4] = {3, 4, 7, 18, 2, 8, 3, 9, 5, 4, 2, 2, 7, 3, 0, 8, 2, 8, 9, 1};

    int sum = 0;

    for (int i = 0; i < 4; i++) {
        sum = sum + arr[i][i];
    }
    cout << sum;

    return 0;
}



// second way

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5][4] = {3, 4, 7, 18, 2, 8, 3, 9, 5, 4, 2, 2, 7, 3, 0, 8, 2, 8, 9, 1};

//     int sum = 0;
//     int col = 0;

//     while (col < 4) {
//         sum = sum + arr[col][col];
//         col++;
//     }

//     cout << sum;

//     return 0;
// }


// // second ka second way

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5][4] = {3, 4, 7, 18, 2, 8, 3, 9, 5, 4, 2, 2, 7, 3, 0, 8, 2, 8, 9, 1};

//     int sum = 0;
//     int col = 3;

//     while (col >= 0) {
//         sum = sum + arr[col][col];
//         col--;
//     }

//     cout << sum;

//     return 0;
// }

