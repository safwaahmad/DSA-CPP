#include<iostream>
using namespace std;
void AscendingOrder(int array[],int size)
{
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-1;j++)
		{
			if(array[j] > array[j+1])
			{
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}
void DecendingOrder(int array[],int size)
{
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-1;j++)
		{
			if(array[j] < array[j+1])
			{
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}

int main()
{
//first step---array declare
const int SIZE = 10;
int array[SIZE];
for(int i=0;i<SIZE;i++)
{
	cout<<"ENter array:["<<i<<"]\t";
	cin>>array[i];
}
//calling of ascending function------------------>>
cout<<"\n-------------Ascending array-----------------\n";
AscendingOrder(array,SIZE);
cout<<"\n---------------Displaying of array--------------\n";
for (int i=0;i<SIZE;i++)
{
	cout<<array[i]<<"\t";
}
cout<<"\n-------------Decending array-----------------\n";
//caling of decending array----------
DecendingOrder(array,SIZE); 
for (int i=0;i<SIZE;i++)
{
	cout<<array[i]<<"\t";
}
}
