#include "stack.h"

List::List() {
	size = 0;
	head = nullptr;
}

void List::add(stroka_binary elem) {		// Добавить элемент в начало списка
	Elem* current = head;
	current = new Elem(elem);
}

void List::add(stroka_binary elem, int index)
{

}

void List::print()
{
	Elem* current = head;
	for (int i = 0; i < size; i++) {
		current->data.print();
		current = current->pNext;
	}
}

void List::remove(int index) {		// Убрать элемент по индексу
	Elem* current = head;
	if (index == 0) {
		delete[] head;
	}
	if (index = this->size) {
		for (int i = 0; i < index - 1; i++) {
			current = current->pNext;
		}
		Elem* toDelete = current->pNext;
		current->pNext = head;
		delete toDelete;
	}
	else {
		for (int i = 0; i < index - 1; i++) {
			current = current->pNext;
		}
		Elem* toDelete = current->pNext;
		current->pNext = toDelete->pNext;
		delete toDelete;
	}
	size--;
}