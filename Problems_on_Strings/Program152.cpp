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

        void StruprX()
        {
            while(*str != '\0')
            {
                if(((*str) >= 'a' ) && ((*str) <= 'z'))
                {
                    (*str) = (*str) - 32;
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
    ptr->StruprX();
    cout<<" String after conversion : "<<Arr<<"\n";
    
    return 0;
}