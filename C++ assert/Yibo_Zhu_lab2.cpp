//
//  Yibo_Zhu_lab2.cpp
//  

#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <assert.h>

using namespace std;

class Array{
private:
    char* array = NULL;//initial NULL array
    int size;
    
public:
    //Constructor
    Array(int &size, string &input)
    {
	while(size <= 0)
	{
	    cout << "Size should be bigger than 0!" << endl << "Please enter size again:" << endl;
	    cin >> size;
	}

#ifdef ASSERT_CHECK
        assert(size > 0);
#endif
	//split string by ',' store in a new string value
	stringstream input_stringstream(input);
	string value, parse;
	while(getline(input_stringstream, parse, ','))
	{
	    value += parse;
	}	//if size less than 0, it is a undefined behavior

	//put new value into input
	input = value;

        array = new char[size];
        char* pointer = array;
        
        if(size >= input.length())
        {
            for (int i = 0; i < input.length(); i++) {
                *pointer = input[i];// enter the characters in order
                pointer++;
            }
            this->size = input.length();
        }
        else{
            //input.length() > size
            for (int i = 0; i < size; i++) {
                *pointer = input[i];
                pointer++;
            }
            this->size = size;
        }
        
    }

    //Destructor
    ~Array(){
#ifdef ASSERT_CHECK
        assert(array != NULL);
#endif
        delete[] array;
	array = NULL;
    }
    
    char ReadFromArray(int &index)
    {
	while(index < 0 || index >= size)
	{
	    cout << "The valid index is 0 to " << size-1 <<"! \nPlease enter the index again:";
	    cin >> index;
	}

#ifdef ASSERT_CHECK
        assert(index >= 0 && index < size);
#endif
        char* pointer = array;
        for (int i = 0; i < index; i++)// go to the specific index
        {
            pointer++;
        }
        return *pointer;// return the value
    }
    
    void WriteToArray(int &index, char &replace)
    {
	while(index < 0 || index >= size)
	{
	    cout << "The valid index is 0 to " << size-1 <<"! \nPlease enter the index again:";
	    cin >> index;
	}

#ifdef ASSERT_CHECK
        assert(index >= 0 && index < size);
#endif
        char* pointer = array;
        for(int i = 0; i < index; i++)// go to the specific index
        {
            pointer++;
        }
        *pointer = replace; //replace to new character
    }
    
    void DeleteArray()
    {
	if(array == NULL)
	{
	    cout << "The array is already deleted!" << endl;
	    
	}else
	{

#ifdef ASSERT_CHECK
        assert(array != NULL);
#endif
        delete [] array;
        array = NULL;
	}
    }

    void PrintArray()
    {
	if(array == NULL)
	{
	    cout << "The array is not initialized yet\nPlease choose choice 5 to initialize the array first" << endl;    
	}
	else{
#ifdef ASSERT_CHECK
        assert(array != NULL);
#endif
        char* pointer = array;
        for(int i = 0; i < size; i++){
            cout << *pointer << " ";
            pointer++;
        }
        cout << endl;
	}
    }
    
    void NewArray(int size, string input)
    {

	//if size less than 0, it is a undefined behavior
	while(size <= 0)
	{
	    cout << "Size should be bigger than 0!" << endl << "Please enter size again:" << endl;
	    cin >> size;
	}
#ifdef ASSERT_CHECK
        assert(size > 0);
#endif
	//split string by ',' store in a new string value
	stringstream input_stringstream(input);
	string value, parse;
	while(getline(input_stringstream, parse, ','))
	{
	    value += parse;
	}
	//put new value into input
	input = value;

        char* pointer = new char[size];
        array = pointer;//overwrite the old array
        
        if(size >= input.length())
        {
            for (int i = 0; i < input.length(); i++) {
                *pointer = input[i];// enter the characters in order
                pointer++;
            }
            this->size = input.length();
        }
        else{
            //input.length() > size
            for (int i = 0; i < size; i++) {
                *pointer = input[i];
                pointer++;
            }
            this->size = size;
        }

    }
    
};
