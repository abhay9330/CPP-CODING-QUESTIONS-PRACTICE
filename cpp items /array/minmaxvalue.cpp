#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 3, 1, 7, 0};
    int min = arr[0];
    // Min value
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << min << endl;
    // Max value
    int max = arr[0];

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max << endl;
    return 0;
}
