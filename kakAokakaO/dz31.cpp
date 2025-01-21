#include <iostream>;
#include <Windows.h>;

//void asd()
//{
//	std::cout << 123456 / 100000 << "\n";
//	std::cout << 123456 / 10000 % 10 << "\n";
//	std::cout << 123456 / 1000 % 10 << "\n";
//	std::cout << 123456 / 100 % 10 << "\n";
//	std::cout << 123456 / 10 % 10 << "\n";
//	std::cout << 123456  % 10 << "\n";
//}
void zad1();
void zad2();
void zad3();
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	zad1();
	zad2();
	zad3();
	return 0;
}

void zad1()
{
	int a{};
	std::cout << "Введите гетеросексуальное ШЕСТИЗНАЧНОЕ числойоу\n";
	std::cin >> a;
	if (a >= 100000 && a <= 999999)
	{
		if ((a / 100000 + a / 10000 % 10 + a / 1000 % 10) == (a / 100 % 10 + a / 10 % 10 + a % 10))
		{
			std::cout << a << " - Билент счастлиывй\n";
		}
		else
		{
			std::cout << a << " - Не счтатьен!\n";
			exit(1);
		}
	}
	else
	{
		std::cout << "\nЯ же говорил четеросексуальное ШЕСТИЗНАЧНОЕ числойоу\n";
		exit(0);
	}
}

void zad2()
{
	std::string a;
	std::cout << "Введите 4 знач число = ";
	std::cin >> a;
	if (size(a) == 4)
	{
		std::cout << a[1] << a[0] << a[3] << a[2];
	}
	else
	{
		std::cout << "\nНе 4 - знач!!";
		exit(0);
	}
}

void zad3()
{
	int a{}, max = INT_MIN;
	for (int i = 1; i < 8; i++)
	{
		std::cout << "\nВведите " << i << " - число ";
		std::cin >> a;
		if (a > max)
		{
			max = a;
		}
	}
	std::cout << "\nmax = " << max;
}
