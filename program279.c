#include<stdio.h>
#include<stdlib.h>

//Singly Linear Linked List

#pragma pack(1)
struct node
{
  int data;
  struct node *next; 

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void InsertLast(PPNODE First, int no)
{
  PNODE newn = (PNODE)malloc(sizeof(NODE));  // 1 Allocate memory
  PNODE temp = *First;
  newn->data = no;
  newn->next = NULL;

  if(*First == NULL) // If linked list is empty
  {
    *First = newn;
  }
  else              //If linked list contains atleast one node
  {
     while(temp->next != NULL)
     {
        temp = temp -> next;
     }
     temp -> next = newn;

  }
}

void Display(PNODE First)
{
  printf("Elements from the Linked List are : \n");

  while(First != NULL)
  {
    printf("| %d |-> ",First->data);
    First = First -> next;
  }
  printf("NULL \n");
}

int Maximum(PNODE First)
{
  int iMax = 0;

  iMax = First->data;

  while(First != NULL)
  {
    if(First->data > iMax)
    {
       iMax = First->data;
    }
    First = First->next;
  }
  return iMax;  

}


int main()
{
  PNODE Head = NULL;
  int iRet = 0;

  InsertLast(&Head,11);
  InsertLast(&Head,21);
  InsertLast(&Head,51);


  InsertLast(&Head,101);
  InsertLast(&Head,111);
  InsertLast(&Head,121);

  Display(Head);

  iRet = Maximum(Head);
  printf("Largest number  is : %d\n",iRet);


  return 0;
} 