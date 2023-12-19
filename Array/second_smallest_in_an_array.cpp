#include<bits/stdc++.h>
using namespace std;
int second_smallest(int arr[], int n)
{
    int smallest=INT_MAX;
    int sec_smallest=INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<smallest)
        {
            sec_smallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]>smallest && arr[i]<sec_smallest)
        {
            sec_smallest=arr[i];
        }
    }
    return sec_smallest;
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
    int ans=second_smallest(arr,n);
    cout<<"Second smallest number in an array : "<<ans;

    return 0;

}