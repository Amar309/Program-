#include<stdio.h>
#include<stdbool.h>

bool Check(char *str, char ch)
{
  int iCnt = 0;
  bool bFlag = false;

  while(*str != '\0')
  {
    if(*str == ch)
    {
      bFlag = true;
      break;
    }
    str++;
  }
  return bFlag; 

}

int main()
{
 char Arr[20];
 int iRet = 0;
 char cValue = '\0';
 bool bRet = 0;

 printf("please enter string\n");
 scanf("%[^'\n']s",Arr);

 printf("please enter the character\n");
 scanf(" %c",&cValue);

 bRet = Check(Arr,cValue);

 if(bRet == true)
 {
   printf("Character is present in the string\n");
 }
 else
 {
   printf("Character is not present in the string\n");
 }

 return 0;
}