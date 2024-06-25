#include<iostream>
using namespace std ;
//----fuction declaraton---
//----first step-------
//----second functionname --->valid
//----third parameter -----
void display() //-----------------------function declaration------
{
	cout<<"Dispaly hello world"<<endl;  //--function defination---
}
int square(int number)
{
	return number*number;
}
int main()
{
	//<-------functiin callng----->
	display();
	int num=10;
	cout<<square(num);
	return 0;
}
