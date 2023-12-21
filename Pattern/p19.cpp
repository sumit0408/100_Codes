#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("CLS");
    int n;
    cout<<"Enter the value of N : ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=n; j>i; j--)
        {
            cout<<"*";
        }
        for(int k=0; k<2*i; k++)
        {
            cout<<" ";
        }
        for(int l=n; l>i; l--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<"*";
        }
        for(int k=0; k<2*(n-i-1); k++)
        {
            cout<<" ";
        }
        for(int l=0; l<=i ; l++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}