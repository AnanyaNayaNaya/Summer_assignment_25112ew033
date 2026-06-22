#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 2, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int maxFreq = 0, element;

    for (auto x : freq) {
        if (x.second > maxFreq) {
            maxFreq = x.second;
            element = x.first;
        }
    }

    cout << "Element with Maximum Frequency: " << element;
    cout << "\nFrequency: " << maxFreq;

    return 0;
}