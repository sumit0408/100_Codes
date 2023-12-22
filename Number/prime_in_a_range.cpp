#include<bits/stdc++.h>
using namespace std;
bool isPrime(int num)
{
   for(int i=2; i<num; i++)
   {
    if(num%i==0)
    {
        return false;
        break;
    }
   }
   return true;
}

int main()
{
    system("CLS");
    int lower, upper;
    cout<<" Enter the Lower and Upper : ";
    cin>>lower;
    cin>>upper;
    for(int i=lower; i<=upper; i++)
    {
        if(isPrime(i)==true)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}