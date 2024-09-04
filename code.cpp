#include <iostream>
using namespace std;

void trianglePattern(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }
        cout << endl;
    }
}

void invertedTrianglePattern(int n) {
    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }
        cout << endl;
    }
}

void pyramidPattern(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }
        for (int j = i - 1; j >= 1; --j) {
            cout << j;
        }
        cout << endl;
    }
}

void diamondPattern(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }
        for (int j = i - 1; j >= 1; --j) {
            cout << j;
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; --i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }
        for (int j = i - 1; j >= 1; --j) {
            cout << j;
        }
        cout << endl;
    }
}

int main() {
    int choice, rows;
    cout << "Choose a pattern: " << endl;
    cout << "1. Triangle Pattern" << endl;
    cout << "2. Inverted Triangle Pattern" << endl;
    cout << "3. Pyramid Pattern" << endl;
    cout << "4. Diamond Pattern" << endl;
    cin >> choice;

    cout << "Enter the number of rows: ";
    cin >> rows;

    switch(choice) {
        case 1:
            trianglePattern(rows);
            break;
        case 2:
            invertedTrianglePattern(rows);
            break;
        case 3:
            pyramidPattern(rows);
            break;
        case 4:
            diamondPattern(rows);
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
