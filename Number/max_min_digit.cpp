#include<bits/stdc++.h>
using namespace std;
void maxDigit(int num)
{
    int maxi=INT_MIN;
    while(num!=0)
    {
        int digit = num%10;
        if(digit>maxi)
            maxi=digit;
        num=num/10;
    }
    cout<<"Max digit is "<<maxi<<endl;
}
void minDigit(int num)
{
    int mini=INT_MAX;
    while(num!=0)
    {
        int digit = num%10;
        if(digit<mini)
            mini=digit;
        num=num/10;
    }
    cout<<"Mini digit is "<<mini;
}

int main()
{
    system("CLS");
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    maxDigit(num);

    minDigit(num);
    return 0;
}