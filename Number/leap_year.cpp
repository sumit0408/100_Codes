#include<bits/stdc++.h>
using namespace std;
void leapYear(int year)
{
    if((year%4==0 && year%100!=0) || (year%400==0))
        cout<<"Leap Year.";
    else
        cout<<"Not a Leap Year.";
}

int main()
{
    system("CLS");
    int year;
    cout<<"Enter Year : ";
    cin>>year;
    leapYear(year);
    return 0;
}