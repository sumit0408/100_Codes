#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("CLS");
    int n1, n2, d1, d2;
    cout<<"Enter the value of numerator 1 :";
    cin>>n1;
    cout<<"Enter the value of numerator 2 :";
    cin>>n2;
    cout<<"Enter the value of denomintor 1 :";
    cin>>d1;
    cout<<"Enter the value of denominator 2 :";
    cin>>d2;

    int num_ans = ((n1*d2) + (d1*n2));
    int deno_ans = (d1*d2);
    cout<<"The sum of two fractions is "<<num_ans<<"/"<<deno_ans;
    return 0;
}