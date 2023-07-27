#include<iostream>
using namespace std;

void Display(int iValue)
{
    int iCnt = 0;

    iCnt = 1;
    while(iCnt <= iValue)
    {
        cout<<"Hello world : "<<iCnt<<"\n";
        iCnt++;
    }   
}

int main()
{
    int iNo = 0;

    cout<<"Enter number of iterations : \n";
    cin>>iNo;

    Display(iNo);

    return 0;
}