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
        char s='A'+n-1;
        for(int j=0; j<=i; j++)
        {
            
            cout<< s;
            s--;
        }
        cout<<"\n";
        s--;
    }
    return 0;
}