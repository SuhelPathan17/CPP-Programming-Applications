#include<iostream>
using namespace std;

void DisplayI(int iNo)
{
    int iCnt = 1;   // auto

    while(iCnt <= iNo)
    {
        cout<<"*\t";
        iCnt++;
    }
}

void DisplayR(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        cout<<"*\t";
        iCnt++;
        DisplayR(iNo); // Recursive Call
    }
}

int main()
{
    int iValue = 0;
    cout<<"Enter Number of star u want : \n";
    cin>>iValue;

    DisplayI(iValue);
    cout<<"\n";
    DisplayR(iValue);

    return 0;
}