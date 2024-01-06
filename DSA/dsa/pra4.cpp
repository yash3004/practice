#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Initialize a 2D vector with predefined values
    vector<vector<int> > matrix{
        {1, 1, 0, 0, 0},
        {0, 1, 1, 0, 0},
        {0, 0, 1, 0, 1},
        {1, 0, 0, 0, 1},
        {0, 1, 0, 1, 1}
    };

    // Display the initialized 2D vector
    cout << "Initialized 2D vector:" << endl;
    for (const auto& row : matrix) {
        for (int element : row) {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}
