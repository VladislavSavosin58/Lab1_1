
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<tchar.h>
#include<Windows.h>

#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(0, "rus");

    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    int i;
    int t = 0;
    char Srch[20];
    char answer;
    int anser;
    struct student
    {
char famil[20];
char name[20], facult[20];
int Nomzach;
    } stud[3];

    for (i = 0; i < 3; i++)
    {
        printf("Введитефамилиюстудента\n"); scanf("%20s", stud[i].famil);
    }
    for (i = 0; i < 3; i++)
    {
        printf("Введитеимястудента %s\n", stud[i].famil); scanf("%20s", stud[i].name);
    }
    for (i = 0; i < 3; i++)
    {
        printf("Введитеназваниефакультетастудента %s %s\n", stud[i].famil, stud[i].name); scanf("%20s", stud[i].facult);
    }
    for (i = 0; i < 3; i++)
    {
        printf("Введитеномерзачётнойкнижкистудента %s %s\n", stud[i].famil, stud[i].name); scanf("%d", &stud[i].Nomzach);
    }
    while (1)
    {
        system("cls");
        printf("Выберитестолбецдляпоиска:\n");
        printf("1 - Фамилия студента\n");
        printf("2 - Имя студента\n");
        printf("3 - Название факультета студента\n");
        printf("4 - Номер зачётной книжки студента\n");
        scanf_s("%c", &answer, 1);
        switch (answer)
        {
        case('1'):
        {
            printf("Введите фамилию студента для поиска:");
            scanf("%s", Srch);
            for (i = 0; i < 3; i++)
            {
                if (strcmp(stud[i].famil, Srch) == 0)
                {
                    printf("Cтудент %s %s обучаетсянафакультете %s, номерзачётнойкнижки %d \n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
                    t = 1;
                }
            }
            if (t == 0) printf("Фамилия не найдена");
            return 0;
        }
        case('2'):
        {
            printf("Введите имя студента для поиска:");
            scanf("%s", Srch);
            for (i = 0; i < 3; i++)
            {
                if (strcmp(stud[i].name, Srch) == 0)
                {
                    printf("Cтудент %s %s обучаетсянафакультете %s, номерзачётнойкнижки %d \n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
                    t = 1;
                }
            }
            if (t == 0) printf("Имя не найдено");
            return 0;
        }
        case('3'):
        {
            printf("Введите название факультета студента для поиска:");
            scanf("%s", Srch);
            for (i = 0; i < 3; i++)
            {
                if (strcmp(stud[i].facult, Srch) == 0)
                {
                    printf("Cтудент %s %s обучаетсянафакультете %s, номерзачётнойкнижки %d \n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
                    t = 1;
                }
            }
            if (t == 0) printf("Название факультета не найдено");
            return 0;
        }
        case('4'):
        {
            printf("Введите номер зачётной книжки студента для поиска:");
            scanf("%d", &anser);
            for (i = 0; i < 3; i++)
            {
                if (anser == stud[i].Nomzach)
                {
                    printf("Cтудент %s %s обучаетсянафакультете %s, номерзачётнойкнижки %d \n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
                }

            }
            if (t == 0) printf("Номер зачётной книжки не найден");
            return 0;
        }
        }
    }
}
