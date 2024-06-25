#include<iostream>
using namespace std;

int main()
{
	int x = 10;
	int *xptr = &x;//---->>& is used to store the address
	cout<<xptr;
	cout<<endl;
	cout<<*xptr;
	//------double pointers   or pointers to pointers
	int **yptr = &xptr;
	cout<<"Address of xptr \t"<<*yptr;
	cout<<"\n";
	cout<<"value of yptr:\t"<<**yptr;
	//-------3D Pointers---------
	int ***zptr = &yptr;
	cout<<"Address of xptr \t"<<**zptr;
	cout<<"\n";
	cout<<"value of zptr:\t"<<***zptr;

}
