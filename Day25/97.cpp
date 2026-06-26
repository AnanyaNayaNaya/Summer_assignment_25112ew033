#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 3, 5};
    int b[] = {2, 4, 6};

    int i = 0, j = 0;

    while (i < 3 && j < 3) {
        if (a[i] < b[j])
            cout << a[i++] << " ";
        else
            cout << b[j++] << " ";
    }

    while (i < 3)
        cout << a[i++] << " ";

    while (j < 3)
        cout << b[j++] << " ";

    return 0;
}