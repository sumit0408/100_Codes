#include<bits/stdc++.h>
using namespace std;
void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void decreasing_order(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(arr[j]>arr[i])
            {
                int tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    print(arr,n);
}

int main()
{
    system("CLS");
    int n;
    cout<<"Enter the size of an Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an Array : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    decreasing_order(arr,n);
    return 0;

}