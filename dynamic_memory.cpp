#include<iostream>
using namespace std;

int main()
{
//	int *ptr;//declare a pointer
//	ptr = new int;//dynamic memory allocate
//	*ptr = 20;
//	cout<<*(ptr) * 20;
//char *ptrChar;//fist step---->
//ptrChar  = new char;//2nd step
//*ptrChar  = 'Z';
//delete ptrChar ;
//cout<<*ptrChar ;

//string *ptrStr;
//ptrStr  = new string;
//*ptrStr = "University of london";
//delete ptrStr;
//cout<<*ptrStr ;

int *ptrArray;//dclare of a pointer
ptrArray = new int[5];//dynamically memory allocation
//ptrArray[0] = 10;
//ptrArray[1] = 200;
//ptrArray[2] = 202;
//ptrArray[3] = 100;
//ptrArray[4] = 120;
//cout<<ptrArray[0]<<endl;
//cout<<ptrArray[1]<<endl;
//cout<<ptrArray[2]<<endl;
//cout<<ptrArray[3]<<endl;
//cout<<ptrArray[4]<<endl;

for(int i=0;i<5;i++)
{
	cout<<"Enter array:["<<i<<"]\t";
	cin>>ptrArray[i];
}
//----------output of array
delete []ptrArray;//deallocate the array memmory
for(int i=0;i<5;i++)
{
//	cout<<ptrArray[i]<<" ";
cout<<*ptrArray++<<" ";
}
	
	
}
