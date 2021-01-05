// объявление и реализация шаблонного стека
// стек поддерживает операции: 
// - вставка элемента, 
// - извлечение элемента, 
// - просмотр верхнего элемента (без удаления)
// - проверка на пустоту, 
// - получение количества элементов в стеке
// - очистка стека
// при вставке в полный стек должна перевыделяться память

#pragma once
#include <iostream>

using namespace std;
#define MemSize 100

template < typename T >
 class TStack 
{
protected:
	//T Mem[MemSize];
	T* Mem;
	int size;
	int Top;

	public:
		TStack()
		{
			Top = -1;
			Mem = new T[MemSize];
			size = MemSize;
		}

		TStack(int s)
		{
			if (s <= 0)
				throw "incorrect stack size";

			Top = -1;
			Mem = new T[s];
			size = s;
		}

		~TStack()
		{
			delete[] Mem;
		}

		int IsEmpty(void) const
		{
			return Top == -1;
		}

		int IsFull(void) const
		{
			return Top == size - 1;
		}

		void  Put(const  T Val)
		{
			if (Top == size-1)
				throw "stack is full";

			Mem[++Top] = Val;
		}

		T Get(void)
		{
			if (Top == -1)
				throw "stack is empty";

			return Mem[Top--];
		}

		T See(void)
		{
			if (Top == -1)
				throw "stack is empty";

			return Mem[Top];
		}

		void Clear()
		{
			Top = -1;
		}

		int Count()
		{
			return Top + 1;
		}

		
};

