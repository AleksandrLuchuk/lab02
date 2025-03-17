#include <iostream>
#include <string>

int main()
{
    // Объявляем переменную для хранения имени пользователя
    std::string name;

    // Запрашиваем имя пользователя
    std::cout << "Enter your name, please: ";
    std::cin >> name;

    // Выводим приветствие
    std::cout << "Hello world from " << name << "!" << std::endl;

    // Завершаем программу успешно
    return 0;
}
