#include<iostream>
using namespace std;

class StringX
{
    public:
        char *src;
        char *dest;

        StringX(char *ptr1, char *ptr2)
        {
            src = ptr1;
            dest = ptr2;
        }

        void StrcpyX()
        {
            while((*src != '\0'))
            {
                (*dest) = (*src);
                src++;
                dest++;
            }
            *src = *dest;
        }
        
};

int main()
{
    char Arr[20];
    char Brr[20];
    StringX *ptr = NULL;

    cout<<"Enter string \n";
    scanf("%[^'\n']s",Arr);

    ptr = new StringX(Arr,Brr);
    ptr->StrcpyX();
    cout<<" Original String is : "<<Arr<<"\n";
    cout<<" Copied String is : "<<Brr<<"\n";
    
    return 0;
}