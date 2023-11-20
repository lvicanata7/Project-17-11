#include <iostream>
#include <Windows.h>

using namespace std;

void func1() {

}

void func2() {
	cout << "fun2\n";
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Line1" << endl;
	cout << "Line 2" << endl;
	

	return 0;
}