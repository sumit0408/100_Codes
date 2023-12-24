#include<bits/stdc++.h>
using namespace std;
void sumOfDigits(int num)
{
    int sum=0;
    while(num!=0)
    {
        int digit = num%10;
        sum=sum+digit;
        num=num/10;
    }
    cout<<"The sum is "<<sum;
}
int main()
{
    system("CLS");
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    sumOfDigits(num);
    return 0;
}