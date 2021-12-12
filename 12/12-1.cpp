#include <iostream>

bool isEven(int number)
{
    if (number % 2 == 0)
    {
        std::cout << "even\n";
        return true;
    }
    else
    {
        std::cout << "odd\n";
        return false;
    }
}

int main()
{
    // Функция, возвращающая и выводящая в консоль логический ответ "четно ли переданное число".
    isEven(7);
    return 0;
}
