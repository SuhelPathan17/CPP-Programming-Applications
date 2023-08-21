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

        int CountFrequency()
        {
            int iCnt = 0;
            while(*Arr != '\0')
            {
                if(*Arr == ch )
                {
                    iCnt++;
                }
                Arr++;
            }

            return iCnt;
        }
        
};

int main()
{
    char Arr[20];
    int iRet = 0;
    StringX *ptr = NULL;

    cout<<"Please enter string :\n";
    scanf("%[^'\n']s",Arr);

    ptr = new StringX(Arr,'a');
    iRet = ptr->CountFrequency();
    cout<<"Frequency of a is : "<<iRet<<"\n";
    
    return 0;
}