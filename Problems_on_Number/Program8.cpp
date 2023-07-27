#include<iostream>
using namespace std;

class Arithmetic
{
    public:
        int iNo1;

        Arithmetic()
        {
            iNo1 = 0;
        }
        Arithmetic(int i)
        {
            iNo1 = i;
        }

        int DivisibleByFive()
        {
            if(iNo1 % 5 == 0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }

};
int main()
{
    int iValue1 = 0;
    int iRet = 0;
    cout<<"Enter first number : \n";
    cin>>iValue1;



    Arithmetic *ptr = new Arithmetic(iValue1);
    
    iRet = ptr->DivisibleByFive();
    if(iRet == 1)
    {
        cout<<iValue1<<" is Divisible by five\n";
    }
    else
    {
        cout<<iValue1<<" is not Divisible by five\n";
    }
    
    
    return 0;
}