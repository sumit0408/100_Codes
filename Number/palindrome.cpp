#include<bits/stdc++.h>
using namespace std;
void isPalindrome(int num)
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
        cout<<"Palindrome.";
    else
        cout<<"Not a Palindrome.";    
}

int main()
{
    system("CLS");
    int num;
    cout<<"Enter the Number : ";
    cin>>num;
    isPalindrome(num);
    return 0;
}