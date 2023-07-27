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

        bool CheckPerfect(int iValue)
        {
            int iTemp = SumFactors(iValue);

            if(iTemp == iValue)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

};

int main()
{
    int iNo = 0;
    bool bRet = false;
    cout<<"Please enter number : \n";
    cin>>iNo;

    Arithmetic aobj;
    bRet = aobj.CheckPerfect(iNo);
    if(bRet == true)
    {
        cout<<iNo<<" is perfect number\n";
    }
    else
    {
        cout<<iNo<<" is not perfect number\n";
    }
    

    return 0;
}