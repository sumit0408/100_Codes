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
        char s = 'A';
        for(int k=0; k<=(n-i); k++)
        {
            cout<<" ";
        }
        for(int j=0;  j<2*i+1; j++)
        {
            cout<<s;
            if(j<(2*i+1)/2)
                s++;
            else
                s--;
        }
        cout<<"\n";
    }
    return 0;
}