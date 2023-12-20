#include<bits/stdc++.h>
using namespace std;

int sum_of_elements(int arr[], int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
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
    int ans=sum_of_elements(arr,n);
    cout<<"Sum of elements is "<<ans<<endl;

    return 0;

}