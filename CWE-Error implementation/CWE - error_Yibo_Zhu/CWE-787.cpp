#include<iostream>

using namespace std;

int main()
{
    int array[3];

    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    //out-of-bounds write of the fourth number
    array[3] = 4;
}
