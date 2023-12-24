#include<bits/stdc++.h>
using namespace std;
void power(int num, int p)
{
    int ans=1;
    for(int i=1; i<=p; i++)
    {
        ans=ans*num;
    }
    cout<<"Power is "<<ans;
}

int main()
{
    system("CLS");
    int num;
    cout<<"Enter the value of N : ";
    cin>>num;
    int p;
    cout<<"Enter the power : ";
    cin>>p;
    power(num,p);
    return 0;
}