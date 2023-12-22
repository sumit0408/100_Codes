#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("CLS");
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    if(num>0)
        cout<<"Number is positive.";
    else if(num<0)
        cout<<"Number is negative.";
    else
        cout<<"Zero";
    return 0;
}