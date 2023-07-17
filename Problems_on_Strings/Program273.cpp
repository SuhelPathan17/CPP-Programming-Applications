#include<iostream>
#include<string.h>
using namespace std;

class StringX
{   
    public:
        int SmallCount(char *ptr)
        {
            int iCnt = 0;
            while(*ptr != '\0')
            {
                if((*ptr) >= '0' && (*ptr) <= '9')
                {
                    iCnt++;
                }
                ptr++;
            }
            return iCnt;
        }
};
int main()
{
    char Arr[20];
    int iRet = 0;
    cout<<"Enter Full Name : \n";
    scanf("%[^'\n']s",Arr);

    int iLength = strlen(Arr);
    cout<<"Length of string is : "<<iLength<<"\n";

    StringX *ptr = new StringX();
    iRet = ptr->SmallCount(Arr);
    cout<<"No. of Digits are :"<<iRet;

    return 0;
}