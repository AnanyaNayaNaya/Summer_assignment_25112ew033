#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    set<int> s;

    for (int i = 0; i < n; i++) {
        s.insert(arr[i]);
    }

    cout << "Array after removing duplicates: ";

    for (auto x : s) {
        cout << x << " ";
    }

    return 0;
}