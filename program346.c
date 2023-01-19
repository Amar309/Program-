#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleRange(UINT No, UINT Start, UINT End)
{
  UINT Mask1 = 0XFFFFFFFF;
  UINT Mask2 = 0XFFFFFFFF;
  UINT Result = 0;

  Mask1 = Mask1 << (Start - 1);
  Mask2 = Mask2 >> (32 -End);
  Mask2 = Mask1 & Mask2;

  Result = No ^ Mask2;
  return Result;  



}

int main()
{
  UINT Value = 0;
  UINT i = 0, j = 0;
  UINT Ret = 0;

  printf("Please enter number : \n");
  scanf("%d",&Value);

  printf("Enter Starting bit position\n");
  scanf("%d",&i);

  printf("Enter Ending bit position\n");
  scanf("%d",&j);

  Ret = ToggleRange(Value,i,j);
  printf("Updated number is : %d\n",Ret);
  
  return 0;
}