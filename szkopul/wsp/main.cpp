#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <unordered_map>
#include <math.h>
using namespace std;
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Wybieramy pivot (ostatni element)
    int i = low - 1;  // Indeks mniejszego elementu

    for (int j = low; j <= high - 1; j++) {
        // Jeśli bieżący element jest mniejszy od pivota, to go zamieniamy
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    // Zamieniamy pivota z elementem na i+1, aby pivot znalazł się na właściwym miejscu
    swap(arr[i + 1], arr[high]);
    return i + 1;  // Zwracamy indeks, na którym znajduje się pivot
}
void quicksort(int arr[], int low, int high) {
    if (low < high) {
        // partition zwraca indeks, na którym znajduje się pivot
        int pi = partition(arr, low, high);

        // Sortujemy dwie części: przed pivotem i za pivotem
        quicksort(arr, low, pi - 1);  // Lewa część
        quicksort(arr, pi + 1, high); // Prawa część
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    long a;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> a;
    int* arr = new int[a + 1];
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }
    cout << arr;
    quicksort(arr, 0, a - 1);
    for (int i; i < 10; i++) {
        cout << arr[a - i - 1] << " ";
    }
    return 0;
}
