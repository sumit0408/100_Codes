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
        for(int j=i+1; j<=n; j++)
        {
            cout<<s<<" ";
            s++;
        }
        cout<<"\n";
    }

    return 0;
}