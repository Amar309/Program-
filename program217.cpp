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

    void InsertFirst(int);
    void InsertLast(int);
    void InsertAtPosition(int,int);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPosition(int);

    void Display();
  
};

/*
Return_Value Class_Name :: Function_Name(Parameters)
{

}
*/

SinglyLL :: SinglyLL()
{
  First = NULL;
  iCount = 0;
}

void SinglyLL :: InsertFirst(int no)
{
  PNODE newn = new NODE;  //step1 : Allocate memory for node

  //step2 : Initialise node

  newn->data = no;
  newn->next = NULL;

  //step3 : check if LL is Empty or Not 

  if(First == NULL)   //if(iCount == 0)
  {
     First = newn;
     iCount++;
  }
  else      //LL contains atleast one node
  {
     newn->next = First;
     First = newn;
     iCount++;

  } 
}

void SinglyLL :: InsertLast(int no)
{
   PNODE newn = new NODE;  //step1 : Allocate memory for node

  //step2 : Initialise node
 
  newn->data = no;
  newn->next = NULL;

  //step3 : check if LL is empty or not
 
  if(First == NULL)   //if(iCount == 0)
  {
     First = newn;
     iCount++;
  }
  else      //LL contains atleast one node
  {
    

  } 


}

void SinglyLL :: InsertAtPosition(int,int ipos)
{}

void SinglyLL :: DeleteFirst()
{}

void SinglyLL :: DeleteLast()
{}

void SinglyLL :: DeleteAtPosition(int ipos)
{}

void SinglyLL :: Display()
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
  SinglyLL obj1;
  SinglyLL obj2;

  obj1.InsertFirst(51);
  obj1.InsertFirst(21);
  obj1.InsertFirst(11);

  cout<<"Linked list of first object is :"<<"\n";

  obj1.Display();
  cout<<"Number of nodes in first linkedlist are : "<<obj1.iCount<<"\n";

  ////////////////////////////////////////////////////////////////////
 
  obj2.InsertFirst(1001);
  obj2.InsertFirst(510);
  obj2.InsertFirst(210);
  obj2.InsertFirst(110);

  cout<<"Linked list of second object is :"<<"\n";

  obj2.Display();
  cout<<"Number of nodes in second linkedlist are :"<<obj2.iCount<<"\n";

  return 0;
}
