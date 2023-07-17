#include<iostream>
using namespace std;

class ArrayX
{
    protected:
        int *Arr;
        int iLength;

    public:
        ArrayX(int iSize)
        {
            iLength = iSize;
            Arr = new int[iSize];
        }
        ~ArrayX()
        {
            delete []Arr;
        }

        void Accept()
        {
            int iCnt = 0;
            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;
            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }
};

class ArrayDerived : public ArrayX
{
    public: 

        ArrayDerived(int i) : ArrayX(i)
        {

        }
        void Reverse()
        {
            int iStart = 0;
            int iEnd = (this->iLength)-1;
            int iTemp = 0;
            while(iStart < iEnd)
            {
                iTemp = Arr[iStart];
                Arr[iStart] = Arr[iEnd];
                Arr[iEnd] = iTemp;

                iStart++;
                iEnd--;
            }
        }

};
int main()
{
    int iValue = 0;

    cout<<"Enter size of array u wan to create \n";
    cin>>iValue;
    
    ArrayDerived *ptr = new ArrayDerived(iValue);
    ptr->Accept();
    ptr->Display();

    ptr->Reverse();
    ptr->Display();
    
    return 0;
}