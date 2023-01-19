#include<stdio.h>

// 4

// 4 + 3 + 2 + 1 = 10

void FactorsI(int No)
{
  int iCnt = 1;

  for(iCnt = 1; iCnt <= (No/2); iCnt++)
  {
     if((No % iCnt) == 0)
     {
        printf("%d\n",iCnt);
     }
  }  


}


int main()
{
  int Value = 0;

  printf("Enter the number\n");
  scanf("%d",&Value);

  FactorsI(Value);

  return 0;
}