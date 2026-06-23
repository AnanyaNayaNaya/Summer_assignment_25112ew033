#include <iostream>
using namespace std;

int main() {
    int arr1[] = {10, 20, 30, 40};
    int arr2[] = {20, 40, 50, 60};

    int n1 = 4, n2 = 4;

    cout << "Common Elements: ";

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }

    return 0;
}