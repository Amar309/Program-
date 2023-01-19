#include<iostream>
using namespace std;

//Doubly Linear Linked List with OOP

template<class T>
struct node
{
  T data;
  struct node *next;
  struct node *prev;  //X

};

template<class T>
class DoublyLL
{
  public:

    //Characteristics
    struct node<T> * First;
    int iCount;

    //Behaviours
    DoublyLL();

    void InsertFirst(T no);
    void InsertLast(T no);
    void InsertAtPosition(T no, T ipos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPosition(T ipos);

    void Display();
};

/*
Return_Value Class_Name :: Function_Name(Parameters)
{

}
*/

template<class T>
DoublyLL<T> :: DoublyLL()
{
  First = NULL;
  iCount = 0;

}

template<class T>
void DoublyLL<T> :: InsertFirst(T no)
{
  struct node<T> * newn = new node<T>;

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

template<class T>
void DoublyLL<T> :: InsertLast(T no)
{
  
  struct node<T> * newn = new node<T>;
  struct node<T> * temp = First;

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

template<class T>
void DoublyLL<T> :: InsertAtPosition(T no, T ipos)
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
     struct node<T> * newn = new node<T>;

     newn->data = no;
     newn->next = NULL;
     newn->prev = NULL;     //X

     struct node<T> * temp = First;

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

template<class T>
void DoublyLL<T> :: DeleteFirst()
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

template<class T>
void DoublyLL<T> :: DeleteLast()
{
  struct node<T> * temp = First;

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

template<class T>
void DoublyLL<T> :: DeleteAtPosition(T ipos)
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
     struct node<T> * temp1 = First;

     for(int iCnt = 1; iCnt < ipos-1; iCnt++)
     {
        temp1 = temp1 -> next;
     }
     struct node<T> * temp2 = temp1->next;

     temp1->next = temp2->next; 
     temp2->next->prev = temp1;   //X
     free(temp2);
  }
  iCount--;
}

template<class T>
void DoublyLL<T> :: Display()
{
  cout<<"Elements of Linked List are : "<<"\n";
  struct node<T> * temp = First;

  while(temp != NULL)
  {
     cout<<"| "<<temp->data<<"|->";
     temp = temp->next;
  }
  cout<<"NULL"<<"\n";

}

int main()
{
  DoublyLL <int>iobj;
  iobj.InsertFirst(21);
  iobj.InsertFirst(11);

  iobj.InsertLast(101);
  iobj.InsertLast(121);  
  iobj.Display();
  cout<<"Number of nodes are : "<<iobj.iCount<<"\n";

  iobj.InsertAtPosition(105,2);
  iobj.Display();
  cout<<"NUmber of nodes are : "<<iobj.iCount<<"\n";

  iobj.DeleteAtPosition(2);
  iobj.Display();
  cout<<"Number of nodes are : "<<iobj.iCount<<"\n";

  iobj.DeleteFirst();
  iobj.DeleteLast();

  iobj.Display();
  cout<<"Number of nodes are : "<<iobj.iCount<<"\n";  



  DoublyLL <char>cobj;
  cobj.InsertFirst('b');
  cobj.InsertFirst('a');

  cobj.InsertLast('c');
  cobj.InsertLast('d');  
  cobj.Display();
  cout<<"Number of nodes are : "<<cobj.iCount<<"\n";

  cobj.InsertAtPosition('e',2);
  cobj.Display();
  cout<<"NUmber of nodes are : "<<cobj.iCount<<"\n";

  cobj.DeleteAtPosition(2);
  cobj.Display();
  cout<<"Number of nodes are : "<<cobj.iCount<<"\n";

  cobj.DeleteFirst();
  cobj.DeleteLast();

  cobj.Display();
  cout<<"Number of nodes are : "<<cobj.iCount<<"\n";  


   
  DoublyLL <float>fobj;
  fobj.InsertFirst(21.23f);
  fobj.InsertFirst(11.23f);

  fobj.InsertLast(101.23f);
  fobj.InsertLast(121.23f);  
  fobj.Display();
  cout<<"Number of nodes are : "<<fobj.iCount<<"\n";

  fobj.InsertAtPosition(105.23f,2);
  fobj.Display();
  cout<<"NUmber of nodes are : "<<fobj.iCount<<"\n";

  fobj.DeleteAtPosition(2);
  fobj.Display();
  cout<<"Number of nodes are : "<<fobj.iCount<<"\n";

  fobj.DeleteFirst();
  fobj.DeleteLast();

  iobj.Display();
  cout<<"Number of nodes are : "<<fobj.iCount<<"\n";  


  DoublyLL <double>dobj;
  dobj.InsertFirst(21.234);
  dobj.InsertFirst(11.234);

  dobj.InsertLast(101.234);
  dobj.InsertLast(121.234);  
  dobj.Display();
  cout<<"Number of nodes are : "<<dobj.iCount<<"\n";

  dobj.InsertAtPosition(105.234,2);
  dobj.Display();
  cout<<"NUmber of nodes are : "<<dobj.iCount<<"\n";

  dobj.DeleteAtPosition(2);
  dobj.Display();
  cout<<"Number of nodes are : "<<dobj.iCount<<"\n";

  dobj.DeleteFirst();
  dobj.DeleteLast();

  dobj.Display();
  cout<<"Number of nodes are : "<<dobj.iCount<<"\n";  



  return 0;
}






 