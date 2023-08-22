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

        int ToLowerX()
        {
            if((ch >= 'A') && (ch <= 'Z'))
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
    int iRet = 0;

    cout<<"Enter character \n";
    cin>>cValue;

    ptr = new StringX(cValue);
    iRet = ptr->ToLowerX();
    cout<<cValue<<" Character in lower case : "<<(char)iRet<<"\n";
    
    return 0;
}