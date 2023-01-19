#include<stdio.h>

void struperx(char *str)
{
  while(*str != '\0')
  {
    if((*str >= 'a') && (*str <= 'z'))
    {
      *str = *str - 32;

    }

    str++;
  }


}






int main()
{
 char Arr[20];
 

 printf("Enter the string\n");
 scanf("%[^'\n']s",Arr);

 struperx(Arr);

 printf("String after conversion is : %s\n",Arr);

 return 0;
}