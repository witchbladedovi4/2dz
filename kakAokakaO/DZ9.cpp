#include <iostream>
#include <Windows.h>


void zad1();
void zad2();

int main() 
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    zad1();
    zad2();

    return 0;
}

void zad1()
{
    const int size = 100;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100 + 1;
    }
    std::cout << "Массив: \n";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << '\n';
    int MinSum(int arr[], int n, int ii = 0, int minSum = INT_MAX, int minIndex = 0, int Sum = 0);
    int result = MinSum(arr, size);
    std::cout << "Минимальная сумма начинается с индекса: " << result << '\n';

}

int MinSum(int arr[], int n, int ii = 0, int minSum = INT_MAX, int minIndex = 0, int Sum = 0)
{
    if (ii >= n - 10)
    {
        return minIndex;
    }

    if (ii == 0)
    {
        Sum = 0;
        for (int i = 0; i < 10; i++)
        {
            Sum += arr[i];
        }
    }
    else {
        Sum += arr[ii + 9] - arr[ii - 1];
    }

    if (Sum < minSum)
    {
        minSum = Sum;
        minIndex = ii;
    }

    return MinSum(arr, n, ii + 1, minSum, minIndex, Sum);
}

// Из двух целых
int findMax(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

//Из трёх целых
int findMax(int a, int b, int c)
{
    return findMax(findMax(a, b), c);
}

//Одномерный массив
int findMax(const int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

//Двухмерный массив
int findMax(const int arr[][10], int rows)
{
    int max = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int findMax(const int arr[][2][10], int asd, int rows)
{
    int max = INT_MIN;
    for (int i = 0; i < asd; ++i) 
    {
        for (int j = 0; j < rows; j++)
        {
            for (int h = 0; h < 10; h++)
            {
                if (arr[i][j][h] > max)
                {
                    max = arr[i][j][h];
                }
            }
        }
       
    }
    return max;
}


void zad2() {
    int const size = 10;
    int const row = 3;
    int const colos = 2;

    // Тестирование для трёхмерного массива
    std::cout << "\n3 мерный массив \n";
    int threeD[colos][row][size] = {};
    for (int i = 0; i < colos; i++)
    {
        for (int j = 0; j < row; j++)
        {
            for (int h = 0; h < size; h++)
            {
                threeD[i][j][h] = rand() % 100;
                std::cout << threeD[i][j][h] << " ";
            }
            std::cout << '\n';
        }
        std::cout << '\n';
    }

   /* int max3D = findMax(threeD, colos, row); я правда долго пытался с этим 3 мерным массивом нгго он не хочет почему та (((((((ШЩФОЫВТАШРФИЫВАПРЫВАП
    std::cout << "Максимальное значение в трёхмерном массиве: " << max3D << '\n';*/
   
   
    //Одномерный массив

    int oneD[size] = {};
    for (int i = 0; i < size; i++)
    {
        oneD[i] = rand() % 10;
    }
    int max1Arr = findMax(oneD, 6);
    std::cout << "Максимальное значение в одномерном массиве: " << max1Arr << std::endl;


    // Тестирование для двумерного массива

    int twoD[row][size] = {};
    std::cout << "Массив:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            twoD[i][j] = rand() % 10;
            std::cout << twoD[i][j] << " ";
        }
        std::cout << "\n";
    }
    int max2D = findMax(twoD, row);
    std::cout << "Максимальное значение в двумерном массиве: " << max2D << std::endl;

   

    // Из двух целых
    int a = 122, b = 16;
    int maxTwoInts = findMax(a, b);
    std::cout << "Максимальное из двух целых: " << maxTwoInts << std::endl;

    // Из 3 целых
    int c = 15;
    int maxThreeInts = findMax(a, b, c);
    std::cout << "Максимальное из трех целых: " << maxThreeInts << std::endl;

}
