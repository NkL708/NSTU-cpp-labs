#include "stroka_binary.h"

int main() {
	setlocale(LC_ALL, "Rus");
	stroka_binary a1(123, 14);
	stroka_binary a2(228, 20);
	stroka_binary a3;
	a1.print();
	a2.print();
	a1.find_podstroka("1111");
	a1.change("101010");
	a1.print_sym(5);
	a1.print();
	(a1 + a2).print();
	return 0;
}
