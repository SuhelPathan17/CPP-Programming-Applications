#include<iostream>
using namespace std;

class StringX
{
    public:
        char *str;

        StringX(char *ptr)
        {
            str = ptr ;
        }

        int CountSpace()
        {
            int iCnt = 0;
            while(*str != '\0')
            {
                if((*str) == ' ')
                {
                    iCnt++;
                }
                str++;
            }
            return iCnt;
        }
        
};

int main()
{
    char Arr[20];
    StringX *ptr = NULL;
    int iRet = 0;

    cout<<"Enter string \n";
    scanf("%[^'\n']s",Arr);

    ptr = new StringX(Arr);
    iRet = ptr->CountSpace();
    cout<<" Count of spaces in string is : "<<iRet<<"\n";
    
    return 0;
}