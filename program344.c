#include<stdio.h>


typedef unsigned int UINT;

UINT OffBit(UINT No, UINT pos)
{
   UINT iMask = 0X00000001;
   UINT Result = 0;

   iMask = iMask << (pos-1);

   iMask = ~iMask;

   Result = No & iMask;

   return Result;

}

int main()
{
  UINT Value = 0, position = 0;
  int iRet = 0;

  printf("Enter number : \n");
  scanf("%d",&Value);

  printf("Enter the position : \n");
  scanf("%d",&position);

  iRet = OffBit(Value,position);

  printf("Updated number is : %d\n",iRet);  

  return 0;
}