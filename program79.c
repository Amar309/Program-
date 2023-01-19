#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

 bool CheckOccurance(int Arr[],int iSize, int iNo)
{
  int iCnt = 0,iFrequency = 0;

  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
     if(Arr[iCnt]  == iNo)
     {
       iFrequency++;
     } 
  }
  if(iFrequency == 0)
  {
     return false;
  }
  else
  {
     return true;
  }     

}

int main()
{
 int *ptr = NULL;
 int iLength = 0, i = 0, iValue = 0, ibet = 0;
 

 printf("Enter the number of elements : \n");
 scanf("%d",&iLength);

 ptr = (int *)malloc(iLength * sizeof(int));

 printf("Please enter the element : \n");
 for(i = 0; i < iLength; i++)
 {
   scanf("%d",&ptr[i]);
 } 

 printf("Enter the element to findout the frequency : \n");
 scanf("%d",&iValue);

 bRet = CheckOccurance(ptr,iLength,iValue);
 if(bRet == true)
 {
    printf("%d is occured in the array\n",iValue);
 }
 else
 {
    printf("There is no %d in the array\n",iValue);
 } 
 

 free(ptr);


 return 0;
}