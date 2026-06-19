#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 0, 2, 0, 3, 4, 0, 5};
    int n = 8;

    int j = 0; // position for non-zero element

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    cout << "Array after moving zeros to end: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}