#include<stdio.h>
#include<stdbool.h>

int SumDigitsR(int No)
{
  static int iSum = 0;
  int iDigit = 0;

  if(No != 0)
  {
     iDigit = No % 10;
     iSum = iSum + iDigit;
     No = No / 10;
     SumDigitsR(No);
  } 
  return iSum; 
  
}


int main()
{
  int Value = 0;
  int iRet = 0;

  printf("Enter the number\n");
  scanf("%d",&Value);

  iRet = SumDigitsR(Value);
  printf("Summation of digits : %d\n",iRet);

  return 0;
}