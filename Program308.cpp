#include<iostream>
using namespace std;


void Swapi(int &x, int &y)
{
   int temp;

   temp = x;
   x = y;
   y = temp;

}


void Swapd(double &x, double &y)
{
   double temp;

   temp = x;
   x = y;
   y = temp;

}

int main()
{
   int a = 11, b = 10;

   cout<<"value of a "<<a<<"\n";
   cout<<"value of b "<<b<<"\n";

   Swapi(a,b);

   cout<<"value of a "<<a<<"\n";
   cout<<"value of b "<<b<<"\n";

    double p = 11.9, q = 10.7;

   cout<<"value of p "<<p<<"\n";
   cout<<"value of q "<<q<<"\n";

   Swapd(p,q);

   cout<<"value of p "<<p<<"\n";
   cout<<"value of q "<<q<<"\n";



   return 0;
}