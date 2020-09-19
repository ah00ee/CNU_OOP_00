#include <iostream>

class SetValue {
private:
	int x, y;

public:
	int get_x() {
		return x;
	}
	int get_y() {
		return y;
	}
	void set_x(int input_x) {
		x = input_x;
	}
	void set_y(int input_y) {
		y = input_y;
	}
};

int main() {
	SetValue obj;

	obj.set_x(33);
	obj.set_y(44);

	std::cout << "X = " << obj.get_x() << " ,Y = " << obj.get_y() << std::endl;

	return 0;
}