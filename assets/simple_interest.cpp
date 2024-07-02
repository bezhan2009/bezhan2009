#include <iostream>
#include <string>

struct Person {
    std::string name;
    int age;
};

void get_people(Person* people, int size);
void get_person(Person* people, int size, int index);

int main() {
    Person people[3];

    // Инициализация массива структур
    people[0].name = "Алексей";
    people[0].age = 30;

    people[1].name = "Мария";
    people[1].age = 25;

    people[2].name = "Иван";
    people[2].age = 40;

    while (true) {
        std::cout << "Главное меню\n";
        std::cout << "1. Вывести информацию о всех людях\n";
        std::cout << "2. Вывести информацию о конкретном человеке\n";
        std::cout << "0. Выйти из программы\n";
        int cmd = 0;
        std::cin >> cmd;
        switch (cmd) {
            case 1:
                get_people(people, 3);
                break;
            case 2: {
                int index;
                std::cout << "Введите индекс человека (0-2): ";
                std::cin >> index;
                if (index >= 0 && index < 3) {
                    get_person(people, 3, index);
                } else {
                    std::cout << "Некорректный индекс\n";
                }
                break;
            }
            case 0:
                return 0;
            default:
                std::cout << "Неизвестная команда\n";
        }
    }

    return 0;
}

void get_people(Person* people, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << "Name: " << people[i].name << ", Age: " << people[i].age << "\n";
    }
}

void get_person(Person* people, int size, int index) {
    std::cout << "Name: " << people[index].name << ", Age: " << people[index].age << "\n";
}
