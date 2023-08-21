#include<iostream>
using namespace std;

class StringX
{
    public:
        char *Arr;
        char ch;

        StringX(char *str, char c)
        {
            Arr = str;
            ch = c;
        }

        bool Check()
        {
            bool bflag = false;
            while(*Arr != '\0')
            {
                if(*Arr == ch )
                {
                    bflag = true;
                    break;
                }
                Arr++;
            }

            return bflag;
        }
        
};

int main()
{
    char Arr[20];
    char cValue = '\0';
    bool bRet = false;
    StringX *ptr = NULL;

    cout<<"Please enter string :\n";
    scanf("%[^'\n']s",Arr);

    cout<<"Enter character to check\n";
    cin>>cValue;

    ptr = new StringX(Arr,cValue);
    bRet = ptr->Check();
    if(bRet == true)
    {
        cout<<"Character is present\n";
    }
    else
    {
        cout<<"Character is not present\n";
    }
    
    return 0;
}