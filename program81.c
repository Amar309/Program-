#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

 int CheckOccurance(int Arr[],int iSize, int iNo)
{
  int iCnt = 0;

  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
     if(Arr[iCnt]  == iNo)
     {
       break;
     } 
  }
  if(iCnt == iSize)
  {
     return -1;
  }
  else
  {
     return iCnt;
  }     

}

int main()
{
 int *ptr = NULL;
 int iLength = 0, i = 0, iValue = 0, iRet = 0;
 

 printf("Enter the number of elements : \n");
 scanf("%d",&iLength);

 ptr = (int *)malloc(iLength * sizeof(int));

 printf("Please enter the element : \n");
 for(i = 0; i < iLength; i++)
 {
   scanf("%d",&ptr[i]);
 } 

 printf("Enter the element to findout the occurance : \n");
 scanf("%d",&iValue);

 iRet = CheckOccurance(ptr,iLength,iValue);
 if(iRet == -1)
 {
    printf("There is no %d in the array\n",iValue);
 }
 else
 {
    printf(" %d is occurance  in the array at index %d\n",iValue,iRet);
 } 
 

 free(ptr);


 return 0;
}