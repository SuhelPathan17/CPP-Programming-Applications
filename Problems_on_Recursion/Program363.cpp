#include<iostream>
using namespace std;

class StringX
{
    public:
        int strlenI(char *str)
        {
            static int iCnt = 0;

            if(*str != '\0')
            {
                iCnt++;
                str++;
                strlenI(str);
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
    iRet = obj.strlenI(Arr);

    printf("String length is : %d\n",iRet);

    return 0;
}