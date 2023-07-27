#include<iostream>
using namespace std;

class Arithmetic
{
    public:

        int iFact;

        Arithmetic()
        {
            iFact = 1;
        }

        int Factorial(int iValue)
        {
            int iCnt = 0;
            for(iCnt=1; iCnt<=iValue; iCnt++)
            {
                iFact = iFact * iCnt;
            }
 
            return iFact;
        }
};

int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Please enter number : \n";
    cin>>iNo;

    Arithmetic aobj;
    iRet = aobj.Factorial(iNo);
    cout<<"Factorial is : "<<iRet<<"\n";

    return 0;
}