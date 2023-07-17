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

        bool CheckPerfectR()
        {
            static int iCnt = 1;
            static int iSum = 0;
            
            if(iCnt<=(iNo/2))
            {
                if((iNo % iCnt) == 0)
                {
                    iSum = iSum + iCnt;
                }
                iCnt++;
                CheckPerfectR();
            }
            return iSum == iNo;
        }
};
int main()
{
    int iValue = 0;
    bool bRet = false;
    cout<<"Enter Number  : \n";
    cin>>iValue;

    Arithematic *ptr = new Arithematic(iValue);
    bRet = ptr->CheckPerfectR();
    if(bRet == true)
    {
        cout<<"No. is perfect \n";
    }
    else
    {
        cout<<"No. is not perfect \n";
    }
    

    return 0;
}