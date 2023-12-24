#include<bits/stdc++.h>
using namespace std;
void greatest_number(int a, int b, int c)
{
    if(a>b)
    {
        if(a>c)
        {
            cout<<"a is greatest.";
        }
        else
        {
            cout<<"c is greatest.";
        }
    }
    else
    {
        if(b>c)
        {
            cout<<"b is greatest.";
        }
        else
        {
            cout<<"c is greatest.";
        }
    }
}
int main()
{
    system("CLS");
    int a,b,c;
    cout<<"enter the value of a : ";
    cin>>a;
    cout<<"enter the value of b : ";
    cin>>b;
    cout<<"enter the value of c : ";
    cin>>c;
    greatest_number(a,b,c);
    return 0;
}