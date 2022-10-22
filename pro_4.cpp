/* Demonstration of single inheritance */
#include<iostream>
using namespace std;

//create class
class A         //base class
{
public:         //access specifier
	int i, j;     //charecteristics
	A(){          //default constructor
		i = 10;
	j = 20;
	}

	void fun();  //behavior
};

void A::fun()
{
	cout << "hello"<<endl;
 }

class B:public A {             //derived class
public:
	int k;
	B() {                       //default constructour
		i = 10;
		j = 20;
		k = 30;
	}
};

int main()
{
	A aobj;
	cout << aobj.i << endl;
	cout << aobj.j << endl;
	aobj.fun();

	B bobj;
	cout << bobj.i << endl;
	cout << bobj.j << endl;
	cout << bobj.k << endl;
	bobj.fun();
	return(0);
  }