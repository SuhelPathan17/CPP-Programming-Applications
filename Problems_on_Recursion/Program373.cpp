#include<iostream>
using namespace std;

void Display(int *str, int iSize)
{
    int iCnt = 0;
    while(iCnt < iSize)
    {
        cout<<str[iCnt]<<"\n";
        iCnt++;
    }
}
int main()
{
    int Brr[5] = {10,20,30,40,50};

    Display(Brr,5);

    return 0;

}