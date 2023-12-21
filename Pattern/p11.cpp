#include <bits/stdc++.h>
using namespace std;
int reverse(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    return a;
}

int main()
{
    system("CLS");
    int n ;
    cout << "Enter the value of n : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {    int s = 1;
        for (int j = 0; j <= i; j++)
        {
           
            
            if(s==1)
                s=  reverse(1,0);
            else
               s = reverse(0,1);
            cout<<s<<" ";
        }
        cout << "\n";
    }
    return 0;
}