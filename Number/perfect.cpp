#include<bits/stdc++.h>
using namespace std;
void isPerfect(int num)
{
    int sum=0;
    int tmp=num;
    for(int i=1; i<num; i++)
    {
        if(tmp%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
        cout<<"Perfect Number.";
    else
        cout<<"Not a perfect number.";
}

int main()
{
    system("CLS");
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    isPerfect(num);
    return 0;
}