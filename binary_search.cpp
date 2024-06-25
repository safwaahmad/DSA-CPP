#include<iostream>
using namespace std;
int binarySearch(int Array[],int key,int size)
{
	int low,high,mid;
	low = 0;
	high = size-1;
	while(low<=high)
	{
		mid = (low+high)/2;
		if(key==Array[mid])
		return mid;
		else if(key<Array[mid])
		high  = mid-1;
		else
		low = mid+1;
	}
	return -1;
}

int main()
{
	const int SIZE = 10;
	int array[SIZE] = {3,5,7,9,11,14,16,20,30,40};
 //----tell in index of the key----
	cout<<binarySearch(array,30,SIZE); 
if(binarySearch(array,30,SIZE) == -1 )
{
	cout<<"Element not found\n";
}
else
cout<<"element found:\n";
}
