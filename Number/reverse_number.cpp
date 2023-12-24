#include<bits/stdc++.h>
using namespace std;
void reverseNumber(int num)
{
    int reverse=0;
    while(num!=0)
    {
        int digit = num%10;
        reverse = reverse*10 + digit;
        num=num/10;
    }
    cout<<"Reverse is "<<reverse;
}
int main()
{
    system("CLS");
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    reverseNumber(num);
    return 0;
}