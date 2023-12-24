#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("CLS");
    int n,d,a;
    cout<<"Enter the Value of N : ";
    cin>>n;
    cout<<"Enter the Value of Common Difference : ";
    cin>>d;
    cout<<"Enter the first term : ";
    cin>>a;
    int sum = ((n/2)*((2*a)+(n-1)*d));
    cout<<"Sum of AP series is "<<sum<<endl;
    return 0;
}