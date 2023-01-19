


#include<stdio.h>

void Display(int iValue)
{
  int iCnt = 0;

  iCnt = 1;  //1
  while(iCnt <= iValue)  //2
  {
     printf("Jay Ganesh...\n");  //4
     iCnt++;    //3
  }

  
}

int main() 
{
  int iNo = 0;

  printf("Enter no of iteration : ..\n");
  scanf("%d",&iNo);

  Display(iNo);

  return 0;
}
