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
            int Digit = 0;

            while(iNo != 0)
            {
                Digit = iNo % 2;
                cout<<Digit;
                iNo = iNo / 2;
            }
            cout<<"\n";
        }

};
int main()
{
    unsigned int Value = 11;

    Display obj(Value);

    obj.DisplayBinary();

    return 0;
}