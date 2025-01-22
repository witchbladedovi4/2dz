#include <iostream>;
#include <Windows.h>;
#include <random>;

void zad1()
{
	int arr[10]{};
	int max = INT_MIN, min = INT_MAX;
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand();
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	std::cout << "\nМассиве: ";
	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\nmax = " << max << "\nmin = " << min;
}


void zad2()
{
	int arr[10]{};
	int start{}, end{}, a{}, summ{};
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand()% 10;
	}
	std::cout << "\nНачало диапозона: ";
	std::cin >> start;
	std::cout << "\nКонец диапозона: ";
	std::cin >> end;
	std::cout << "\nСумма каких искать ? ";
	std::cin >> a;
	std::cout << "Массив:\n ";
	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\nДиапозон массива\n";
	for (int i = start; i < end; i++)
	{
		std::cout << arr[i] << " ";
		if (arr[i] < a)
		{
			summ += arr[i];
		}

	}
	std::cout << "\nСумма в диапозоне, которые меньше указаного числа = " << summ;
}


void zad3()
{
	int arr[12]{9, 12, 3, 5, 6, 1, 2, 4, 5, 7, 9, 0};
	int dep{}, start{}, end{}, min = INT_MAX, max = INT_MIN, max1{}, min1{};

	for (int i = 0; i < 12; i++)
	{
		int a{};
		std::cout << "\nПрибыть за " << i + 1 << " месяц ";
		std::cin >> a;
		arr[i] = a;
	}
	std::cout << "\nДиапозон напчало: ";
	std::cin >> start;
	std::cout << "\nДиапозон конец: ";
	std::cin >> end;
	std::cout << "\nдиопозоный массив ";
	for (int  i = start-1; i < end; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			max1 = i;
		}
		if (arr[i] < min)
		{
			min = arr[i];
			min1 = i;
		}
		std::cout << arr[i] << " ";
	}
	std::cout << "\nmax = " << max << " в " << max1+1 << " месяце " << "\nmin = " << min << " в " << min1+1 << " месяце ";
}

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	zad1();
	zad2();
	zad3();
	return 0;
}

