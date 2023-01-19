#include<stdio.h>

// 4

// 4 + 3 + 2 + 1 = 10

int SumFactorsR(int No)
{
  static int iCnt = 1;
  static int iSum = 0;

  if(iCnt <= (No/2))
  {
     if((No % iCnt) == 0)
     {
        iSum = iSum + iCnt;
     }
     iCnt++;
     FactorsR(No);
  }  
  return iSum;

}


int main()
{
  int Value = 0;

  printf("Enter the number\n");
  scanf("%d",&Value);

  Ret = SumFactorsR(Value);
  printf("Summation of factors : \n",Value);

  return 0;
}