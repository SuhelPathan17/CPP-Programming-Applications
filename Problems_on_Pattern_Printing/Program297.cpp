#include<iostream>
#include<string.h>
using namespace std;

/*
    Input : Hello

    H   e   l   l   o
    H   e   l   l   o
    H   e   l   l   o
    H   e   l   l   o
    H   e   l   l   o  

*/

class Pattern
{
    public:
        int iLength;
        char *Arr;
        Pattern(char *str)
        {
            Arr = str;
            iLength = strlen(str);
        }

        void DisplayPattern()
        {
            int i = 0;
            int j = 0;
            
            for(i=0; i<iLength; i++)
            {
                for(j=0; j<iLength; j++)
                {
                    printf("%c\t",Arr[j]);
                    
                }
                printf("\n");
            }
        }
};

int main()
{
    char str[10];

    printf("Please enter the string :\n");
    scanf("%[^'\n']s",str);

    Pattern *ptr = new Pattern(str);
    ptr->DisplayPattern();

    return 0;
}