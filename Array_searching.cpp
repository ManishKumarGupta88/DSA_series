#include<iostream>
using namespace std;

int main() {
    int n, item;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[10];  // Maximum array size is 10
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter value to search: ";
    cin >> item;

    // Searching for the item
    bool found = false;
    for(int i = 0; i < n; i++) {
        if(arr[i] == item) {
            found = true;
            cout << "Item found at position: " << i + 1 << endl;
            break;
        }
    }

    if(!found) {
        cout << "Item not found!" << endl;
    }

    return 0;
}
