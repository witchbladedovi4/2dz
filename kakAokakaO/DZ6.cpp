#include <iostream>;
#include <Windows.h>;
#include <random>;

void zad1()
{
	int const row = 3, size = 5;
	int arr[size][row]{};
	int a{};
	
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < row; j++)
		{
			if (i == 0 && j == 0)
			{
				std::cout << "Введите 1 элемент массива: ";
				std::cin >> a;
				arr[i][j] = a;
				std::cout << arr[i][j] << "\t";
			}
			else
			{
				arr[i][j] = arr[i][j-1] * 2;
				std::cout << arr[i][j] << "\t";
			}
			
		}
		std::cout << "\n";
	}
}

void zad2()
{
	int const row = 3, size = 5;
	int arr[size][row]{};
	int a{};

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < row; j++)
		{
			if (i == 0 && j == 0)
			{
				std::cout << "Введите 1 элемент массива: ";
				std::cin >> a;
				arr[i][j] = a;
				std::cout << arr[i][j] << "\t";
			}
			else
			{
				arr[i][j] = arr[i][j - 1] + 1;
				std::cout << arr[i][j] << "\t";
			}

		}
		std::cout << "\n";
	}
}
int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	zad1();
	zad2();
	return 0;
}

