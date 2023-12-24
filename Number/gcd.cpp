#include<bits/stdc++.h>
using namespace std;
int hcf(int n1, int n2)
{
    if(n2==0)
        return n1;
    return hcf(n2,n1%n2);
}
int main()
{
    system("CLS");
    int num1, num2;
    cout<<"Enter the value of N1 : ";
    cin>>num1;
    cout<<"Enter the value of N2 : ";
    cin>>num2;
    cout<<hcf(num1,num2);
    return 0;
}