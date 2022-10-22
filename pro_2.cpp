/*demonstration of constructure */
#include<iostream>
using namespace std;

class demo {
public:
	int a, b;
	demo() {
		a = 20;
		b = 10;
	}
};
int main()
{
	demo dobj;
	cout << dobj.a << endl;
	cout << dobj.b << endl;
	return(0);
   }