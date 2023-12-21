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
        if(i==0 || i==n-1)
        {
            for(int j=0; j<n; j++)
            {
                cout<<"*";
            }
        }
        else
        {
            for(int k=0; k<n; k++)
            if(k==0 || k==n-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }

    return 0;
}