#include<bits/stdc++.h>
using namespace std;
void harshadNumber(int num)
{
    int sum=0;
    int tmp=num;
    while(tmp!=0)
    {
        int digit = tmp%10;
        sum=sum+digit;
        tmp=tmp/10;
    }
    if(num%sum==0)
        cout<<"Harshad Number.";
    else
        cout<<"Not a Harshad Number.";
}


int main()
{
    system("CLS");
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    harshadNumber(num);
    return 0;
}