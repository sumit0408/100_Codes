#include<bits/stdc++.h>
using namespace std;
int smallest_number(int arr[], int size)
{
    int mini=INT_MAX;
    for(int i=0; i<size; i++)
    {
        if(arr[i]<mini)
            mini=arr[i];
    }
    return mini;
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
    int smallest=smallest_number(arr,n);
    cout<<"Smallest Number in an Array is "<<smallest<<" .";
    return 0;

}