#include<bits/stdc++.h>
using namespace std;
bool isPrime(int num)
{
    for(int i=2; i<num; i++)
    {
        if(num%i==0)
            return false;
    }
    return true;
}

int main()
{
    system("CLS");
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    for(int i=2; i<=num; i++)
    {
        if(isPrime(i)==true)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}