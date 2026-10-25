#include <iostream>
using namespace std;
int main() {
    int x;
    int i=1;
    cout<<"enter the numbers:";
    cin>>x;
  if(x<2){
    cout<<"not prime";
    return 0;
    }
    else
       { 
    while(x%i==0)
    break;
    cout<<"not prime";
    i++;
       }}
    
    