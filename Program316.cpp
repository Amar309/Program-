#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
  public:
     T *Arr;
     int iSize;

};

/*

 Return name Class name :: Function name


*/

ArrayX(int i)
{
   iSize = i;
   Arr = new int[iSize]; 
} 

void ArrayX ::Accept()
{


}

void ArrayX :: Display()
{


}
     			

int main()
{
  ArrayX obj1<int>(5);
  obj1.Accept();
  obj1.Display();

  ArrayX obj2<double>(5);
  obj2.Accept();
  obj2.Display();


  return 0;
}