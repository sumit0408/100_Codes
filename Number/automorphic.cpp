#include<bits/stdc++.h>
using namespace std;
bool isAutomorphic(int num)
{
    int sq=num*num;
    while(num!=0)
    {
        if(num%10 != sq%10)
            return false;
        num=num/10;
        sq=sq/10;
    }
    return true;
}

int main()
{
    system("CLS");
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    if(isAutomorphic(num)==true)
        cout<<"Automorphic Number";
    else
        cout<<"Not an Automorphic Number.";
    return 0;
}