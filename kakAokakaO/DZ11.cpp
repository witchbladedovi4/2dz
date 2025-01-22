#include <iostream>
//Три способа сортировки массива в C++
//
//Существует множество алгоритмов сортировки, но я расскажу о трех популярных способах :
//
//1. Сортировка пузырьком(Bubble Sort)
//
//Этот алгоритм сравнивает соседние элементы и меняет их местами, если они находятся в неправильном порядке.Процесс повторяется до тех пор, пока массив не будет отсортирован.


void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }    
    }
}


//2. Сортировка выбором(Selection Sort)
//
//Этот алгоритм делит массив на две части : отсортированную и неотсортированную.На каждой итерации он находит минимальный элемент из неотсортированной части и перемещает его в конец отсортированной части.


void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(arr[minIndex], arr[i]);
    }
}


//3. Сортировка слиянием(Merge Sort)
//
//Этот алгоритм использует метод "разделяй и властвуй".Он делит массив на две половины, рекурсивно сортирует каждую половину и затем объединяет их.


void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int* L = new int[n1];
    int* R = new int[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    delete[] L;
    delete[] R;
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main()
{
    int const size = 5;
    int arr[5]{ 5,3,2,3,1 };
    //bubbleSort(arr, size);
    selectionSort(arr, size);
    selectionSort(arr, size);
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    

    return 0;

}
