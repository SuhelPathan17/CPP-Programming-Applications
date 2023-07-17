#include<iostream>
using namespace std;

class Display
{
    public:
        unsigned int iNo;
        Display(unsigned int i)
        {
            iNo = i;
        }
        void DisplayBinary()
        {
            printf("Value in decimal format : %d\n",iNo);
            printf("Value in octal format : %o\n",iNo);
            printf("Value in hexadecimal format : %x\n",iNo);
        }

};
int main()
{
    unsigned int Value = 11;

    Display obj(Value);

    obj.DisplayBinary();

    return 0;
}