#include<iostream>
using namespace std;

int main()
{
    int i = 0;
    cout<<"ASCII TABLE :\n";
    cout<<"Decimal number\t"<<"Character value\t"<<"Octal value\t"<<"Hexadecimal value\n";
    for(i = 0; i<=127; i++)
    {
        cout<<i<<"\t";
        cout<<(char)i<<"\t";
        cout<<std::oct<<i<<"\t";
        cout<<std::hex<<i<<"\n";
    }

    return 0;
}