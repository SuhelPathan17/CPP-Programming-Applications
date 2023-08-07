#include<iostream>
using namespace std;

class Pattern
{
    public:
        int iValue;

        Pattern(int i)
        {
            iValue = i;
        }

        void DisplayPattern()
        {
            if(iValue < 0)
            {
                iValue = -iValue;
            }
            
            int iCnt = 0;
            for(iCnt = iValue; iCnt > 0; iCnt--)
            {
                cout<<iCnt<<"\n";
            }
            cout<<"\n";
        }
};

int main()
{
    int iNo = 0;
    Pattern *ptr = NULL;

    cout<<"Enter the number : \n";
    cin>>iNo;

    ptr = new Pattern(iNo);
    ptr->DisplayPattern();
    
    return 0;
}