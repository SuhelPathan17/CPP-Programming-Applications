#include<iostream>
using namespace std;

class Arithmetic
{
    public:
        int iNo1;
        int iNo2;
        int iNo3;
        int iNo4;
        int iNo5;
        int iSum;

        Arithmetic()
        {
            iNo1 = 1;
            iNo2 = 2;
            iNo3 = 3;
            iNo4 = 4;
            iNo5 = 5;
            iSum = 0;
        }

        int Summation()
        {

            iSum = iSum + iNo1;
            iSum = iSum + iNo2;
            iSum = iSum + iNo3;
            iSum = iSum + iNo4;
            iSum = iSum + iNo5;
 
            return iSum;
        }
};

int main()
{
    int iRet = 0;

    Arithmetic aobj;
    iRet = aobj.Summation();
    cout<<"Summation is : "<<iRet<<"\n";

    return 0;
}