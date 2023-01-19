#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iSize)
{
  int iEvenCnt = 0, iCnt = 0;

  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    if((Arr[iCnt] % 2) == 0)
    {
       iEvenCnt++;
    }   
  }

  return iEvenCnt;

}

int main()
{
 int *ptr = NULL;
 int iLength = 0, i = 0, iRet = 0;

 printf("Enter the number of elements : \n");
 scanf("%d",&iLength);

 ptr = (int *)malloc(iLength * sizeof(int));

 printf("Please enter the element : ");
 for(i = 0; i < iLength; i++)
 {
   scanf("%d",&ptr[i]);
 } 

 iRet = CountEven(ptr, iLength);
 printf("Even of elements are : %d\n",iRet);
 

 free(ptr);


 return 0;
}