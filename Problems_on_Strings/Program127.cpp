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

        bool CheckSmall()
        {
            if((ch >= 97) && (ch <= 122))
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
    bRet = ptr->CheckSmall();
    if(bRet == true)
    {
        cout<<"It is a small character\n";
    }
    else
    {
        cout<<"It is not a small character\n";
    }
    
    return 0;
}