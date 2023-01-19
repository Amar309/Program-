//4

//A  B  C  D 


#include<stdio.h>
//ASCII
//American Standard Code Information Interchange


void Display(int iNo)  //2N
{
  
  int iCnt = 0;
  char ch = 'A';
 
  if(iNo < 0)
  {
    iNo = -iNo;
  }

  for(iCnt = 1; iCnt <= iNo; iCnt++,ch++)
  {
    printf("%c\t",ch);  //Dynamic
    ch++;

  }
  

}


int main()
{
 int iValue = 0;

 printf("Enter number\n");
 scanf("%d",&iValue);

 Display(iValue);

 return 0;
}