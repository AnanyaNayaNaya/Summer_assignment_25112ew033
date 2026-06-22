#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int arr[] = {2, 7, 11, 15, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    unordered_set<int> s;

    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];

        if (s.find(complement) != s.end()) {
            cout << "Pair Found: "
                 << complement << " and "
                 << arr[i];
            return 0;
        }

        s.insert(arr[i]);
    }

    cout << "No Pair Found";
    return 0;
}