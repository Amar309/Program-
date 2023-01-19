#include<stdio.h>

void strcpyS(char *src, char *dest)
{
  while(*src != '\0')
  {
     if((*src >= 'A') && (*src <= 'Z'))
     {
       *dest = *src + 32;
     }
     else
     {
       *dest = *src;
     }

     src++;
     dest++;
  }
  *dest = '\0'; 

}






int main()
{
 char Arr[20];
 char Brr[20]; 
 

 printf("Enter the string\n");
 scanf("%[^'\n']s",Arr);

 strcpyS(Arr, Brr);   // strcpyX(100,200);
  
 printf("Copied string is : %s\n",Brr);

 return 0;
}