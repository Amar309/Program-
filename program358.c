#include<stdio.h>
#include<stdbool.h>

bool CheckPerfectR(int No)
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