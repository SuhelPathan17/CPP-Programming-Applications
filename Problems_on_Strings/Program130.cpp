#include<iostream>
using namespace std;

class Characters
{
    public:
        char ch;

        Characters(char c)
        {
            ch = c;
        }

        bool IsDigit()
        {
            if((ch >= '0') && (ch <= '9'))
            {
                return true;
            }  
            else
            {
                return false;
            }
        }
        
};

int main()
{
    char cValue = '\0';
    Characters *ptr = NULL;
    bool bRet = false;

    cout<<"Please enter character :\n";
    cin>>cValue;

    ptr = new Characters(cValue);
    bRet = ptr->IsDigit();
    if(bRet == true)
    {
        cout<<"It is a Digit\n";
    }
    else
    {
        cout<<"It is not a Digit\n";
    }
    
    return 0;
}