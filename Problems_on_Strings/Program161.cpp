#include<iostream>
using namespace std;

class StringX
{
    public:
        char *start;
        char *end;
        StringX(char *ptr)
        {
            start = ptr;
            end = ptr;

            while(*end != '\0')
            {
                end++;
            }
            end--;
        }

        void strrevX()
        {
            char cTemp = '\0';
            while(start < end)
            {
                cTemp = *start;
                *start = *end;
                *end = cTemp;

                start++;
                end--;
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
    ptr->strrevX();
    cout<<" Reversed String is : "<<Arr<<"\n";
 
    
    return 0;
}