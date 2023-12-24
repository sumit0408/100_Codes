#include<bits/stdc++.h>
using namespace std;
void factorial(int num)
{
    int fact=1;
    for(int i=1; i<=num; i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial of a given number is "<<fact<<endl;
}

int main()
{
    system("CLS");
    int num;
    cout<<"Enter the Number : ";
    cin>>num;
    factorial(num);
    return 0 ;
}