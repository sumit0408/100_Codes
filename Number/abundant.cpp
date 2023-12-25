#include<bits/stdc++.h>
using namespace std;
void abundantNumber(int num)
{
    int sum=0;
    int tmp=num;
    for(int i=1; i<num; i++)
    {
        if(tmp%i==0)
            sum=sum+i;
    }
    if(sum>num)
        cout<<"Abundant Number.";
    else
        cout<<"Not an Abundant Number.";
}

int main()
{
    system("CLS");
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    abundantNumber(num);
    return 0;
}