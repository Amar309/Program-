#include<iostream>
using namespace std;

//Doubly Linear Linked List with OOP

#pragma pack(1)
struct node
{
  int data;
  struct node *next;
  struct node *prev;  //X

};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

class DoublyLL
{
  public:

    //Characteristics
    PNODE First;
    int iCount;

    //Behaviours
    DoublyLL();

    void InsertFirst(int no);
    void InsertLast(int no);
    void InsertAtPosition(int no, int ipos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPosition(int ipos);

    void Display();
};

/*
Return_Value Class_Name :: Function_Name(Parameters)
{

}
*/

DoublyLL :: DoublyLL()
{
  First = NULL;
  iCount = 0;

}

void DoublyLL :: InsertFirst(int no)
{
  PNODE newn = new NODE;

  newn->data = no;
  newn->next = NULL;
  newn->prev = NULL;

  if(First == NULL)
  {
    First = newn;
    iCount++;
  }
  else
  {
    newn->next = First;
    (First)->prev = newn;  //X

    First = newn;
    iCount++;
  }
  

}

void DoublyLL :: InsertLast(int no)
{
  
  PNODE newn = new NODE;
  PNODE temp = First;

  newn->data = no;
  newn->next = NULL;
  newn->prev = NULL;   //X

  if(First == NULL)
  {
    First = newn;
    iCount++;
  }
  else
  {
    while(temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = newn;
    newn->prev = temp;   //X
    iCount++;

  }

}

void DoublyLL :: InsertAtPosition(int no, int ipos)
{
  

  if((ipos < 1) || (ipos > (iCount + 1)))
  {
    printf("Invalid Position\n");
    return;
  }

  if(ipos == 1)
  {
     InsertFirst(no);
  }
  else if(ipos == iCount+1)
  {
     InsertLast(no);
  }
  else
  {
     PNODE newn = new NODE;

     newn->data = no;
     newn->next = NULL;
     newn->prev = NULL;     //X

     PNODE temp = First;

     for(int iCnt = 1; iCnt < ipos-1; iCnt++)
     {
        temp = temp -> next;
     }

     newn->next = temp -> next;
     temp->next->prev = newn;    //X
     temp->next = newn;
     newn->prev = temp;    //X

     iCount++;
   }

}

void DoublyLL :: DeleteFirst()
{
  if(First == NULL)    //LL is empty
  {
    return;
  }
  else if((First)->next == NULL)   //LL contains 1 node
  {
    free(First);
    First = NULL;
  }
  else        //LL contains more than 1 node
  {
    First = (First)->next;
     free((First)->prev);    //X

     (First)->prev = NULL;    //X
  }  
  iCount--;

}

void DoublyLL :: DeleteLast()
{
  PNODE temp = First;

  if(First == NULL)    //LL is empty
  {
    return;
  }
  else if((First)->next == NULL)   //LL contains 1 node
  {
    free(First);
    First = NULL;
  }
  else        //LL contains more than 1 node
  {
    while(temp->next->next != NULL)
    {
       temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
  }  
  iCount--;
}

void DoublyLL :: DeleteAtPosition(int ipos)
{


  if((ipos < 1) || (ipos > iCount))
  {
    printf("Invalid Position\n");
    return;
  }

  if(ipos == 1)
  {
     DeleteFirst();
  }
  else if(ipos == iCount)
  {
     DeleteLast();
  }
  else
  {
     PNODE temp1 = First;

     for(int iCnt = 1; iCnt < ipos-1; iCnt++)
     {
        temp1 = temp1 -> next;
     }
     PNODE temp2 = temp1->next;

     temp1->next = temp2->next; 
     temp2->next->prev = temp1;   //X
     free(temp2);
  }
  iCount--;
}

void DoublyLL :: Display()
{
  cout<<"Elements of Linked List are : "<<"\n";
  PNODE temp = First;

  while(temp != NULL)
  {
     cout<<"| "<<temp->data<<"|->";
     temp = temp->next;
  }
  cout<<"NULL"<<"\n";

}

int main()
{
  DoublyLL obj;

  obj.InsertFirst(51);
  obj.InsertFirst(21);
  obj.InsertFirst(11);

  obj.Display();
  cout<<"Number of nodes in first linkedlist are : "<<obj.iCount<<"\n";

  obj.InsertLast(101);
  obj.InsertLast(111);
  obj.InsertLast(121);

  obj.Display();
  cout<<"Number of nodes in first linkedlist are : "<<obj.iCount<<"\n";
 
  obj.InsertAtPosition(105,5);
  obj.Display();
  cout<<"Number of nodes in first linkedlist are : "<<obj.iCount<<"\n";

  obj.DeleteAtPosition(5);
  obj.Display();
  cout<<"Number of nodes in first linkedlist are : "<<obj.iCount<<"\n";

  obj.DeleteFirst();
  obj.DeleteLast();

  obj.Display();
  cout<<"Number of nodes in first linkedlist are : "<<obj.iCount<<"\n";

  return 0;
}






 