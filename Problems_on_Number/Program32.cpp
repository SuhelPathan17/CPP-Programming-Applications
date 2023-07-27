#include<iostream>
using namespace std;

class Arithmetic
{
    public:


        Arithmetic()
        {

        }

        void DisplayFactors(int iValue)
        {
            int iCnt = 0;
            cout<<"Factors of "<<iValue<<" are :\n";
            for(iCnt=1; iCnt<=(iValue/2); iCnt++)
            {
                if(iValue % iCnt == 0)
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
    aobj.DisplayFactors(iNo);
 

    return 0;
}