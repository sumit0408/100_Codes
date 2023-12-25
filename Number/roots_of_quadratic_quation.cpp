#include<bits/stdc++.h>
using namespace std;
int dis(int a, int b, int c)
{
    int D = ((pow(b,2)) - (4*a*c));
    return D;
}

void roots(int a, int b, int c)
{
    int x1 = ((-b + sqrt(dis(a,b,c)))/(2*a));
    int x2 = ((-b - sqrt(dis(a,b,c)))/(2*a));
    cout<<"Roots are : "<<x1<<"    "<<x2<<endl;
}

int main()
{
    system("CLS");
    int a, b, c;
    cout<<"Enter the value of A : ";
    cin>>a;
    cout<<"Enter the value of B : ";
    cin>>b;
    cout<<"Enter the value of C : ";
    cin>>c;
    roots(a,b,c);
    return 0;
}