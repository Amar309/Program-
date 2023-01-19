
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No, UINT pos)
{
  UINT iMask = 0X00000001;    //UINT iMask = 1;
  UINT Result = 0;

  if((pos < 1) || (pos >32))     //Filter
  {
     printf("Invalid position,it should between 1 to 32\n");
     return false;
  }
  
  iMask = iMask << (pos -1);   //Dynamic Mask Formation

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
  UINT position = 0;
  bool bRet = false;

  printf("Enter number : \n");
  scanf("%d",&Value); 

  printf("Enter the position of bit\n");
  scanf("%d",&position);

  bRet = CheckBit(Value,position);

  if(bRet == true)
  {
    printf("Bit is position %d is ON\n",position);
  }
  else
  {
    printf("Bit is position %d is OFF\n",position);
  } 

  return 0;
}

