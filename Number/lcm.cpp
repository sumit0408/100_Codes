#include<bits/stdc++.h>
using namespace std;
int Lcm(int a, int b)
{
    int ans = (a*b)/gcd(a,b);
    return ans ;
}
int main()
{
    system("CLS");
    int n1, n2;
    cout<<"Enter the value of n1 : ";
    cin>>n1;
    cout<<"Enter the value of n2 : ";
    cin>>n2;
    cout<<Lcm(n1,n2);
    return 0;
}