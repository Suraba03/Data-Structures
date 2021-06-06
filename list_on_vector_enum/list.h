#ifndef list_h
#define list_h

#include <stdlib.h>
#include <stdio.h>

typedef enum {
    STEP_FORW = 0, // 0
    STEP_BACK, // 1
    STEP_LEFT, // 2
    STEP_RIGHT, // 3
    CH_DIR_180, // 4
} Actions;

typedef struct list {
    int number_of_elements;
    int capacity;
    Actions *elements;
} list;

void create_list(list *l,int capacity); // создание списка
void printAction(Actions action); // печать действия по значению enum
int is_list_empty(list *l); // проверка списка на пустоту 
int size(list *l); // вычисление размера списка
void resize(list *l); // увеличение памяти (+size_of(int)) под данные в списке
void push_back(list *l, Actions act); // добавление элемента в конец списка
void print_list(list *l); // печать списка
void delete_element_by_index(list *l); // удалить элемент по индексу
void add_by_index(list *l); // добавление элемента по индексу
int number_of_elements(list *l); // кол-во элементов в списке
void add_to_K_elements(list *l, Actions act, int k); // добавлений копий act в конец списка до того, как в списке не станет k элементов

#endif