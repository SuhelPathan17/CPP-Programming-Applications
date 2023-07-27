#include<iostream>
using namespace std;

class Arithmetic
{
    public:

        int iSum;

        Arithmetic()
        {
            iSum = 0;
        }

        int Summation(int iValue)
        {
            int iCnt = 0;
            for(iCnt=1; iCnt<=iValue; iCnt++)
            {
                iSum = iSum + iCnt;
            }
 
            return iSum;
        }
};

int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Please enter number : \n";
    cin>>iNo;

    Arithmetic aobj;
    iRet = aobj.Summation(iNo);
    cout<<"Summation is : "<<iRet<<"\n";

    return 0;
}