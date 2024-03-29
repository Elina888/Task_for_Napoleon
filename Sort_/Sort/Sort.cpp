// Sort.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <iostream>
#include <algorithm>

bool is_odd(int num)
{
	return (num % 2 == 0);
}

int main()
{
	int size, *a;
	std::cout << "Size: ";
	std::cin >> size;
	std::cout << "Elements one by one: ";
	a = new int[size];
	for (int i = 0; i < size; ++i)
		std::cin >> a[i];

	for (int i = 0; i < size; ++i)
		std::cout << a[i] << " ";
	std::cout << std::endl;

	for (int i = 1; i < size; ++i)
		for (int j = i; j > 0; --j)
		{
			if (is_odd(a[j]))
			{
				if (is_odd(a[j - 1]))
				{
					if (a[j] < a[j - 1])
						std::swap(a[j], a[j - 1]);
				}
				else
					std::swap(a[j], a[j - 1]);
			}
			else if (!is_odd(a[j - 1]))
			{
				if (a[j] > a[j - 1])
					std::swap(a[j], a[j - 1]);
			}
		}

	for (int i = 0; i < size; ++i)
		std::cout << a[i] << " ";
	std::cout << std::endl;
	system("pause");
}


