#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("CLS");
    int lower, upper ; 
    cout<<"Enter the lower limit : ";
    cin>>lower;
    cout<<"Enter the lower limit : ";
    cin>>upper;
    int sum=0;
    for(int i=lower; i<=upper; i++)
    {   
        sum=sum+i;
    }
    cout<<"Sum in a given range is "<<sum;
    return 0;
}