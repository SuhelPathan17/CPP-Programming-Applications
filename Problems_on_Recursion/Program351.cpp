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

        void DisplayR()
        {
            static int iCnt = 1;

            if(iCnt<=iNo)
            {
                cout<<"*\t";
                iCnt++;
                DisplayR();
            }
        }
};
int main()
{
    int iValue = 0;
    cout<<"Enter Number of star u want : \n";
    cin>>iValue;

    Pattern *ptr = new Pattern(iValue);
    ptr->DisplayR();

    return 0;
}