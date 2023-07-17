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

        void FactorsI()
        {
            int iCnt = 1;
            
            for(iCnt = 1; iCnt <= iNo/2; iCnt++)
            {
                if((iNo % iCnt) == 0)
                {
                    cout<<iCnt<<"\t";
                }
            }
        }
};
int main()
{
    int iValue = 0, iRet = 0;
    cout<<"Enter Number  : \n";
    cin>>iValue;

    Arithematic *ptr = new Arithematic(iValue);
    ptr->FactorsI();
    

    return 0;
}