#include<stdio.h>

void DisplayFactors(int iValue)
{
  int iCnt = 0;
         //1       //2           //3
  for(iCnt = 1; iCnt < iValue; iCnt++)
  {
    if((iValue % iCnt)  == 0)
    {
      printf("%d\n",iCnt);  //4
    } 
  } 
} 



int main()
{
  int iNo = 0;  

  printf("Enter the number : \n");
  scanf("%d",&iNo);

  DisplayFactors(iNo);

  return 0;
}