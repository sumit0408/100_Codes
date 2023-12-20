#include<bits/stdc++.h>
using namespace std;

void freq(int arr[], int n)
{
    unordered_map<int, int> map;
    for(int i=0; i<n; i++)
    {
        map[arr[i]]++;
    }
    for(auto x : map)
    {
        cout<<x.first<<" occurs "<<x.second<<" times."<<endl;
    }
}
int main()
{
    system("CLS");
    int n;
    cout<<"Enter the size of an Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an Array :-"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    freq(arr,n);
    return 0;
}