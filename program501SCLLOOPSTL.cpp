#include<iostream>
using namespace std;

//Singly Circular Linked List with OOP

template<class T>
struct node
{
  T data;
  struct node *next;


};

template<class T>
class SinglyCL
{
  public:
   struct node<T> * First;  //characteristics
   struct node<T> * Last;   //characteristics

   SinglyCL();   //constructor
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
SinglyCL<T> :: SinglyCL()
{
  First = NULL;

  Last = NULL;

}

template<class T>
void SinglyCL<T> :: InsertFirst(T no)
{ 
  //PNODE newn = (PNODE)malloc(sizeof(NODE));
  
  struct node<T> * newn = new node<T>;

  newn->data = no;
  newn->next = NULL;

  if((First == NULL) && (Last == NULL))  //Empty LL
  {
    First = Last = newn;
    (Last)->next = First;
  }
  else   //LL contains atleat one node
  {
     newn->next = First;
     First = newn;
     (Last)->next = First;

  }  

}

template<class T>
void SinglyCL<T> :: InsertLast(T no)
{ 
  //PNODE newn = (PNODE)malloc(sizeof(NODE));

  struct node<T> * newn = new node<T>;

  newn->data = no;
  newn->next = NULL;

  if((First == NULL) && (Last == NULL))  //Empty LL
  {
    First = Last = newn;
    (Last)->next = First;
  }
  else   //LL contains atleat one node
  {
     (Last)->next = newn;
     Last = newn;
     (Last)->next = First;

  }  

}

template<class T>
void SinglyCL<T> :: Display()
{
   struct node<T> * temp = First;

   cout<<"Elements of Linked list are : "<<"\n";

   do
   {
     cout<<"|"<<temp->data<<"|->";
     temp = temp->next;
   }while(temp != Last->next);
   printf("\n");

}

template<class T>
int SinglyCL<T> :: Count()
{
  struct node<T> * temp = First;  

  int iCnt = 0;
  do
  {
     iCnt++;
     temp = temp->next;
  }while(temp != Last->next);
  return iCnt;
}

template<class T>
void SinglyCL<T> :: DeleteFirst()
{
  struct node<T> * temp = First;
  
  if((First == NULL) && (Last == NULL))    //Empty LL
  {
    return;
  }
  else if(First == Last)    //Single node in LL
  {
     //free(First);

     delete First;
     First = NULL;
     Last = NULL;

  }
  else   //If LL contains more than 1 node
  {
    First = (First)->next;
     //free(temp);

      delete temp;
     (Last)->next = First;

  }

}

template<class T>
void SinglyCL<T> :: DeleteLast()
{
  struct node<T> * temp = First;


  if((First == NULL) && (Last == NULL))    //Empty LL
  {
    return;
  }
  else if(First == Last)    //Single node in LL
  {
    //free(*First);

     delete First;
    First = NULL;
    Last = NULL;
  

  }
  else   //If LL contains more than 1 node
  {
     while(temp->next != (Last))
     {
       temp = temp->next;
     }
     
     //free(temp->next);   //free(*Last);
   
     delete temp->next;
     Last = temp;
     (Last)->next = First;
  
  }
}

template<class T>
void SinglyCL<T> :: InsertAtPosition(T no, T ipos)
{
  int iNodeCnt = 0;
  int iCnt = 0;
  iNodeCnt = Count();
  struct node<T> * newn = NULL;
  struct node<T> * temp = First;

  if((ipos < 1) || (ipos >iNodeCnt+1))
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
    //newn = (PNODE)malloc(sizeof(NODE));
    
    newn = new node<T>;
    newn->data = no;
    newn->next = NULL;

    for(iCnt = 1; iCnt < ipos-1; iCnt++)
    {
      temp = temp->next;
    } 
    newn->next = temp->next;
    temp->next = newn;

  }


}

template<class T>
void SinglyCL<T> :: DeleteAtPosition(T ipos)
{
  int iNodeCnt = 0;
  int iCnt = 0;
  iNodeCnt = Count();
  struct node<T> * temp1 = First;
  struct node<T> * temp2 = NULL;

  if((ipos < 1) || (ipos >iNodeCnt))
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
    for(iCnt = 1; iCnt < ipos-1; iCnt++)
    {
       temp1 = temp1->next;
    }
    temp2 = temp1->next;

    temp1->next = temp2->next;
    //free(temp2);
    delete temp2;


  }


}




int main()
{

  int iRet = 0;

  
  SinglyCL <int>iobj;
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
  


  
  SinglyCL <char>cobj;
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
  




  SinglyCL <float>fobj;
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
  



  SinglyCL <double>dobj;
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