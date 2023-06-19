#include <iostream>

void swap(float* ptr1, float* ptr2) {
    float temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    float variable1 = 10.5;
    float variable2 = 5.2;
    
    float* ptr1 = &variable1;
    float* ptr2 = &variable2;
    
    std::cout << "Адрес переменной 1: " << ptr1 << std::endl;
    std::cout << "Адрес переменной 2: " << ptr2 << std::endl;
    
    std::cout << "Значение переменной 1: " << *ptr1 << std::endl;
    std::cout << "Значение переменной 2: " << *ptr2 << std::endl;
    
    swap(ptr1, ptr2);
    
    std::cout << "После обмена:" << std::endl;
    
    std::cout << "Значение переменной 1: " << *ptr1 << std::endl;
    std::cout << "Значение переменной 2: " << *ptr2 << std::endl;
    
    return 0;
}