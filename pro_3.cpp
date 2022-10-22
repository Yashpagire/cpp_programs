/* Print size of empty class */
#include<iostream>
using namespace std;

class demo
{

};

int main()
{
	demo dobj;
	cout << sizeof(dobj);
	return(0);
}