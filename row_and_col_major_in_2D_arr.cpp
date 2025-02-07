
#include<iostream>
using namespace std;

int main() {
    // Array details
    int baseAddress = 1000;
    int w = 4; // size of each element in bytes
    int lowerBound = 0;

    // 2D array dimensions
    int row = 3;
    int cols = 4;

    // Variables to store indices
    int rowIndex, colIndex;

    
    cout << "Enter row index (0 to " << row - 1 << "): ";
    cin >> rowIndex;
    cout << "Enter column index (0 to " << cols - 1 << "): ";
    cin >> colIndex;

    // Check for valid indices
    if (rowIndex < 0 || rowIndex >= row || colIndex < 0 || colIndex >= cols) {
        cout << "Invalid indices. Please enter values within the specified range." << endl;
        return 1;
    }

    // Calculate addresses
    int rowMajorAddress = baseAddress + w * ((rowIndex * cols) + colIndex);
    int columnMajorAddress = baseAddress + w * ((colIndex * row) + rowIndex);
    
    cout << "Row-major address of element [" << rowIndex << "][" << colIndex << "] is: " << rowMajorAddress << endl;
    cout << "Column-major address of element [" << rowIndex << "][" << colIndex << "] is: " << columnMajorAddress << endl;

    return 0;
}
