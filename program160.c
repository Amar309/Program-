#include<stdio.h>

void strcpyToogle(char *src, char *dest)
{
  while(*src != '\0')
  {
     if((*src >= 'A') && (*src <= 'Z'))
     {
       *dest = *src + 32;
     }
     else if((*src >= 'a') && (*src <= 'z'))
     {
       *dest = *src - 32;
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

 strcpyToogle(Arr, Brr);   // strcpyX(100,200);
  
 printf("Original string is : %s\n",Arr);
 printf("Copied string is : %s\n",Brr);

 return 0;
}