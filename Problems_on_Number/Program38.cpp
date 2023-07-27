#include<iostream>
using namespace std;

class Arithmetic
{
    public:

        Arithmetic()
        {

        }

        void DisplayTable(int iValue)
        {
            int iCnt = 0;
            cout<<"-------------------------------------------------------\n";
            cout<<"Table of "<<iValue<<" is as follows :\n";
            cout<<"-------------------------------------------------------\n";
            for(iCnt = 1; iCnt <= 10; iCnt++)
            {
                cout<<iValue*iCnt<<"\n";
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
    aobj.DisplayTable(iNo);

    return 0;
}