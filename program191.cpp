#include<iostream>
using namespace std;

//problems on numbers

class Numbers
{
  public:
    int iNo;

    Numbers(int i)      //parametrised 
    {
      iNo = i;
    }

    void Factorial()
    {
      int iFact = 1;
      int iCnt = 0;

      for(iCnt = 1; iCnt <= iNo; iCnt++)
      {
        iFact = iFact * iCnt;
      }
      return iFact; 

    }


};

int main()
{
  int iValue = 0, iRet = 0;
 
  cout<<"Enter number : \n";
  cin>>iValue;

  Numbers obj(iValue);

  iRet = obj.Factorial();

  cout<<"Factorial is : "<<iRet;
  
	
  return 0;
}