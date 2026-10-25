#include <iostream>
using namespace std;
int main() {
    int x;
    int i;
    cin>>x;
    if(x<2){
    cout<<"not prime";
    return 0;
    }
    else
       { 
  for (i=2; i<x; i++ )
    {
    
        if ( x%i==0)
        {
          cout<<"not prime";
          return 0;
        }
        }
    
     cout<<"prime";  
    }}
