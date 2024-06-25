#include<iostream>
using namespace std;

int main()
{
	int value1 = 100;//varibale
	int *ptr;//declare the pointer
	//store the address of varibale in pointer
	ptr = &value1 ;
	cout<<"The orignnal vlaue of varibale:\t"<<value1<<endl;
	cout<<"Address of variable:\t"<<&value1<<endl;//ptr is used to store the address
	cout<<"Address of variable:\t"<<ptr<<endl;//ptr is used to store the address
	cout<<"The value at that address:\t"<<*ptr<<endl;//asteric is used to get the value at the address
	int var1  =100;
//	int *ptr;
	ptr = &var1;
	int z = *ptr +100;
	int y = *ptr * 5;//cannot perform operations with address
	cout<<y<<endl;//operatipons can only perform with values
	cout<<z<<endl;


}
