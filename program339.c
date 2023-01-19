#include<stdio.h>

// 4

typedef unsigned int UINT;

//  0000 0000 0000 0000 0000 0000 0000 0000

//  0000 0000 0000 0000 0000 0000 0000 1000

//  0X00000008  

UINT ToogleBit(UINT No)
{
   UINT iMask = 0X00000008;
   UINT iAns = 0;

   iAns = No ^ iMask;

   return iAns;

}

int main()
{
  UINT Value = 0;
  UINT iRet = 0;

  printf("Enter number : \n");
  scanf("%d",&Value);

  iRet = ToogleBit(Value);

  printf("Updated number is : %d\n",iRet);  

  return 0;
}


/*

^

//No     0  0  0  0  1  0  1  0

//Mask   0  0  0  0  1  0  0  0

//Result 0  0  0  0  0  0  1  0




//No     0  0  0  0  0  0  1  0

//Mask   0  0  0  0  1  0  0  0

//Result 0  0  0  0  1  0  1  0

*/


 