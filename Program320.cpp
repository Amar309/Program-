#include<iostream>
using namespace std;

template<class T>
struct node
{
  T data;
  struct node *next;
};

template<class T>
class SinglyLL
{
  public :
      struct node<T> * First;

      SinglyLL();
      void InsertFirst(T no);
      void InsertLast(T no);
      void InsertAtPosition(T no, T ipos);

      void DeleteFirst();
      void DeleteLast();
      void DeleteAtPosition(T ipos);

      void Display();
      int Count();   
};

template<class T>
SinglyLL<T> :: SinglyLL()
{
  First = NULL;

}

template<class T>
void SinglyLL<T> :: InsertFirst(T no)
{
   struct node<T> * newn = new  node<T>;

   newn->data = no;
   newn->next = NULL;

   if(First == NULL)
   {
      First = newn;
   }
   else
   {
      newn->next = First;
      First = newn;

   } 

}

template<class T>
void SinglyLL<T> :: InsertLast(T no)
{
   struct node<T> * newn = new  node<T>;

   newn->data = no;
   newn->next = NULL;

   if(First == NULL)
   {
      First = newn;
   }
   else
   {
      struct node<T> * temp = First;

      while(temp->next != NULL)
      {
          temp = temp->next;
      }
      temp->next = newn;
   } 

}

template<class T>
void SinglyLL<T> :: InsertAtPosition(T no, T ipos)
{
  T iCnt = 0;
  T iNodeCnt = Count();

  if((ipos < 1) || (ipos > iNodeCnt+1))
  {
     cout<<"Invalid position"<<"\n";
  }
  if(ipos == 1)
  {
    InsertFirst(no);
  }
  else if(ipos == iNodeCnt+1)
  {
    InsertLast(no);
  }
  else
  {
    struct node<T> * newn = new node<T>;

    newn->data = no;
    newn->next = NULL;

    struct node<T> * temp = First;
    for(int iCnt = 1; iCnt < ipos-1; iCnt++) 
    {
       temp = temp->next;
    }
    newn->next = temp->next;
    temp->next = newn;
  }

}

template<class T>
void SinglyLL<T> :: DeleteFirst()
{
  if(First == NULL)
  {
    return;
  }
  else if(First -> next == NULL)
  {
    delete First;
    First = NULL;
  }
  else
  {
    struct node<T> * temp = First;
    First = First->next;
    delete temp;
  }  

}

template<class T>
void SinglyLL<T> :: DeleteLast()
{
  if(First == NULL)
  {
    return;
  }
  else if(First -> next == NULL)
  {
    delete First;
    First = NULL;
  }
  else
  {
    struct node<T> * temp = First;

    while(temp->next->next != NULL)
    {
       temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
  } 

}

template<class T>
void SinglyLL<T> :: DeleteAtPosition(T ipos)
{
  T iCnt = 0;
  T iNodeCnt = Count();

  if((ipos < 1) || (ipos > iNodeCnt))
  {
    cout<<"Invalid position"<<"\n";
  }
  if(ipos == 1)
  {
    DeleteFirst();
  }
  else if(ipos == iNodeCnt)
  {
    DeleteLast();
  }
  else
  {
    struct node<T> * temp1 = First;

    for(int iCnt = 1; iCnt < ipos-1; iCnt++)
    {
       temp1 = temp1->next;
    }

    struct node<T> * temp2 = temp1->next;

    temp1->next = temp2->next;
    delete temp2;
  }   


}

template<class T>
void SinglyLL<T> :: Display()
{
   struct node<T> * temp = First;

   while(temp != NULL)
   {
      cout<<temp->data<<" ";
      temp = temp -> next;

   }
   cout<<"\n";
}

template<class T>
int SinglyLL<T> :: Count()
{
   struct node<T> * temp = First;
   int iCnt = 0;

   while(temp != NULL)
   { 
      iCnt++;
      temp = temp -> next;

   }
   return iCnt;

}
  
int main()
{
  int iRet = 0;

  SinglyLL <int>iobj;
  iobj.InsertFirst(21);
  iobj.InsertFirst(11);

  iobj.InsertLast(101);\
  iobj.InsertLast(121);
  iobj.Display();
  iRet = iobj.Count();
  cout<<"Number of nodes are : "<<iRet<<"\n";

  iobj.InsertAtPosition(105,2);
  iobj.Display();
  iRet = iobj.Count();
  cout<<"Number of nodes are : "<<iRet<<"\n";

  iobj.DeleteAtPosition(2);
  iobj.Display();
  iRet = iobj.Count();
  cout<<"Number of nodes are : "<<iRet<<"\n";

  iobj.DeleteFirst();
  iobj.DeleteLast();
  iobj.Display();
  iRet = iobj.Count();
  cout<<"Number of nodes are : "<<iRet<<"\n"; 
  


  
  SinglyLL <char>cobj;
  cobj.InsertFirst('b');
  cobj.InsertFirst('a');

  cobj.InsertLast('c');
  cobj.InsertLast('d');
  cobj.Display();
  iRet = cobj.Count();
  cout<<"Number of nodes are : "<<iRet<<"\n";

  cobj.InsertAtPosition('e',2);
  cobj.Display();
  iRet = cobj.Count();
  cout<<"Number of nodes are : "<<iRet<<"\n";

  cobj.DeleteAtPosition(2);
  cobj.Display();
  iRet = cobj.Count();
  cout<<"Number of nodes are : "<<iRet<<"\n";

  cobj.DeleteFirst();
  cobj.DeleteLast();
  cobj.Display();
  iRet = cobj.Count();
  cout<<"Number of nodes are : "<<iRet<<"\n"; 
  




  SinglyLL <float>fobj;
  fobj.InsertFirst(11.2f);
  fobj.InsertFirst(21.2f);

  fobj.InsertLast(101.2f);
  fobj.InsertLast(121.2f);
  fobj.Display();
  iRet = fobj.Count();
  cout<<"Number of nodes are : "<<iRet<<"\n";

  fobj.InsertAtPosition(105.2f,2);
  fobj.Display();
  iRet = fobj.Count();
  cout<<"Number of nodes are : "<<iRet<<"\n";

  fobj.DeleteAtPosition(2);
  fobj.Display();
  iRet = fobj.Count();
  cout<<"Number of nodes are : "<<iRet<<"\n";

  fobj.DeleteFirst();
  fobj.DeleteLast();
  fobj.Display();
  iRet = fobj.Count();
  cout<<"Number of nodes are : "<<iRet<<"\n"; 
  



  SinglyLL <double>dobj;
  dobj.InsertFirst(11.23);
  dobj.InsertFirst(21.23);

  dobj.InsertLast(101.23);
  dobj.InsertLast(121.23);
  dobj.Display();
  iRet = dobj.Count();
  cout<<"Number of nodes are : "<<iRet<<"\n";

  dobj.InsertAtPosition(105.23,2);
  dobj.Display();
  iRet = dobj.Count();
  cout<<"Number of nodes are : "<<iRet<<"\n";

  dobj.DeleteAtPosition(2);
  dobj.Display();
  iRet = dobj.Count();
  cout<<"Number of nodes are : "<<iRet<<"\n";

  dobj.DeleteFirst();
  dobj.DeleteLast();
  dobj.Display();
  iRet = dobj.Count();
  cout<<"Number of nodes are : "<<iRet<<"\n"; 


  return 0;
}