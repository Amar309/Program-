#include<iostream>
using namespace std;

//Singly Linear Linked 	List With OOP

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

    PNODE First;    //characteristics
    int iCount;     //characteristics


    //behaviours
    SinglyLL();   

    void InsertFirst(int no);
    void InsertLast(int no);
    void InsertAtPosition(int no, int ipos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPosition(int ipos);

    void Display();
    
};

SinglyLL :: SinglyLL()
{
   First = NULL;
   iCount = 0;
}

void SinglyLL :: InsertFirst(int no)
{}

void SinglyLL :: InsertLast(int no)
{}

void SinglyLL :: InsertAtPosition(int no, int ipos)
{}

void SinglyLL :: DeleteFirst()
{}

void SinglyLL :: DeleteLast()
{}

void SinglyLL :: DeleteAtPosition(int ipos)
{}

void SinglyLL :: Display()
{}

int main()
{
  SinglyLL obj1;

  cout<<sizeof(obj1)<<"\n";

  cout<<"First Pointer Contains :"<<obj1.First<<"\n";

  cout<<"Number of nodes are :"<<obj1.iCount<<"\n";

  return 0;
}
