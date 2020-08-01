#include<iostream>
#include<string>

using namespace std;

int GetUntrustedOffset()
{
    cout << "Which item do you want to select?";
    cout << "1.boat 2.car 3.truck 4.train (input 5 to exploit the error)" << endl;
    int index;
    cin >> index;
    return index;
}

int main()
{
    string items[] = {"boat", "car", "truck", "train"};
    int index = GetUntrustedOffset();
    cout << endl << "You selected " << index << " " << items[index -1]; 
	
}
