#include<iostream>
using namespace std;

int main()
{
    char* ptr = new char('a');//Pointer point to the requested memory;
    cout << "The value of ptr is: " << *ptr<< endl; 
    delete ptr;

    char* ptr2 = new char('b');
    cout << "The value of ptr2 is: " << *ptr2 << endl;
    *ptr = 'c';
    cout << "After I using deleted ptr to change the value of ptr2, right now the value of ptr2 is: " << *ptr2; 
}
