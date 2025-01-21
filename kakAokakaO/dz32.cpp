#include <iostream>;
#include <Windows.h>;


int main()
{
	int chose{};
	float ballanse{}, rub{};
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	while (true)
	{
		std::cout << "Введите рубли: ";
		std::cin >> ballanse;
		std::cout << "\t\tКОнвентор\n1)Доллар\n2)Евро\n3)Юань\n4)Фарит\n5)Йена\n";
		std::cin >> chose;
		rub = ballanse / 100 * 95;
		if (chose == 1)
		{
			std::cout << "\nDollars: ";
			std::cout << rub / 100;
		}
		else if (chose == 2)
		{
			std::cout << "\nEuro: ";
			std::cout << rub / 110;
		}
		else if (chose == 3)
		{
			std::cout << "\nyuan: ";
			std::cout << rub / 13.83;
		}
		else if (chose == 4)
		{
			std::cout << "\nFaritsad";
			std::cout << rub / 0.002;
		}
		else if (chose == 5)
		{
			std::cout << "\nEnna";
			std::cout << rub / 0.6;

		}
		else
		{
			std::cout << "\nНет такогшо!";
			exit(0);
		}
		std::cout << "\nКоммка = " << ballanse / 100 * 5;
		while (true)
		{
			int chose1{};
			std::cout << "\nПовторим ?\n1)Да\n2)Нет ";
			std::cin >> chose1;
			if (chose1 == 1)
			{
				break;
			}
			if (chose1 == 2)
			{
				exit(0);
			}
		}
	}
	return 0;
}
