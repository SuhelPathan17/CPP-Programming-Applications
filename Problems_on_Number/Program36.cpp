#include<iostream>
using namespace std;

class Arithmetic
{
    public:

        Arithmetic()
        {

        }

        void NonFactors(int iValue)
        {
            int iCnt = 0;
            cout<<"NOn-Factors of "<<iValue<<" are : \n";
            for(iCnt = 1; iCnt < iValue; iCnt++)
            {
                if((iValue % iCnt) != 0)
                {
                    cout<<iCnt<<"\n";
                }
            }
 
        }

        

};

int main()
{
    int iNo = 0;
    
    cout<<"Please enter number : \n";
    cin>>iNo;

    Arithmetic aobj;
    aobj.NonFactors(iNo);
    

    return 0;
}