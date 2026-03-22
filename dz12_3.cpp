#include <iostream>
#include <fstream>

int main() {
    int size;
    
    std::cout << "Введите размер массива: ";
    std::cin >> size;
    
    int* arr = new int[size];
    
    for (int i = 0; i < size; ++i) {
        std::cout << "arr[" << i << "] = ";
        std::cin >> arr[i];
    }
    
    std::ofstream file("out.txt");
    
    file << size << std::endl;
    for (int i = size - 1; i >= 0; --i) {
        file << arr[i];
        if (i > 0) {
            file << " ";
        }
    }
    
    delete[] arr;
    file.close();
    
    return 0;
}
