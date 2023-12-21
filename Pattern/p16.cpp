#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("CLS");
    int n;
    char s= 'A';
    cout<<"Enter the value of n :";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        
        for(int j=0; j<=i; j++)
        {
            cout<<s;

        }
        cout<<"\n";
                    s++;
    }
    return 0;
}