#ifndef list_h
#define list_h

#include <stdlib.h>
#include <stdio.h>

typedef struct list {
    int number_of_elements;
    int capacity;
    int *elements;
} list;

void create_list(list *l, int capacity); // создание списка
int is_list_empty(list *l); // проверка списка на пустоту 
int size(list *l); // вычисление размера списка
void resize(list *l); // увеличение памяти (+size_of(int)) под данные в списке
void push_back(list *l, int act); // добавление элемента в конец списка
void print_list(list *l); // печать списка
void delete_element_by_index(list *l); // удаление элемента по индексу
void add_by_index(list *l); // добавление элемента по индексу
int number_of_elements(list *l); // кол-во элементов в списке 
void add_to_K_elements(list *l, int act, int k); // добавлений копий act в конец списка до того, как в списке не станет k элементов 
void list_input(list *l); // ввод списка с терминала
list *lists_concat(list *l1, list *l2); // конкатенация двух списков 

#endif