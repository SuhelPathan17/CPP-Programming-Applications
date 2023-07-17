#include<iostream>
using namespace std;

class StringX
{
    public:
        int CountCapR(char *str)
        {
            static int iCnt = 0;

            if(*str != '\0')
            {
                if((*str >= 'A') && (*str <= 'Z') )
                {
                    iCnt++;
                }
                str++;
                CountCapR(str);
            }
            return iCnt;

        }
};
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    StringX obj;
    iRet = obj.CountCapR(Arr);

    printf(" Count of Capital letters is : %d\n",iRet);

    return 0;
}