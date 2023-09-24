#include<iostream>
using namespace std;

// Problems on Numbers

class Numbers
{
    public:
        int iNo;

        Numbers(int i)
        {
            iNo = i;
        }

        void  DisplayEvenFactors()
        {
            int iCnt = 0;

            cout<<"Even factors are as follows :\n";
            for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
            {
                if((iNo % iCnt == 0) )
                {
                    if((iCnt % 2 == 0))
                    {
                        cout<<iCnt<<"\t";
                    }
                }
            }
        }
};

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    Numbers obj(iValue);

    obj.DisplayEvenFactors();

    

    return 0;
}