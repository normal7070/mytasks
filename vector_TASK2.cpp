#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main() {
    const int MAX_VECTOR_SIZE = 5; 

    vector<int> intger;

    try {
        cout << "Enter integers (Max limit: " << MAX_VECTOR_SIZE << "):" << std::endl;

        while (true) {
            int userInput;
            cout << "Enter integer: ";
            
            if (!(cin >> userInput)) {
                cin.clear();
                cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
                throw std::invalid_argument("Invalid input. Please enter an integer.");
            }

            if (intger.size() >= MAX_VECTOR_SIZE) {
                throw length_error("Vector size exceeds the limit.");
            }

            intger.push_back(userInput);
        }
    }
    catch (const std::invalid_argument& e) {
        cerr << "Error: " << e.what() << std::endl;
    }
    catch (const std::length_error& e) {
        cerr << "Error: " << e.what() << std::endl;
    }

    // Display the entered integers
    cout << "\nEntered integers:" << std::endl;
    for (const auto& num : intger) {
        cout << num << " ";
    }
    cout << std::endl;

    return 0;
}
