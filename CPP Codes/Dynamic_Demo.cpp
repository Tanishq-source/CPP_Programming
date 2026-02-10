#include<iostream>

using namespace std;

int main()
{
    int length = 0;
    int *Arr = NULL;

    cout<<"Enter the number of elements :\n";
    cin>>length;

    // Allocate the memory
    Arr = new int[length];
    if (Arr == NULL)
    {
        cout<<"Unable to allocate the memory\n";
    }
    else
    {
        cout<<"Memory gets succesfully allocated\n";
    }


    // use the memory

    // Deallocate the memory
    delete []Arr;  // It will delete whole array and will avoid memory leakge by avoiding just deleting first element deletion 


    return 0;
}