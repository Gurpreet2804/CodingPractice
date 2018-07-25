#include <iostream>

using namespace std;

int swap(int& lhs, int& rhs)
{
    int temp(rhs);
    rhs = lhs;
    lhs = temp;
}
const int SIZE = 10;

int main() {
	
	int arr[SIZE] = {7,10,3,5,9,6,2,4,8,1};
	
	for (int i = 0; i < SIZE; ++i)
	{
    	for (int j=0; j<SIZE - 1; ++j)
    	{
    	    if (arr[j] > arr[j+1])  //compare adjecent and move largest to end
    	    {
    	         swap(arr[j] , arr[j+1]);
    	    }
    	}
	}
	
	for (int i=0; i<SIZE; ++i)
	{
	   cout<<arr[i]<<" , ";
	}
	cout<<endl;
	return 0;
}