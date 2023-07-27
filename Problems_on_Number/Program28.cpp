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

        int Summation()
        {
            int iCnt = 0;
            for(iCnt=1; iCnt<=5; iCnt++)
            {
                iSum = iSum + iCnt;
            }
 
            return iSum;
        }
};

int main()
{
    int iRet = 0;

    Arithmetic aobj;
    iRet = aobj.Summation();
    cout<<"Summation is : "<<iRet<<"\n";

    return 0;
}