#include <iostream>
#include <Windows.h>

int fruit();
int Ovosh();
int tea();
void start();
double Disc(double total, double discount);

const double DISCOUNT_THRESHOLD = 1000;  // Порог для скидки 13%
const double PERSIL_DISCOUNT = 0.05;      // Скидка на петрушку
const double GENERIC_DISCOUNT = 0.13;     // Общая скидка

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    start();
    return 0;
}

void start() {
    int choose{};
    double totalSum = 0.0;

    std::cout << "\t\t\t\t\nСоки никиты\n";
    std::cout << "Категории:\n1) Фруктовые\n2) Овощные\n3) Чаи\n";
    std::cin >> choose;

    if (choose == 1) {
        totalSum += fruit();
    }
    else if (choose == 2) {
        totalSum += Ovosh();
    }
    else if (choose == 3) {
        totalSum += tea();
    }
    else {
        std::cout << "Неверный выбор\n";
        return;  
    }


    double overallDiscount = (totalSum > DISCOUNT_THRESHOLD) ? GENERIC_DISCOUNT : 0.0;
    double finalCost = Disc(totalSum, overallDiscount);

    std::cout << "Итоговая сумма до скидки: " << totalSum << " руб.\n";
    if (overallDiscount > 0) {
        std::cout << "Скидка 13% применена на весь чек!\n";
    }
    std::cout << "Итоговая сумма после скидки: " << finalCost << " руб.\n";
    start();  
}

int fruit() {
    int choose{}, k{};
    std::cout << "\n1) Яблочный - 50р\n2) Апельсиновый - 70р\n3) Абрикосовый - 52р\n4) Грушевый - 122р\n0) Выход\n";
    std::cin >> choose;

    if (choose < 0 || choose > 4) {
        std::cout << "Неверный выбор\n";
        return 0;
    }

    if (choose == 0) {
        return 0;
    }

    std::cout << "Кол-во: ";
    std::cin >> k;

    if (k < 0) {
        std::cout << "Некорректное количество.\n";
        return 0;
    }

    switch (choose) {
    case 1: return k * 50;
    case 2: return k * 70;
    case 3: return k * 52;
    case 4: return k * 122;
    default: return 0;
    }
}

int Ovosh() {
    int choose{}, k{};
    std::cout << "\n1) Томатный - 20р\n2) Луковый - 30р\n3) Огуречный - 121р\n0) Выход\n";
    std::cin >> choose;

    if (choose < 0 || choose > 3) {
        std::cout << "Неверный выбор\n";
        return 0;
    }

    if (choose == 0) {
        return 0;
    }

    std::cout << "Кол-во: ";
    std::cin >> k;

    if (k < 0) {
        std::cout << "Некорректное количество.\n";
        return 0;
    }

    switch (choose) {
    case 1: {
        int paidLiters = k - (k / 4);  // Каждый 4-ый литр в подарок
        return paidLiters * 30;
    }
    case 2: return k * 20;
    case 3: return k * 121;
    default: return 0;
    }
}

int tea() {
    int choose{}, k{};
    std::cout << "\n1) Чесночный - 200р\n2) Петрушка - 500р\n0) Выход\n";
    std::cin >> choose;

    if (choose < 0 || choose > 2) {
        std::cout << "Неверный выбор\n";
        return 0;
    }

    if (choose == 0) {
        return 0;
    }

    std::cout << "Кол-во: ";
    std::cin >> k;

    if (k < 0) {
        std::cout << "Некорректное количество.\n";
        return 0;
    }

    switch (choose) {
    case 1: return k * 200;
    case 2: {
        double price = k * 500;
        if (k >= 3) {
            price -= price * PERSIL_DISCOUNT;  
        }
        return price;
    }
    default: return 0;
    }
}

double Disc(double total, double discount) {
    return total * (1 - discount);
}
