#include<iostream>
#include<vector>
using namespace std;

int getValueFromArray(vector<int>array, int len, int index)
{
    int value;
    //check that the array index is less than the maximum
    //length of the array
    if(index < len)
    {
      //get the value at the specified index of the array
      value = array[index];
    }
    else
    {//if array index is invalid then output error message
     //and return value indicating error
      cout << "Value is: " << value << " " << array[index];
      value = -1;
    }
    return value;
}
int main()
{
    vector<int>nums = {4,33,2,6,7};
    int size = nums.size();
    int index = -1;
    int result = getValueFromArray(nums, size, index);
    cout << result;
}
