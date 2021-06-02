#include "stroka_binary.h"

int main() {

	/*
	stroka a("Hello World!", 14);
	stroka b("Hello", 7);
	stroka c;
	const char* str = "Hello";

	cout << a[11] << endl;
	c.sum_of_2(a, b);
	c.print();
	c = sum_of_2(a, b);
	c.print();
	c = a - b;
	c.print();
	c = b + str;
	c.print();
	a = b;
	a.print();
	*/

	setlocale(LC_ALL, "Rus");

	stroka_binary a1(123, 14);
	stroka a2("qwerty", 8);
	stroka a3("Some text", 11);
	stroka b1,b2,b3;

	ofstream file1("File.txt", ios::out);
	file1 << a1 << a2 << a3;
	file1.close();
	
	ifstream file2("File.txt");
	file2 >> b1 >> b2 >> b3;
	cout << b1 << b2 << b3;
	file2.close();

	ofstream bfile1("bFile.bin", ios::binary);
	a1.writeToBin(bfile1);
	a2.writeToBin(bfile1);
	a3.writeToBin(bfile1);
	bfile1.close();

	ifstream bfile2("bFile.bin", ios::binary);
	b1.readFromBin(bfile2);
	b2.readFromBin(bfile2);
	b3.readFromBin(bfile2);
	cout << b1 << b2 << b3;
	bfile2.close();

	return 0;
}
