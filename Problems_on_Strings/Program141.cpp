#include<iostream>
using namespace std;

class StringX
{
    public:
        char *Arr;

        StringX(char *str)
        {
            Arr = str;
        }

        int CountCapital()
        {
            int iCnt = 0;
            while(*Arr != '\0')
            {
                if((*Arr >= 'A') && (*Arr <= 'Z'))
                {
                    iCnt++;
                }
                Arr++;
            }

            return iCnt;
        }
        
};

int main()
{
    char Arr[20];
    int iRet = 0;
    StringX *ptr = NULL;

    cout<<"Please enter string :\n";
    scanf("%[^'\n']s",Arr);

    ptr = new StringX(Arr);
    iRet = ptr->CountCapital();
    cout<<"Frequency of Capital alphabets is : "<<iRet;
    
    return 0;
}