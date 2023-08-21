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
    char cValue = '\0';
    int iRet = 0;
    StringX *ptr = NULL;

    cout<<"Please enter string :\n";
    scanf("%[^'\n']s",Arr);

    cout<<"Enter character to count frequency\n";
    cin>>cValue;

    ptr = new StringX(Arr,cValue);
    iRet = ptr->CountFrequency();
    cout<<"Frequency of "<<cValue<<" is : "<<iRet<<"\n";
    
    return 0;
}