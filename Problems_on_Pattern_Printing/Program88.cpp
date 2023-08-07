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
            int iCnt = 0;
            for(iCnt = 1; iCnt <=iValue; iCnt++)
            {
                cout<<"*\t";
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