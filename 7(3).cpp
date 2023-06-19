#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;
    
    float* array = new float[size];
    
    std::srand(static_cast<unsigned int>(std::time(0)));
    
    for (int i = 0; i < size; ++i) {
        array[i] = static_cast<float>(std::rand()) / RAND_MAX;
        std::cout << "Адрес элемента " << i << ": " << &array[i] << ", Значение элемента " << i << ": " << array[i] << std::endl;
    }
    
    delete[] array;
    
    return 0;
}