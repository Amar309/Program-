#include<stdio.h>
using namespace std;

#pragma pack(1)
struct node
{
  int data;
  struct node *next;


};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE First, PPNODE Last, int no)
{ 
  PNODE newn = (PNODE)malloc(sizeof(NODE));

  newn->data = no;
  newn->next = NULL;

  if((*First == NULL) && (*Last == NULL))  //Empty
  {
    *First = *Last = newn;
  }
  else   //LL contains atleat one node
  {

  }  

}

void Display(PNODE First, PNODE Last)
{


}

void DeleteFirst(PPNODE First, PPNODE Last)
{
  if((*First == NULL) && (*Last == NULL))    //Empty LL
  {
    return;
  }
  else if(*First == *Last)    //Single node in LL
  {
     free(*First);
     *First = NULL;
     *Last = NULL;

  }
  else   //If LL contains more than 1 node
  {
    *First = (*First)->next;
     free((*Last)->next);
     (*Last)->next = *First;

  }

}


void DeleteLast(PPNODE First, PPNODE Last)
{
  PNODE temp = *First;


  if((*First == NULL) && (*Last == NULL))    //Empty LL
  {
    return;
  }
  else if(*First == *Last)    //Single node in LL
  {
    free(*First);
    *First = NULL;
    *Last = NULL;
  

  }
  else   //If LL contains more than 1 node
  {
     while(temp->next != (*Last))
     {
       temp = temp->next;
     }
     
     free(temp->next);
     *Last = temp;
     (*Last)->next = *First;
  
  }


int main()
{
  PNODE Head = NULL;
  PNODE Tail = NULL;

  InsertFirst(&Head, &Tail, 51);
  
  InsertFirst(&Head, &Tail, 21);
  
  InsertFirst(&Head, &Tail, 11);

  Display(Head,Tail);

   InsertLast(&Head, &Tail, 51);
  
  InsertLast(&Head, &Tail, 21);
  
  InsertLast(&Head, &Tail, 11);

  Display(Head,Tail);



  return 0;
]