#include <iostream>
using namespace std;
bool num(int n)
{
if (n < 2)
    return false;

    for (int i = 2; i < n; i++)
    {
     if (n % i == 0)
      return false;
    }
    return true;
}
int main()
{
 int n;
cin >> n;
if (num(n))
      cout << "Prime";
    else
     cout << "Not Prime";
    return 0;
}