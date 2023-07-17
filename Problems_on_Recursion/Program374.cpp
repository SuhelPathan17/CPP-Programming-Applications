#include<iostream>
using namespace std;

void DisplayR(int *str, int iSize)
{
    static int iCnt = 0;
    if(iCnt < iSize)
    {
        cout<<str[iCnt]<<"\n";
        iCnt++;
        DisplayR(str,iSize);
    }
}
int main()
{
    int Brr[5] = {10,20,30,40,50};

    DisplayR(Brr,5);

    return 0;

}