#include<iostream>
using namespace std;

class Arithmatic
{
    public:

        Arithmatic()
        {

        }

        void DisplayEvenFactors(int iNo)
        {
            int iCnt = 0;
            cout<<"Even-Factors are as follows :\n";
            for(iCnt = 2; iCnt<=(iNo/2); iCnt = iCnt + 2)
            {
                if((iNo % iCnt == 0))
                {
                    cout<<iCnt<<"\n";
                }
            }
        }
};

int main()
{
    int iNo = 0;

    cout<<"Enter number : \n";
    cin>>iNo;

    Arithmatic aobj ;

    aobj.DisplayEvenFactors(iNo);

    return 0;
}