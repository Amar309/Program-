#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No, UINT pos1, UINT pos2)
{
  UINT iMask1 = 0X00000001;    //UINT iMask = 1;
  UINT iMask2 = 0X00000001;

  UINT iMask = 0;

  UINT Result = 0;

  if((pos1 < 1) || (pos1 >32) || (pos2 < 1) || (pos2 > 32))     //Filter
  {
     printf("Invalid position,it should between 1 to 32\n");
     return false;
  }
  
  iMask1 = iMask1 << (pos1 -1);   //Dynamic Mask Formation
  iMask2 = iMask2 << (pos2 - 1);

  iMask = iMask1 | iMask2;

   Result = No & iMask;

   if(Result == iMask)
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
  UINT Value = 0;
  UINT position1 = 0;
  UINT position2 = 0;
  bool bRet = false;

  printf("Enter number : \n");
  scanf("%d",&Value); 

  printf("Enter the position1 of bit\n");
  scanf("%d",&position1);

  printf("Enter the position2 of bit\n");
  scanf("%d",&position2);
  

  bRet = CheckBit(Value,position1,position2);

  if(bRet == true)
  {
    printf("Bit is position %d is ON\n",position1,position2);
  }
  else
  {
    printf("Bit is position %d is OFF\n",position1,position2);
  } 

  return 0;
}