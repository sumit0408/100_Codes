#include<bits/stdc++.h>
using namespace std;
int factorial(int num)
{
    int fact=1;
    for(int i=1; i<=num; i++)
    {
        fact=fact*i;
    }
    return fact;
}
void strongNumber(int num)
{
    int tmp=num;
    int sum=0;
    while(tmp!=0)
    {
        int digit = tmp%10;
        sum=sum+factorial(digit);
        tmp=tmp/10;
    }
    if(num==sum)
        cout<<"Strong Number.";
    else
        cout<<"Not a Strong Number.";
}
int main()
{
    system("CLS");
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    strongNumber(num);
    return 0;
}