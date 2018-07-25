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
	    int min(i);
    	for (int j=i+1; j<SIZE; ++j)   // Get index of lower element and swap with current 
    	{
    	    if (arr[j] < arr[min]) 
    	       min = j;
    	}
    	
	    swap(arr[i], arr[min]);
	}
	
	for (int i=0; i<SIZE; ++i)
	{
	   cout<<arr[i]<<" , ";
	}
	cout<<endl;
	return 0;
}