#include<stdio.h>

int strlenx(char *str)
{
 int iCnt = 0;

 while(*str != '\0')
 {
   iCnt++;
   str++;
 }
 return iCnt; 

}

int main()
{
 char Arr[20];  //static
 int iRet = 0;

 printf("Enter the string\n");
 scanf("%[^'\n']s",Arr);

 iRet = strlenx(Arr);

 printf("Number of character are %d\n",iRet);


 return 0;
}