#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int iNo;
        Arithematic(int i)
        {
            iNo = i;
        }

        int CountDigitsR()
        {
            int iCnt = 0;
            while(iNo != 0)
            {
                iCnt++;
                iNo = iNo / 10;
            }
            return iCnt;
        }
};
int main()
{
    int iValue = 0;
    int iRet = 0;
    cout<<"Enter Number  : \n";
    cin>>iValue;

    Arithematic *ptr = new Arithematic(iValue);
    iRet = ptr->CountDigitsR();
    cout<<"No. of digits are:"<<iRet;
    
    

    return 0;
}