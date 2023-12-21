#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("CLS");
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        char s= 'A';
        for(int j=0; j<=i; j++)
        {
            cout<<s;
            s++;
        }
        cout<<"\n";
    }
    return 0;
}