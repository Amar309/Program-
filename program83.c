#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iSize)   //5
{
  int iMin = Arr[0],iCnt = 0;

  for(iCnt = 0; iCnt < iSize ; iCnt++)  //N
  {
    if(Arr[iCnt] < iMin)
    {
       iMin = Arr[iCnt];
    } 
  }
  return iMin;

}

int main()
{
 int *ptr = NULL;
 int iLength = 0, i = 0,iRet = 0;
 int iValue = 0; 

 printf("Enter the number of elements : \n");  //1
 scanf("%d",&iLength);

 ptr = (int *)malloc(iLength * sizeof(int));  //2

 printf("Please enter the element : \n");     //3
 for(i = 0; i < iLength; i++)
 {
   scanf("%d",&ptr[i]);
 } 

 iRet = Minimum(ptr,iLength);      //4    
       
 printf("Minimum number is : %d\n",iRet);
 

 free(ptr);


 return 0;
}