#include<iostream>
using namespace std;

//Input : 7985674
//Output : Maximum 

class DigitX
{
  public:
     int iNo;
  
     DigitX()
     {

     }
     DigitX(int i)
     {
        iNo = i;
     }

     void MaxFrequency()
     {
       int iTemp = iNo;
       int iDigit = 0;
       int Frequency[10] = {0};

       while(iTemp != 0)
       {
          iDigit = iTemp % 10;
          Frequency[iDigit]++; 
          iTemp = iTemp / 10;
       } 
 
       int iMaxFrequency = 0;
       int iMaxDigit = 0;

       for(int iCnt = 0; iCnt < 10; iCnt++)
       {
         if(Frequency[iCnt] > iMaxFrequency)
         {
            iMaxFrequency = Frequency[iCnt];
            iMaxDigit = iCnt;
         }
       }  
       cout<<"Maximum times occured digit is " 

     }
 
};

int main()
{
  int iValue = 0;
  int iRet = 0;

  cout<<"Enter number : "<<"\n";
  cin>>iValue;

  DigitX obj(iValue);

  obj.MaxFrequency(); 

  return 0;
}
