#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int num)
{
    int tmp=num;
    int reverse = 0;
    while(tmp!=0)
    {
        int digit = tmp%10;
        reverse = reverse*10 + digit;
        tmp=tmp/10;
    }
    if(num==reverse)
        return true;
    return false;
}

int main()
{
    system("CLS");
    int lower, upper;
    cout<<"Enter the lower limit : ";
    cin>>lower;
    cout<<"Enter the upper limit : ";
    cin>>upper;
    for(int i=lower; i<=upper; i++)
    {
        if(isPalindrome(i)==true)
            cout<<i<<" ";
    }
    return 0;
}