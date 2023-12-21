#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("CLS");
    int n;
    int s=1;
    cout<<"Enter the value of N : ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<s<<" ";
            s++;
        }
        cout<<"\n";
    }
    return 0;
}