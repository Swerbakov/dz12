#include <iostream>
#include <fstream>

int main() {
    std::ifstream file("in.txt");
    
    int size;
    file >> size;
    
    int* arr = new int[size];
    
    for (int i = 0; i < size; ++i) {
        file >> arr[i];
    }
    
    for (int i = size - 1; i >= 0; --i) {
        std::cout << arr[i];
        if (i > 0) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
    
    delete[] arr;
    file.close();
    
    return 0;
}
