#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int * Arr;
        int iSize;

        ArrayX(int i)
        {
            cout<<"Allocating the memory for resources..."<<"\n";            
            iSize = i;
            Arr = new int[iSize];   // Arr = (int *)malloc(iSize * sizeof(int));
        }

        ~ArrayX()
        {
            cout<<"Deallocating the memory of resources..."<<"\n";
            
            delete []Arr;   // free(Arr);
        }

        void Accept()
        {
            cout<<"Enter the elements of array : "<<"\n";

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];    // scanf("%d",&Arr[iCnt]);
            }
        }

        void Display()
        {
            cout<<"Elements of array are : "<<"\n";

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";    // printf("%d",Arr[iCnt]);
            }
            cout<<"\n";
        }

        
};

class MarvellousLB : public ArrayX
{
    public:

        MarvellousLB(int i) : ArrayX(i)
        { }

        int CountFrequency(int iNo)
        {
            int iCnt = 0, iFrequency = 0;
            for(iCnt = 0; iCnt < iSize; iCnt ++)
            {
                if(Arr[iCnt] == iNo)
                {
                    iFrequency++;
                }   
            }      
            return iFrequency;
        
        }
};

int main()
{
    int iLength = 0;
    int iRet = 0;
    int iValue = 0;

    cout<<"Enter the size of array : "<<"\n";
    cin>>iLength;

    cout<<"Enter the No. u want to find : "<<"\n";
    cin>>iValue;

    MarvellousLB * ptr = new MarvellousLB(iLength);

    ptr->Accept();
    ptr->Display();



    iRet = ptr->CountFrequency(iValue);
    cout<<"Frequency of "<<iValue<<" is "<<iRet<<"\n";

    delete ptr;
    
    return 0;
}