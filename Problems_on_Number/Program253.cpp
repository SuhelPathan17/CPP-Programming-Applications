#include<iostream>
using namespace std;

class Numbers
{
    public:
        int iNo;

        Numbers(int i)
        {
            iNo = i;
        }

        void DisplayEvenFactors()
        {
            int iCnt = 0;
            cout<<"Even Factors are : \n";
            for(iCnt = 2; iCnt <= (iNo/2); iCnt = iCnt+2)
            {
                if(iNo % iCnt == 0)
                {
                        cout<<iCnt<<"\t";
                }
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter the Number: \n";
    cin>>iValue;

    Numbers *ptr = new Numbers(iValue);
    ptr->DisplayEvenFactors();

    return 0;
}