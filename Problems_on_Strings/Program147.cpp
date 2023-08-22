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

        int ToUpperX()
        {
            return (ch - 32);
        }
        
};

int main()
{
    char cValue = '\0';
    StringX *ptr = NULL;
    int iRet = 0;

    cout<<"Enter character \n";
    cin>>cValue;

    ptr = new StringX(cValue);
    iRet = ptr->ToUpperX();
    cout<<cValue<<" Character in upper case : "<<(char)iRet<<"\n";
    
    return 0;
}