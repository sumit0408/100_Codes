#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("CLS");
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=n; j>i; j--)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }


    return 0;
}