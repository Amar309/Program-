#include<stdio.h>

void strlwrx(char *str)
{
  while(*str != '\0')
  {
    if((*str >= 'A') && (*str <= 'Z'))
    {
      *str = *str + 32;

    }

    str++;
  }


}






int main()
{
 char Arr[20];
 

 printf("Enter the string\n");
 scanf("%[^'\n']s",Arr);

 strlwrx(Arr);

 printf("String after conversion is : %s\n",Arr);

 return 0;
}