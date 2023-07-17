#include<iostream>
using namespace std;

class Numbers
{
    public:
        int iNo1;
        int iNo2;

        Numbers(int i, int j)
        {
            iNo1 = i;
            iNo2 = j;
        }

        void CommonFactorsDisplay()
        {
            int iCnt = 0;
            cout<<"Common Factors are : \n";
            for(iCnt = 1; iCnt <= (iNo1/2) && iCnt <= (iNo2/2) ; iCnt++)
            {
                if(iNo1 % iCnt == 0 && iNo2 % iCnt == 0)
                {
                        cout<<iCnt<<"\t";
                }
            }
        }
};

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter the First Number: \n";
    cin>>iValue1;

    cout<<"Enter the Second Number: \n";
    cin>>iValue2;

    Numbers *ptr = new Numbers(iValue1, iValue2);
    ptr->CommonFactorsDisplay();

    return 0;
}