#include<iostream>
using namespace std;

//problems on numbers

class Numbers
{
  public:
    int iNo;

    Numbers(int i)      //parametrised 
    {
      iNo = i;
    }

    void Function()
    {

    }


};

int main()
{
  int iValue = 0;
 
  cout<<"Enter number : \n";
  cin>>iValue;

  Numbers obj(iValue);

  obj.Function();
  
	
  return 0;
}