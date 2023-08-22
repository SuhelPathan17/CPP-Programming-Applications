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

        void StrlwrX()
        {
            while(*str != '\0')
            {
                if(((*str) >= 'A' ) && ((*str) <= 'Z'))
                {
                    (*str) = (*str) + 32;
                }
                str++;
            }
        }
        
};

int main()
{
    char Arr[20];
    StringX *ptr = NULL;


    cout<<"Enter string \n";
    scanf("%[^'\n']s",Arr);

    ptr = new StringX(Arr);
    ptr->StrlwrX();
    cout<<" String after conversion : "<<Arr<<"\n";
    
    return 0;
}