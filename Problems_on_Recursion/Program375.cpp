#include<iostream>
using namespace std;

int SumR(int *str, int iSize)
{
    static int iCnt = 0;
    static int iSum = 0;
    if(iCnt < iSize)
    {
        iSum = iSum + str[iCnt];
        iCnt++;
        SumR(str,iSize);
    }
    return iSum;
}
int main()
{
    int iRet = 0;
    int Brr[5] = {10,20,30,40,50};

    iRet = SumR(Brr,5);
    cout<<"Addition is :"<<iRet;

    return 0;

}