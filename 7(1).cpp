#include <iostream>

int main() {
    float variable1 = 10.5;
    float variable2 = 5.2;
    
    float* ptr1 = &variable1;
    float* ptr2 = &variable2;
    
    float sum = *ptr1 + *ptr2;
    float difference = *ptr1 - *ptr2;
    
    std::cout << "Адрес переменной 1: " << ptr1 << std::endl;
    std::cout << "Адрес переменной 2: " << ptr2 << std::endl;
    
    std::cout << "Сумма: " << sum << std::endl;
    std::cout << "Разность: " << difference << std::endl;
    
    return 0;
}