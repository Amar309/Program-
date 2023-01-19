#include<stdio.h>
#include<stdbool.h>

bool CountDigitsI(int No)
{
  int iCnt = 0;

  if(No != 0)
  {
     iCnt++;
     CheckPerfectR(No);
  }  
  if(iSum == No)
  {
     return true;
  }
  else
  {
     return false;
  }

}


int main()
{
  int Value = 0;
  bool bRet = false;

  printf("Enter the number\n");
  scanf("%d",&Value);

  bRet = CheckPerfectR(Value);
  printf("Summation of factors : \n",Value);

  return 0;
}