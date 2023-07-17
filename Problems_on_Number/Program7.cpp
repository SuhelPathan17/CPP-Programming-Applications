#include<iostream>
using namespace std;

class Arithmetic
{
    public:
        int iNo1;
        int iNo2;

        Arithmetic()
        {
            iNo1 = 2;
            iNo2 = 2;
        }
        Arithmetic(int i, int j)
        {
            iNo1 = i;
            iNo2 = j;
        }

        int Multiplication()
        {
            int Ans = 0;
            Ans = iNo1 + iNo2;
            return Ans;
        }

};
int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;
    cout<<"Enter first number : \n";
    cin>>iValue1;

    cout<<"Enter Second number : \n";
    cin>>iValue2;

    Arithmetic *ptr = new Arithmetic;
    Arithmetic *ptr1 = new Arithmetic(iValue1,iValue2);

    iRet = ptr->Multiplication();
    cout<<"Multiplication is :"<<iRet<<"\n";

    iRet = ptr1->Multiplication();
    cout<<"Multiplication is :"<<iRet<<"\n";
    
    return 0;
}