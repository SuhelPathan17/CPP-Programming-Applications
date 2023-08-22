#include<iostream>
using namespace std;

class StringX
{
    public:
        char ch;

        StringX(char c)
        {
            ch = c;
        }

        char CharToggleX()
        {
            if((ch >= 'a') && (ch <= 'z'))
            {
                return (ch-32);
            }
            else if((ch >= 'A') && (ch <= 'Z'))
            {
                return (ch+32);
            }
            else
            {
                return ch;
            }
        }
        
};

int main()
{
    char cValue = '\0';
    StringX *ptr = NULL;
    char cRet = '\0';

    cout<<"Enter character \n";
    cin>>cValue;

    ptr = new StringX(cValue);
    cRet = ptr->CharToggleX();
    cout<<cValue<<" Toggled character is : "<<cRet<<"\n";
    
    return 0;
}