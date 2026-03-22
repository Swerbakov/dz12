#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("in.txt");
    std::string word;
    
    while (file >> word) {
        std::cout << word << std::endl;
    }
    
    file.close();
    
    return 0;
}
