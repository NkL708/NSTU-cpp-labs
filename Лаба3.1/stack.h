#pragma once
#include "stroka_binary.h"

class List		// ������
{
public:
	List();
	void remove(int index);
	void add(stroka_binary elem);
	void add(stroka_binary elem, int index);
	void print();

	class Elem {		// ������� ������

	public:
		Elem* pNext;
		stroka_binary data;

		Elem(stroka_binary data, Elem* pNext = nullptr) {
			this->data = data;
			this->pNext = pNext;
		}
	};
	int size;
	Elem* head;		// ��������� �� ������ ������� ������
};