#include<bits/stdc++.h>
using namespace std;
void sum_array(int arr[], int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+arr[i];
    }
    int avg=sum/n;
    cout<<"Average is "<<avg<<endl;
}

int main()
{
    system("CLS");
    int n;
    cout<<"Enter size of an Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array :-"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sum_array(arr,n);

    return 0;
}