#include<iostream>
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

class SinglyLL
{
  public:
    //Characteristics
    PNODE First;
    int iCount;
  
    //Behaviours
    SinglyLL();
    voidInsertFirst(int);
    voidInsertLast(int);
    voidInsertAtPosition(int,int);

    voidDeleteFirst();
    voidDeleteLast();
    voidDeleteAtPosition(int);

    void Display();
  
};

Return_Value Class_Name :: Function_Name(Parameters)
{



}

SinglyLL :: SinglyLL()
{
  First = Null;
  iCount = 0;
}

void SinglyLL :: InsertFirst(int no)
{
  PNODE newn = new NODE;  //step1 : Allocate memory for node

  newn->data = no;
  newn->next = NULL;
  //step3 : check if LL is Empty or Not 
  if(First == NULL)   //if(count == 0)
  {
     First = newn;
     iCount++;
  }
  else      //LL contains atleast one node
  {

  } 
}

void SinglyLL :: InsertLast(int no)
{
   PNODE newn = new NODE;  //step1 : Allocate memory for node

  //step2 : Ini 
  newn->data = no;
  newn->next = NULL;

  //step3 : check if LL is empty or not 
  if(First == NULL)   //if(count == 0)
  {
     First = newn;
     iCount++;
  }
  else      //LL contains atleast one node
  {
    PNODE temp = First;

    while(temp->next != NULL)
    {
       temp = temp -> NULL;
    }
    temp->next = newn;

  } 


}

void SinglyLL :: InsertAtPosition(int,int ipos)
{
  if((ipos < 1) || (ipos > iCount+1))
  {
    cout<<"Invalid position"<<"\n";
    return;
  }
  if(ipos == 1)
  {
    DeleteFirst();

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

    PNODE temp = First;
    for(int iCnt = 1; iCnt < ipos-1; iCnt++)
    {
      temp = temp->next;
    }
    newn->next = temp->next;
    temp->next = newn;

    iCount++;
  } 


}

void SinglyLL :: DeleteFirst()
{
  if(First == NULL)
  {
    return;
  }
  else if(First -> next == NULL)
  {
    delete First;
    First = NULL;
    iCount--;

  } 
  else
  {
    PNODE temp = First;
    First = First -> next;
    delete temp;
    iCount--;

  } 
}

void SinglyLL :: DeleteLast()
{
  if(First == NULL)
  {

  }
  else if(First -> next == NULL)
  {
    delete First;
    First = NULL;
    iCount--;

  } 
  else
  {
    PNODE temp = First;

    while(temp->next->next != NULL)
    {
      temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;
   
    iCount--;
  } 
}

void SinglyLL :: DeleteAtPosition(int ipos)
{
  if((ipos < 1) || (ipos > iCount+1))
  {
    cout<<"Invalid position"<<"\n";
    return;
  }
  if(ipos == 1)
  {
    DeleteFirst();

  }
  else if(ipos == iCount+1)
  {
    InsertLast(no);
  }
  else
  {

  } 

}

void SinglyLL :: Display()
{
  cout<<"Elements of Linked List are : "<<"\n";
  PNODE temp = First;

  while(temp != Null)
  {
     cout<<"| "<<temp->data<<"|->";
     temp = temp->next;
  }
  cout<<"NULL"<<"\n";


} 

int main()
{
  SinglyLL obj1;
  
  cout<<sizeof(obj1)<<"\n";
  cout<<"First pointer contains : "<<obj1.First<<"\n";
  cout<<"Number of nodes are : "<<obj1.iCount<<"\n";

  cout<<"Number of nodes are : "<<obj1.iCount<<"\n";

  obj1.InsertLast(101);
  obj1.InsertLast(111);
  obj1.InsertLast(121);

  obj1.Display();

  cout<<"Number of nodes are : "<<obj1.iCount<<"\n";

  obj1.InsertLast(101);
  obj1.InsertLast(111);
  obj1.InsertLast(121);
  obj1.Display();
  cout<<""
  return 0;
}
