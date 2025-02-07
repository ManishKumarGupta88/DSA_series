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

    cout << "Enter value to delete: ";
    cin >> item;

    // Deleting the item
    int i;
    for(i = 0; i < n; i++) {
        if(arr[i] == item) {
            break;
        }
    }

    if(i == n) {
        cout << "Item not found!" << endl;
    } else {
        for(int j = i; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        n--;  // Reduce array size
    }

    // Display the updated array
    cout << "Updated array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
