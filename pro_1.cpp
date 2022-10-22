/*Demonstration of class,object,calling to function */
#include<iostream>
using namespace std;

class demo
{
public:
	int ino1;
	int ino2;
	void fun() {
		cout << "hello"<<endl;
	}
};
int main()
{
	demo dobj;

	dobj.ino1 = 10;
	dobj.ino2 = 20;

	dobj.fun();
	cout << dobj.ino1<<endl;
	cout << dobj.ino2<<endl;

	return(0);
  }