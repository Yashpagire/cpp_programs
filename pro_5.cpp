/*demonstration of multilevel inheritance */
#include<iostream>
using namespace std;

//create class
class A         //base class
{
public:         //access specifier
	int i;     //charecteristics
	A() {          //default constructor
		i = 10;
	} 
};

class B :public A {             //derived class
public:
	int j;
	B() {                       //default constructour
		i = 10;
		j = 20;
	}
};
class C :public B {             //derived class
public:
	int k;
	C() {                       //default constructour
		i = 10;
		j = 20;
		k = 25;
	}
};


int main()
{
	A aobj;
	cout << aobj.i << endl;
	
	B bobj;
	cout << bobj.i << endl;
	cout << bobj.j << endl;
	
	C cobj;
	cout << cobj.i << endl;
	cout << cobj.j << endl;
	cout << cobj.k << endl;
   
	return(0);
}
	
