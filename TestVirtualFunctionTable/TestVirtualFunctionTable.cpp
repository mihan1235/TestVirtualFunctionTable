// TestVirtualFunctionTable.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

struct Empty {};

struct EmptyVirt { virtual ~EmptyVirt() {} };

struct NotEmpty { int m_i; };

struct NotEmptyVirt
{
	virtual ~NotEmptyVirt() {}
	int m_i;
};

struct NotEmptyNonVirt
{
	void foo() const {}
	int m_i;
};

int main()
{
	std::cout << sizeof(Empty) << std::endl;
	std::cout << sizeof(EmptyVirt) << std::endl;
	std::cout << sizeof(NotEmpty) << std::endl;
	std::cout << sizeof(NotEmptyVirt) << std::endl;
	std::cout << sizeof(NotEmptyNonVirt) << std::endl;

	return EXIT_SUCCESS;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
