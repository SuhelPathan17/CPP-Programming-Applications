#include<iostream>
using namespace std;


int main()
{
    int iCnt = 0;
    int iSum = 0;
    
    int Arr[] = {10,20,30,40,50};

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    cout<<"\nAddition is : "<<iSum;
    return 0;
}