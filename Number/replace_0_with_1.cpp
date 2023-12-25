#include<bits/stdc++.h>
using namespace std;
void reverse(int num)
{
    int reverse=0;
    while(num!=0)
    {
        int digit= num%10;
        reverse = reverse*10+digit;
        num=num/10;
    }
    cout<<"Ans : "<<reverse;
}
int main()
{
    system("CLS");
    int num;
    cout<<"Enter the Number : ";
    cin>>num;

    int a = 0; 
    int tmp=num;
    while(tmp!=0)
    {
        int digit = tmp%10;
        if(digit==0)
            digit=1;
        a=a*10+digit;
        tmp=tmp/10;
    }
    reverse(a);

    return 0;
}