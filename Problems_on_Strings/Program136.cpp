#include<iostream>
using namespace std;

class StringX
{
    public:
        char *Arr;

        StringX(char str[])
        {
            Arr = str;
        }

        int StrlenX()
        {
            int iCnt = 0, i = 0;
            while(Arr[i] != '\0')
            {
                iCnt++;
                i++;
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

    ptr = new StringX(Arr);
    iRet = ptr->StrlenX();
    cout<<"Length of string is : "<<iRet;
    
    return 0;
}