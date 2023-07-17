#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;

        ArrayX(int iSize)
        {
            Arr = new int[iSize];
        }
};
int main()
{
    int iValue = 5;
    ArrayX *ptr = new ArrayX(iValue);
    return 0;
}