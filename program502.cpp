#include<iostream>
using namespace std;

//Doubly Circular Linked  List With OOP

template<class T>
struct node
{
  T data;
  struct node *next;
  struct node *prev;

};

template<class T>
class DoublyCL
{
  public:
     struct node<T> * First;
     struct node<T> * Last;

     DoublyCL();
     void InsertFirst(T no);
     void InsertLast(T no);
     void InsertAtPosition(T no,T ipos);

     void DeleteFirst();
     void DeleteLast();
     void DeleteAtPosition(T ipos);
  
     void Display();
     int Count();

};

/*
Return_Value Class_Name :: Function_Name()
{
//code

}
*/

template<class T>
DoublyCL<T> :: DoublyCL()    //Default Constructor
{
  First = NULL;
  Last = NULL;
}

template<class T>
void DoublyCL<T> :: InsertFirst(T no)
{
  struct node<T> * newn = new node<T>;

  newn->data = no;
  newn->next = NULL;
  newn->prev = NULL;

  if((First == NULL) && (Last == NULL))   //LL is empty
  {
    First = newn;
    Last = newn; 

  }
  else        //If LL contains one or more node
  {
     newn->next = First;
     (First)->prev = newn;
     First = newn;

  }
  (First)->prev = Last;
  (Last)->next = First;
}

template<class T>
void DoublyCL<T> :: InsertLast(T no)
{
  struct node<T> * newn = new node<T>;

  newn->data = no;
  newn->next = NULL;
  newn->prev = NULL;

  if((First == NULL) && (Last == NULL))   //LL is empty
  {
    First = newn;
    Last = newn; 

  }
  else        //If LL contains one or more node
  {
     (Last)->next = newn;
      newn->prev = Last;
      Last = newn;

  }
  (First)->prev = newn;
  (Last)->next = First;
}

template<class T>
void  DoublyCL<T> :: Display()
{
  struct node<T> * temp = First;

  if(First == NULL && Last == NULL)
  {
    cout<<"Linked List are empty"<<"\n"; 
    return;
  }

  cout<<"Elements of Linked list are : "<<"\n";  
  do
  {
     cout<<"|"<<temp->data<<"|<=>";
     temp = temp->next;
  }while(temp != Last->next);
  
  cout<<"\n";
}

template<class T>
int DoublyCL<T> :: Count()
{
  int iCnt = 0;
  struct node<T> * temp = First;

  if(First == NULL && Last == NULL)
  {
    return iCnt;
   
  }
  
  do
  {
     iCnt++;
     temp = temp->next;
  }while(temp != Last->next);
  
  return iCnt;
}

template<class T>
void  DoublyCL<T> :: DeleteFirst()
{
  if(First == NULL && Last == NULL)
  {
     return;
  }
  else if(First == Last)
  {
     delete First;
     First = NULL;
     Last = NULL;
  }
  else      //more than one node
  {
    First = First->next;
     delete Last->next;     //free((*First)->prev);

   First->prev = Last;
   Last->next = First;

  } 
  

}

template<class T>
void  DoublyCL<T> :: DeleteLast()
{
  if(First == NULL && Last == NULL)
  {
    return;
  }
  else if(First == Last)
  {
     delete First;
     First = NULL;
     Last = NULL;
  }
  else      //more than one node
  {
    Last = Last->prev;
    delete First->prev;   //free((*Last)->next);

     
   First->prev = Last;
   Last->next = First;
  } 
}

template<class T>
void  DoublyCL<T> :: InsertAtPosition(T no, T ipos)
{
  T iNodeCnt = Count();
  struct node<T> * newn = NULL;
  struct node<T> * temp = NULL;

  int iCnt = 0;

  if((ipos < 1) || (ipos > iNodeCnt+1))
  {
     cout<<"Invalid position"<<"\n";
     return;

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
     newn = new node<T>;
     newn->data = no;
     newn->next = NULL;
     newn->prev = NULL;

     temp = First;
     for(iCnt = 1; iCnt < ipos-1; iCnt++)
     {
       temp = temp->next;

     }
     newn->next = temp->next;
     temp->next->prev = newn;

     temp->next = newn;
     newn->prev = temp; 

  }


}

template<class T>
void  DoublyCL<T> :: DeleteAtPosition(T ipos)
{
  T iNodeCnt = Count();
  struct node<T> * temp = NULL;
  T iCnt = 0;

  if((ipos < 1) || (ipos > iNodeCnt))
  {
     cout<<"Invalid position"<<"\n";
     return;

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
     temp = First;
     
     for(iCnt = 1; iCnt < ipos-1; iCnt++)
     {
       temp = temp->next;

     }
     temp->next = temp->next->next;
     delete(temp->next->prev);
     temp->next->prev = temp;

  }


}



int main()
{
  int iRet = 0;  

  DoublyCL <int>iobj;
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
  


  
  DoublyCL <char>cobj;
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
  




  DoublyCL <float>fobj;
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
  



  DoublyCL <double>dobj;
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