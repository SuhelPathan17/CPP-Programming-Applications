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
    Pattern *ptr = new Pattern(4);
    ptr->DisplayR();

    return 0;
}