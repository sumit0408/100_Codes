#include<bits/stdc++.h>
using namespace std;
bool isPrime(int num)
{
    for(int i=2; i<num; i++)
    {
        if(num%i==0)
            return false;
    }
    return true;
}

void sumOfPrime(int num)
{
    int tmp=num;
    int flag=false;
    for(int i=2; i<tmp-1; i++)
    {
        for(int j=tmp-2; j>1; j--)
        {
            if((isPrime(i)==true && isPrime(j)==true) && ((i+j)==num)) 
            {
                flag = true;
                cout<<i<<" + "<<j<<" = "<<num;
                if(flag==true)
                    break;
            }
            
        }
         if(flag==true)
            break;            
    }
}
int main()
{
    system("CLS");
    int n;
    cout<<"Enter the value of N : ";
    cin>>n;
    sumOfPrime(n);
    return 0;
}