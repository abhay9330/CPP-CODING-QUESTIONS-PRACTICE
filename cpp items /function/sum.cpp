#include <iostream>
using namespace std;
int sum(int x , int y)
{
    int ans = x+y;
    return ans; 
}
int mul(int x , int y )
{
    int ans =x*y;
    return ans;
}
int main() 
{
    int a,b;
    cout<<"enter the numbers:";
  cin>>a>>b;
    cout<<sum(a,b)<<endl;
    cout<<mul(a,b);

}

