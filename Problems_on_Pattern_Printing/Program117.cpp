#include<iostream>
using namespace std;

class Pattern
{
    public:
        int iRow;
        int iCol;

        Pattern(int r, int c)
        {
            iRow = r;
            iCol = c;
        }

        void DisplayPattern()
        {
            int i = 0;
            int j = 0;

            if(iRow < 0)
            {
                iRow = -iRow;
            }

            if(iCol < 0)
            {
                iCol = -iCol;
            }
            
            for(i = 1; i<=iRow; i++)
            {
                for(j = 1; j<=iCol; j++)
                {
                    if(j == 1 || j == iCol)
                    {
                        cout<<"$\t";
                    }
                    else
                    {
                        cout<<"*\t";
                    }
                }
                cout<<"\n";
            }

        }
};

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    Pattern *ptr = NULL;

    cout<<"Enter the row size : \n";
    cin>>iNo1;

    cout<<"Enter the column size : \n";
    cin>>iNo2;

    ptr = new Pattern(iNo1,iNo2);
    ptr->DisplayPattern();
    
    return 0;
}