// Demonstartion of iteration using while loop

#include<iostream>
using namespace std;

void Display(int iValue)
{
    int iCnt = 0;

    iCnt = 1;       // 1
    while(iCnt <= iValue)    // 2
    {
        cout<<"Jay Ganesh...\n";  // 4
        iCnt++;     // 3
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