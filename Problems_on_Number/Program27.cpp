#include<iostream>
using namespace std;

class Arithmetic
{
    public:

        int iSum;

        Arithmetic()
        {
            iSum = 0;
        }

        int Summation()
        {


            iSum = iSum + 1;
            iSum = iSum + 2;
            iSum = iSum + 3;
            iSum = iSum + 4;
            iSum = iSum + 5;
 
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