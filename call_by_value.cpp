#include<iostream>
using namespace std ;
//---call by value ------
//---changes in copy---------
//---no effect on ORIGIONAL--
void swap(int num1,int num2)
{
 int temp = num1;
 num1=num2;
 num2=temp;
 cout<<"Number 1 is :"<<num1<<endl;
 cout<<"Number 2 is :"<<num2<<endl;
}
int main()
{
	int num1=10;
	int num2=20;
		cout<<"Before swap:"<<num1<<"\t"<<num2<<endl;
	swap(num1,num2);
			cout<<"fter swap:"<<num1<<"\t"<<num2<<endl;
return 0;
}
