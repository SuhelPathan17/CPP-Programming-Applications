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

        int SumDigitsR()
        {
            static int iTemp = iNo;
            static int iSum = 0;
            int iDigit = 0;
            if(iTemp != 0)
            {
                iDigit = iTemp % 10;
                iSum = iSum + iDigit;
                iTemp = iTemp / 10;
                SumDigitsR();
            }
            return iSum;
        }
};
int main()
{
    int iValue = 0;
    int iRet = 0;
    cout<<"Enter Number  : \n";
    cin>>iValue;

    Arithematic *ptr = new Arithematic(iValue);
    iRet = ptr->SumDigitsR();
    cout<<"Sum of digits are:"<<iRet;
    
    

    return 0;
}