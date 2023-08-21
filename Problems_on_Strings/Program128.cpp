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

        bool IsCapital()
        {
            if((ch >= 'A') && (ch <= 'Z'))
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
    bRet = ptr->IsCapital();
    if(bRet == true)
    {
        cout<<"It is a Capital character\n";
    }
    else
    {
        cout<<"It is not a Capital character\n";
    }
    
    return 0;
}