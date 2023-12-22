#include<bits/stdc++.h>
using namespace std;
void isPrime(int num)
{
   for(int i=2; i<num; i++)
   {
    if(num%i==0)
    {
        cout<<"Not a Prime number.";
        break;
    }
    else
    {
        cout<<"Prime Number.";
        break;
    }
   }
}

int main()
{
    system("CLS");
    int num;
    cout<<"Enter the Number : ";
    cin>>num;
    isPrime(num);
    return 0;
}