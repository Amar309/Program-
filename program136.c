#include<stdio.h>

int strlenx(char str[])
{
 int iCnt = 0 , i = 0;

 while(str[i] != '\0')
 {
   iCnt++;
   i++;
 }
 return iCnt; 

}

int main()
{
 char Arr[20];  //static
 int iRet = 0;

 printf("Enter the string\n");
 scanf("%[^'\n']s",Arr);

 iRet = strlenx(Arr);  //strlenx(100)

 printf("Number of character are %d\n",iRet);


 return 0;
}