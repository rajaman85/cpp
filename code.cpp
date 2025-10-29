#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;  // size of the array

    vector<char> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int m; // position (0-based)
    cin >> m;

    char newChar;
    cin >> newChar;

    // Insert the new character at position m
    arr.insert(arr.begin() + m, newChar);

    // Display updated array
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if (i != arr.size() - 1)
            cout << " ";
    }

    return 0;
}
