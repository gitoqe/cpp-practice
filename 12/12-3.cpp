#include <iostream>

int power(int number, int exponent)
{
    int result = number;
    while (exponent > 1)
    {
        result *= number;
        exponent--;
    }
    return result;
}

int main()
{
    // 3. Функция, возвращающая заданную степень числа (только положительные).
    std::cout << power(7, 1);
    return 0;
}
