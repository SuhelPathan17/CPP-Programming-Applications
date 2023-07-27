#include<iostream>
using namespace std;

class Arithmetic
{
    public:
        int iNo1;
        int iAns;

        Arithmetic()
        {
            iNo1 = 0;
        }
        Arithmetic(int i)
        {
            iNo1 = i;
        }

        bool DivisibleByFive()
        {
            iAns = iNo1 % 5;
            if(iAns == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

};
int main()
{
    int iValue1 = 0;
    bool bRet = false;
    cout<<"Enter first number : \n";
    cin>>iValue1;



    Arithmetic *ptr = new Arithmetic(iValue1);
    
    bRet = ptr->DivisibleByFive();
    if(bRet == true)
    {
        cout<<iValue1<<" is Divisible by five\n";
    }
    else
    {
        cout<<iValue1<<" is not Divisible by five\n";
    }
    
    
    return 0;
}