#include<iostream>
using namespace std;

class Arithmetic
{
    public:

        Arithmetic()
        {

        }

        int SumFactors(int iValue)
        {
            int iCnt = 0;
            int iSum = 0;
      
            for(iCnt=1; iCnt<=(iValue/2); iCnt++)
            {
                if(iValue % iCnt == 0)
                {
                    iSum = iSum + iCnt;
                }    
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
    iRet = aobj.SumFactors(iNo);
    cout<<"Summation of factors are : "<<iRet<<"\n";

    return 0;
}