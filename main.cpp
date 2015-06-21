#include <iostream>
#include "func2.hpp"

using std::cout;
using std::endl;

void func1() {
	cout << "func1() call" << endl;
}


int main()
{
	cout << "A message" << endl;
	func1();
	func2();

	return 0;
}
