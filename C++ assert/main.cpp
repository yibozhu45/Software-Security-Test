
//Sample client code for interfacing with myArray class
//Use this driver program to test your class and defensive programming assertions

#include <iostream>
#include <string>
#include <stdlib.h>
#include "Yibo_Zhu_lab2.cpp"
#include <assert.h>

using namespace std;

int main(){
    int size, choice, read, write;
    string input;
    char replace, response;
    char * array;

    cout << "Welcome, please enter a maximum size for your array" << endl;
    cin >> size;

    cout << "Please enter a series of comma-separated characters for your array" << endl;
    cin >> input;

    //create object of class type which should dynamically allocate a char* array
    //of int size and fill it with the comma-separated values from string input

    Array myArray(size, input);

    while(1){

        cout << "Array Menu" << endl;
        cout << "1. Read by index" << endl;
        cout << "2. Write by index" << endl;
        cout << "3. Delete array" << endl;
        cout << "4. Print array" << endl;
        cout << "5. New Array" << endl;
        cout << "6. Exit" << endl;
        cin >> choice;

        switch(choice){
            case 1:
              cout << "Enter an index to read a value from the array" << endl;
              cin >> read;
              //call to library function ReadFromArray(int read)
              //this library call should read a single character from the array and return it
              response = myArray.ReadFromArray(read);
              cout << "The item in index[" << read << "] is " << response << endl;
              break;
            case 2:
              cout << "Enter an index to write a value to the array" << endl;
              cin >> write;
              cout << "What single character would you like to write to the array?" << endl;
              cin >> replace;
              //call to library function WriteToArray(int write, char replace)
              //this library call should write a single character to the array
              myArray.WriteToArray(write,replace);
              cout << "The item in index[" << write << "] is " << myArray.ReadFromArray(write) << endl;
              break;
            case 3:
              //call to library function DeleteArray() which should free the dynamically allocated array
              myArray.DeleteArray();
              break;
            case 4:
              //call to library function PrintArray() which will print the contents of the array to stdout
              myArray.PrintArray();
              break;
            case 5:
              //call to library function NewArray() which will dynamically allocate a new array
                cout << "Welcome, please enter a maximum size for your array" << endl;
              cin >> size;

              cout << "Please enter a series of comma-separated characters for your array" << endl;
              cin >> input;
              myArray.NewArray(size, input);
              break;
            case 6:
              exit(0);
              break;
        }

    }
    return 0;
}
