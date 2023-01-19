#include<stdio.h>
#include<stdlib.h>

 void CountEvenOdd(int Arr[],int iSize)
{
  int iEvenCnt = 0, iCnt = 0,iOddCnt = 0;

  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    if((Arr[iCnt] % 2) == 0) 
    {
       iEvenCnt++;
    }  
    
  } 
  printf("number of even elements are : %d\n",iEvenCnt);
  printf("number of odd number are : %d\n",iSize - iEvenCnt);

}

int main()
{
 int *ptr = NULL;
 int iLength = 0, i = 0;

 printf("Enter the number of elements : \n");
 scanf("%d",&iLength);

 ptr = (int *)malloc(iLength * sizeof(int));

 printf("Please enter the element : ");
 for(i = 0; i < iLength; i++)
 {
   scanf("%d",&ptr[i]);
 } 

 CountEvenOdd(ptr, iLength);
 
 

 free(ptr);


 return 0;
}