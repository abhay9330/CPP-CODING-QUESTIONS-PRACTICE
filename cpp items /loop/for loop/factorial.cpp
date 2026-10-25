#include <iostream>
using namespace std;
int main() {
    int x;
    int i, fac = 1;
     cout<<"enter the number:";
    cin>>x;
     for( i=1; i<=x ;i++)
    {
        fac = fac*i;
    }
    cout<<"the factorial of the number is:"<<fac;
}