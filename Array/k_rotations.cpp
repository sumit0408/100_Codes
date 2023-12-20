#include<bits/stdc++.h>
using namespace std;
void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void reverse(int arr[], int start, int last)
{
    while(start<last)
    {
        int tmp = arr[start];
        arr[start] = arr[last];
        arr[last] = tmp;
        start++;
        last--;
    }
}
void k_rotate(int arr[], int n, int k)
{
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);

}

int main()
{
    system("CLS");
    int n,k;
    cout<<"Enter the size of an Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an Array : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value of K : ";
    cin>>k;
    k_rotate(arr,n,k);
        print(arr,n);
    return 0;

}