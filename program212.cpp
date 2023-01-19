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

    SinglyLL();     //behaviours

    void InsertFirst(int no);
    void InsertLast(int no);
    void InsertAtPos(int no, int ipos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int ipos);

    void Display();
    int Count();
};

int main()
{
  SinglyLL obj;

  return 0;
}
