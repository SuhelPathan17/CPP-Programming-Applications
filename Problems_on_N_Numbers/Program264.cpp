#include<iostream>
using namespace std;


int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iSum = 0;

    cout<<"Enter the size of array\n";
    cin>>iSize;

    int *Arr = new int[iSize];

    cout<<"Enter the elements inside array\n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    cout<<"Display the elements inside array\n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    cout<<"\nAddition is : "<<iSum;
    return 0;
}