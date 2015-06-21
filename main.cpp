#include <iostream>

using std::cout;
using std::endl;

void func1() {
	cout << "func1() call" << endl;
}


int main()
{
	cout << "A message" << endl;
	func1();

	return 0;
}
