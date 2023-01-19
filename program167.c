#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
  int data;
  struct node *next;

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PNODE First,int No)
{
  PNODE newn = (PNODE)malloc(sizeof(NODE));

  newn->data = No;
  newn->next = NULL;

  if(*First = NULL)
  {
    *First = newn;
  }
  else
  {
    newn->next = *First;
    *First = newn;

}
void InsertFirst(PPNODE First, int No)
{
 

}

int main()
{
 
 PNODE Head = NULL;
 
 InsertFirst(&Head,51);
 InsertFirst(&Head,21);
 InsertFirst(&Head,11);

 Display(Head);

 return 0;
}