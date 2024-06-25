#pragma execution_character_set("utf-8")
#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

// ���������� �������, ����������� ��������� �� ������ ��������
void get_people(struct Person *people, int size);
void get_person(struct Person *people, int size, int index);

int main() {
    struct Person people[3];

    // ������������� ������� ��������
    strcpy(people[0].name, "�������");
    people[0].age = 30;

    strcpy(people[1].name, "�����");
    people[1].age = 25;

    strcpy(people[2].name, "����");
    people[2].age = 40;

    while (1) {
        printf("������� ����\n");
        printf("1. ������� ���������� � ���� �����\n");
        printf("2. ������� ���������� � ���������� ��������\n");
        printf("0. ����� �� ���������\n");
        int cmd = 0;
        scanf("%d", &cmd);
        switch (cmd) {
            case 1:
                get_people(people, 3);
                break;
            case 2: {
                int index;
                printf("������� ������ �������� (0-2): ");
                scanf("%d", &index);
                if (index >= 0 && index < 3) {
                    get_person(people, 3, index);
                } else {
                    printf("������������ ������\n");
                }
                break;
            }
            case 0:
                return 0;
            default:
                printf("����������� �������\n");
        }
    }

    return 0;
}

void get_people(struct Person *people, int size) {
    for (int i = 0; i < size; i++) {
        printf("Name: %s, Age: %d\n", people[i].name, people[i].age);
    }
}

void get_person(struct Person *people, int size, int index) {
    printf("Name: %s, Age: %d\n", people[index].name, people[index].age);
}
