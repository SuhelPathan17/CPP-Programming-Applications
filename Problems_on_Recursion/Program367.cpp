#include<iostream>
using namespace std;

class StringX
{
    public:
        void DisplayR(char *str)
        {
            static int iCnt = 0;

            if(*str != '\0')
            {
                cout<<str<<"\n";
                str++;
                DisplayR(str);
            }
        }
};
int main()
{
    char Arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    StringX obj;
    obj.DisplayR(Arr);

    return 0;
}