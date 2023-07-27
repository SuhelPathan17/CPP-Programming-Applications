#include<iostream>
using namespace std;

class Arithmetic
{
    public:

        Arithmetic()
        {

        }

        void DisplayReverse(int iValue)
        {
            int iCnt = 0;
            cout<<"-------------------------------------------------------\n";
            iCnt = iValue;
            while(iCnt >= 1)
            {
                cout<<iCnt<<"\t";
                iCnt--;
            }
 
        }
};

int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Please enter number : \n";
    cin>>iNo;

    Arithmetic aobj;
    aobj.DisplayReverse(iNo);

    return 0;
}