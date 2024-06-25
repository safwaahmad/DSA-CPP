#include<iostream>
using namespace std;
int main ()
{
	int const SIZE = 5;
	int array[SIZE];
	int element;
	bool flag = false;
	for(int i = 0 ; i<SIZE ; i++)
	{
     cout<<"Enter array : "<<i<<"\t";
//   	cout<<"Enter the array size : "<<i<<"\t";
  	 cin>>array[i];
    } 
     cout<<"Enter element you want to search :\t";
     cin>>element;
     for (int i =0;i<SIZE;i++)
    {
    	if(array[i]==element)
		{
			flag=true;
			break;
		}
		else
		{
		    flag=false;
		}
	}
	if(flag==true)
	{
		cout<<"Flag found ";
	}
	else
	{
		cout<<"FLAG NOT FOUND";
	}
	return 0;
}
