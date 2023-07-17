#include<iostream>
using namespace std;

class Pattern
{
    public:
        int iRow;
        int iCol;

        Pattern(int m, int n)
        {
            iRow = m;
            iCol = n;
        }

        void DisplayPattern()
        {
            int i = 0;
            int j = 0;
            for(i=1; i<=iRow; i++)
            {
                for(j=1; j<=iCol; j++)
                {
                    printf("*\t");
                }
                printf("\n");
            }
        }
};

int main()
{
    int iRow = 0;
    int iCol = 0;

    cout<<"Enter no. of rows \n";
    cin>>iRow;
    cout<<"Enter no. of columns \n";
    cin>>iCol;

    Pattern *obj = new Pattern(iRow, iCol);
    obj->DisplayPattern();

    return 0;
}