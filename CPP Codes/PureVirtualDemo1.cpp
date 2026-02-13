#include<iostream>

using namespace std;

class Base 
{
    public:
      int i,j;

      int Additon(int a,int b)
      {
        return a + b; //concrete
      }

      virtual int Substraction(int a,int b) = 0; //Abstract
      
      

};

class Derived : public Base //ERROR
{
    public:
      int x;
      
};




int main()
{
  

  Base*bp = new Derived(); //upcasting
  
 

  
    
    return 0;


}