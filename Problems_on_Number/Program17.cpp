// Demonstartion of iteration using for loop

#include<iostream>
using namespace std;

void Display(int iValue)
{
    int iCnt = 0;
    //      1          2                3
    for(iCnt = 1;   iCnt <= iValue;  iCnt++)
    {
        cout<<"Jay Ganesh...\n";  // 4
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the number of iterations : \n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}
