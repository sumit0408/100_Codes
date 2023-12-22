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

bool isArmstrong(int num)
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
        return true;
    }
    return false;
}

void armstrong_range(int lower, int upper)
{
    for(int i=lower; i<=upper; i++)
    {
        if(isArmstrong(i)==true)
        {
            cout<<i<<" ";
        }
    }
}

int main()
{
    system("CLS");
    int num1, num2;
    cout<<" Enter the value of num1 & num2 : ";
    cin>>num1;
    cin>>num2;
    armstrong_range(num1,num2);
    return 0;
}