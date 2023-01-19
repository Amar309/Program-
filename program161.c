#include<stdio.h>

void StrRevX(char *str)
{
  char *start = str;
  char *end = str;
  char temp = '\0';

  while(*end != '\0')
  {
    end++;
  }  
  end--;

  while(start < end)
  {
    temp = *start;
    *start = *end;
    *end = temp;

    start++;
    end--;
  }

}






int main()
{
 char Arr[20]; 

 printf("Enter the string\n");
 scanf("%[^'\n']s",Arr);

 StrRevX(Arr);

 printf("Reverse string is : %s\n",Arr);
 

 return 0;
}