#include<iostream>

using namespace std;

class Demo
{
    void Display()
    {
        cout<<"Inside display";
    }

};

int main()
{
    Demo obj;

    cout<<sizeof(obj); //1byte
    
    
    
    return 0;


}