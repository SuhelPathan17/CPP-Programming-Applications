#include<iostream>
using namespace std;

void DisplayR(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        printf("*\t");
        iCnt++;
        DisplayR(iNo); // Recursive Call
    }
}

int main()
{
    int iValue = 0;
    cout<<"Enter Number of star u want : \n";
    cin>>iValue;

    DisplayR(iValue);

    return 0;
}