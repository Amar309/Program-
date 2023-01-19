#include<iostream>
using namespace std;

//problems on N numbers

class ArrayX
{
  public:
     int * Arr[];
     int iSize;

     ArrayX(int i)
     {
       iSize = i;
       Arr = new int[iSize];
     }

     ~ArrayX()
     {
        delete []Arr;
     }

     void Accept()
     {
        cout<<"please enter the numbers : "<<"\n";
        int iCnt = 0;

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
           cin>>Arr[iCnt];
        }
     } 

     
     void Display()
     {
        cout<<"Elements of array are : "<<"\n";
        int iCnt = 0;

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
           cin>>Arr[iCnt]<<"\t";
        }
        cout<<"\n";
     } 

     int SumEven()
     {
       int isum = 0;
       int iCnt = 0;

       for(iCnt = 1; iCnt < iSize; iCnt++)
       {
          if((Arr[iCnt] % 2) == 0)
          {
             iSum = iSum + Arr[iCnt]
          }   
       }  
       return iSum;

     int SumOdd()
     {
       int isum = 0;
       int iCnt = 0;

       for(iCnt = 1; iCnt < iSize; iCnt++)
       {
          if((Arr[iCnt] % 2) == 0)
          {
             iSum = iSum + Arr[iCnt]
          }   
       }  
       return iSum;
     
     


};

int main()
{
  int iLength = 0;

  cout<<"Enter the number of elements : "<<"\n";
  cin>>iLength;

  ArrayX obj(iLength);

  obj.Accept();
  obj.Display();

  iRet = obj.SumEven();
  cout
  
	
  return 0;
}