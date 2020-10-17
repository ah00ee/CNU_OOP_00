#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class AnyString {
	string anyString;

public:
	AnyString(const string& anyString) : anyString(anyString) {}
	/*string getAnyString() {
		return "Stored String :: " + anyString;
	}*/
	friend ostream& operator<<(ostream& os, const AnyString& a);
};

ostream& operator<<(ostream& os, const AnyString& a) {
	os << "Stored String :: " << a.anyString;

	return os;
}

int main() {
	ofstream out("testOveroding.txt");
	AnyString a("Hello, this is operator overloading test!!!");
	//string output = a.getAnyString();
	out << a << endl;

	return 0;
}