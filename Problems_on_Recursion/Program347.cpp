#include<iostream>
using namespace std;

class Pattern
{
    public:
        int iNo;
        Pattern(int i)
        {
            iNo = i;
        }

        void DisplayI()
        {
            int iCnt = 0;
            iCnt = 1;
            while(iCnt<=iNo)
            {
                cout<<"*\t";
                iCnt++;
            }
        }
};
int main()
{
    int iValue = 0;
    cout<<"Enter Number of star u want : \n";
    cin>>iValue;

    Pattern *ptr = new Pattern(iValue);
    ptr->DisplayI();

    return 0;
}