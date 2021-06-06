#ifndef VECTOR_H
#define VECTOR_H

typedef struct _vector vector;

struct _vector 
{
    int size;
    int *data;
    int count_elem;
};

void create_vector(vector *v); // создать вектор
int size(vector *v); // вычислить размер вектора 
void resize(vector *v); // увеличить размер вектора на одну ячейку размером size_of(int)
void push_back(vector *v, int value); // добавление элемента в конец вектора  
int count_elements(vector *v); // вычисление кол-ва элементов 
int is_empty(vector *v); // проверка на пустоту 
void print_vector(vector *v); // печать вектора
void destroy(vector *v); // уничтожение вектора :-|

#endif