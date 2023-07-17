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
                DisplayR(++str);
                cout<<str-1<<"\n";
            }
        }
};
int main()
{
    char Arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);
    printf("-------------------------------------------\n");

    StringX obj;
    obj.DisplayR(Arr);
    printf("-------------------------------------------\n");


    return 0;
}