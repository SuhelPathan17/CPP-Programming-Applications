#include<iostream>
using namespace std;

void Display()
{
    int iCnt = 0;

    iCnt = 1;       // 1
    while(iCnt <= 5)    // 2
    {
        cout<<"Jay Ganesh...\n";  // 4
        iCnt++;     // 3
    }
}

int main()
{
    Display();

    return 0;
}