#include<bits/stdc++.h>
using namespace std;
int count(int num)
{
    int ans=0;
    while(num!=0)
    {
        int digit = num%10;
        ans++;
        num=num/10;
    }
    return ans;
}

void isArmstrong(int num)
{
    int sum=0;
    int tmp = num;
    int len = count(tmp);
    while(tmp!=0)
    {
        int digit = tmp%10;
        sum = sum + pow(digit,len);
        tmp= tmp/10;
    }
    if(sum==num)
    {
        cout<<"Armstrong Number.";
    }
    else
        cout<<"Not an Armstrong Number.";
}

int main()
{
    system("CLS");
    int num;
    cout<<"Enter the Number : ";
    cin>>num;
    isArmstrong(num);
    return 0;
}