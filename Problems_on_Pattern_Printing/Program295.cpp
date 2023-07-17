#include<iostream>
using namespace std;

/*
    Row = 4
    Col = 4

    1   2   3   4
    5   6   7   8
    9   1   2   3
    4   5   6   7
*/

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
            int iCnt = 0;
            for(i=1; i<=iRow; i++)
            {
                for(j=1; j<=iCol; j++)
                {
                    printf("%d\t",(iCnt%9)+1);
                    iCnt++;
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