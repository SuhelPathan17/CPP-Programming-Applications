#include<iostream>
using namespace std;

class Arithmetic
{
    public:
            int i,j;
            Arithmetic(int iNo1, int iNo2)
            {
                i = iNo1;
                j = iNo2;
            }

            int Addition()
            {
                int Ans = 0;
                Ans = i + j;
                return Ans; 
            }
};
int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    cout<<"Enter First No.\n";
    cin>>iValue1;
    cout<<"Enter Second No.\n";
    cin>>iValue2;

//  Arithmetic obj;                       //Static
    Arithmetic *ptr = new Arithmetic(iValue1,iValue2);     //Dynamic

    iRet = ptr->Addition();
    cout<<"Addition is :"<<iRet<<"\n";
    
    return 0;
}