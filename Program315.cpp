#include<iostream>
using namespace std;

class ArrayX
{
  public:
     int *Arr;
     int iSize;

     ArrayX(int i)
     {
        iSize = i;
        Arr = new int[iSize]; 
     } 
     void Accept()
     {

     }     
     void Display()
     {

     }
};

int main()
{
  ArrayX obj(5);
  obj.Accept();
  obj.Display();

  return 0;
}