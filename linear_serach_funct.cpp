#include<iostream>
using namespace std;
bool seachArray(int array[],int size,int element)
{
	bool flag = false;//by default value false
	for(int i=0;i<size;i++)
	{
		if(array[i]==element)
		{
			flag =  true;
		}
		
	}
}

int main()
{
	//first step
	int element;
	const int SIZE = 10;//size
	int array[SIZE];//array declaration
	//element input for user
	cout<<"Enter element for seach:\t";
	cin>>element;//efor element input search 
	cout<<"\n\n";
	for(int i=0;i<SIZE;i++)//loop for user input
	{
		cout<<"Enter array:["<<i<<"]\t";
		cin>>array[i];
	}
	//calling of function-------
	cout<<"\n------------------------------------------\n";
	bool flag = seachArray(array,SIZE,element);
	if(flag)
	{
		cout<<"Element found";
	}
	else
	{
		cout<<"Element not found";
	}
}
