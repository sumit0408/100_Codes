#include<bits/stdc++.h>
using namespace std;
void reverse_array(int arr[], int n)
{
    int start=0;
    int last=n-1;
    while(start<last)
    {
        int temp=arr[start];
        arr[start]=arr[last];
        arr[last]=temp;
        start++;
        last--;
    }
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
    reverse_array(arr,n);
    cout<<"Reversed Array : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}