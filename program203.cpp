#include<iostream>
using namespace std;

class ArrayX
{
  public:
     int * Arr;
     int iSize;

     ArrayX(int i)
     {
       cout<<"allocating the memory of resourcrs... "<<"\n";
       iSize = i;
       Arr = new int[iSize];    //Arr = ()
     }

     ~ArrayX()
     {
       cout<<"Deallocating the memory of resourcrs... "<<"\n";
       delete []Arr;
     }

     void Accept()
     {
       cout<<"Enter the elements of array : "<<"\n";

       for(int iCnt = 0; iCnt < iSize; iCnt++)
       {
          cin>>Arr[iCnt];

       }
     } 

     void Display()
     {
       cout<<"Enter the elements of array : "<<"\n";

       for(int iCnt = 0; iCnt < iSize; iCnt++)
       {
          cout<<Arr[iCnt]<<"\t";

       }
       cout<<"\n";
     } 

     int Minimum()
     {
       int iMin = Arr[0];

       for(int iCnt = 0; iCnt < iSize; iCnt++)
       {
          if(Arr[iCnt] < iMin)
          {
             iMin = Arr[iCnt];
          }
       }
       return iMin;

   
     }

};

class MarvellousLB : public ArrayX
{
  public:

     MarvellousLB(int i) : ArrayX(i)
     {}

     int Minimum()
     {
       int iMin = Arr[0];

       for(int iCnt = 0; iCnt < iSize; iCnt++)
       {
          if(Arr[iCnt] < iMin)
          {
             iMin = Arr[iCnt];
          }
       }
       return iMin;

   
     }


};

int main()
{
  int iLength = 0;
  int iRet = 0; 

  MarvellousLB * obj = new MarvellousLB(iLength);

  obj->Accept();
  obj->Display();

  iRet = obj->Minimum();

  cout<<"Smallest element is : "<<iRet<<"\n";

  delete obj;
  
  return 0;
}
