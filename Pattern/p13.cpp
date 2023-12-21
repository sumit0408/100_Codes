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
        int s=1;
        for(int j=0; j<=i; j++)
        {
            cout<<s;
            s++;
        }
        for(int k=0; k<2*(n-i-1); k++)
        {
            cout<<" ";
        }
        for(int l=0; l<=i; l++)
        {
            
            cout<<s-1;
            s--;
        }
        cout<<"\n";
    } 
    return 0;
}