#include <iostream>;
#include <Windows.h>;

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
	float s{}, t{};
	std::cout << "Введите расстояние до ажропорта (км)\n";
	std::cin >> s;
	std::cout << "Введите время за которое нужно доехать до аэропорта (ч)\n";
	std::cin >> t;
	std::cout << "Нужная скорость = " << s / t << " км/ч\n";
}


void zad2()
{
	int hour{}, min{}, sec{}, hour2{}, min2{}, sec2{};
	int start_min{}, end_min{};
	int ballanse{};
	std::cout << "Введите время начала пользования скутера\nЧас = ";
	std::cin >> hour;
	if (hour > 24)
	{
		std::cout << "\nНеверно указано время\n";
		exit(0);
	}
	std::cout << "\nВведите время начала пользования скутера\nМинуты = ";
	std::cin >> min;
	if (min > 60)
	{
		std::cout << "\nНеверно указано время\n";
		exit(0);
	}
	std::cout << "\nВведите время начала пользования скутера\nСекунды = ";
	std::cin >> sec;
	if (sec > 60)
	{
		std::cout << "\nНеверно указано время\n";
		exit(0);
	}
	std::cout << "\nВведите время конца поездки \nЧас = ";
	std::cin >> hour2;
	if (hour2 > 24)
	{
		std::cout << "\nНеверно указано время\n";
		exit(0);
	}
	std::cout << "\nВведите время конца поездки \nМинуты = ";
	std::cin >> min2;
	if (min2 > 60)
	{
		std::cout << "\nНеверно указано время\n";
		exit(0);
	}
	std::cout << "\nВведите время конца поездки \nСекунды = ";
	std::cin >> sec2;
	if (sec2 > 60)
	{
		std::cout << "\nНеверно указано время\n";
		exit(0);
	}
	start_min = (hour * 60) + (sec / 60) + min;
	end_min = (hour2 * 60) + (sec2 / 60) + min2;
	ballanse = (end_min - start_min) * 2;
	std::cout << "\nК оплате: " << ballanse << " Гривны\n";
}

float Sto(float s, float rashod, float benz);
void zad3()
{
	float rashod{}, s{}, benz1{}, benz2{}, benz3{}, out1{}, out2{}, out3{};
	std::cout << "\nВведите растояние в км: = ";
	std::cin >> s;
	std::cout << "\nВведите расход бензина на 100км = ";
	std::cin >> rashod;
	std::cout << "\nСтоимость 1 бензина = ";
	std::cin >> benz1;
	std::cout << "\nСтоимость 2 бензина = ";
	std::cin >> benz2;
	std::cout << "\nСтоимость 3 бензина = ";
	std::cin >> benz3;
	std::cout << "Стоимость 1 поездки = " << Sto(s, rashod, benz1) << "\n";
	std::cout << "Стоимость 2 поездки = " << Sto(s, rashod, benz2) << "\n";
	std::cout << "Стоимость 3 поездки = " << Sto(s, rashod, benz3) << "\n";

}

float Sto(float s, float rashod, float benz)
{
	return s / 100 * rashod * benz;
}