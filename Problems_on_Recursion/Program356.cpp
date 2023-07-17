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

        void FactorsR()
        {
            static int iCnt = 1;
            
            if(iCnt<=(iNo/2))
            {
                if((iNo % iCnt) == 0)
                {
                    cout<<iCnt<<"\t";
                }
                iCnt++;
                FactorsR();
            }
        }
};
int main()
{
    int iValue = 0, iRet = 0;
    cout<<"Enter Number  : \n";
    cin>>iValue;

    Arithematic *ptr = new Arithematic(iValue);
    ptr->FactorsR();
    

    return 0;
}