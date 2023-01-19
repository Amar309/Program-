#include<stdio.h>

void DisplayEvenOddDigits(int iNo)
{
 int iEvenCnt = 0,iOddCnt = 0;	
 int iDigit = 0;
 
 if(iNo == 0)
 {
  printf("number of even digits are : 1\n");
  printf("number of odd digits are : 0\n");

  return;
 }  


 if(iNo < 0)
 {
  iNo = -iNo;
 }

 while(iNo != 0)
 {
  iDigit = iNo % 10;
  if((iDigit % 2) == 0)
  {
    iEvenCnt++;
  } 
  else
  {
    iOddCnt++;
  }
  iNo = iNo / 10;
 }
 printf("number of even digits are : %d\n",iEvenCnt);
 printf("number of odd digits are : %d\n",iOddCnt);
}

int main()
{
 int iValue = 0;
 
 printf("Please enter number : \n");
 scanf("%d",&iValue);

  DisplayEvenOddDigits(iValue);

 return 0;
}