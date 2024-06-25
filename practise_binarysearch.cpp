#include<iostream>
using namespace std ;
//first we have to sort the array--
int binarysearch (int arr[],int size, int element)
{
	int low,high,mid;
//searching starts---
low=0;
high=size-1;
	while(low<=high)
	{
	
mid = (high+low)/2;
if(arr[mid]==element)
{
	return mid;
}	
	if(arr[mid]<element){
		low=mid+1;
	}
	else
		high = mid-1;
//searching endss----
    } 
return -1;
}
//-----------------------------------------------------
int main () 
{
//	int const size =10;
//	int arr[10]={11,12,13,14,15,16,17,18,19,20};

//int size;
//int arr[size];
//	for(int i=1;i<size;i++)
//	{
//		cin>>arr[i];
//	}
//int arr,size;
//cout<<show(int arr[],int size), int element<<endl;
//cout<<output(arr,size,element)<<endl;
	
	//first step
	int size;
	cout<<"Enter the size of array:\t";
	cin>>size;
//	const int size = 10;//size
	int arr[size];//array declaration
	//element input for user
	int element;
	cout<<"Enter element for seach:\t";
	cin>>element; //efor element input search 
	cout<<"\n\n";
	for(int i=0;i<size;i++)//loop for user input
	{
		cout<<"Enter array:["<<i<<"]\t";
		cin>>arr[i];
	}
	

cout<<binarysearch(arr,size,element)<<endl;
return 0;
	
}
