#ifndef STRING_H
#define STRING_H

typedef struct _str str;

struct _str {
    int size;
    char *data;
    int count_elem;
};

int is_split(char c); // символы '\t', ' '

void create_str(str *string); // создать строку 
int size(str *string); // вычсиление вместимости 
void resize(str *string); // увеличение вместимости на один байт
void push_back(str *string, char simb); // добавление символа в конец строки
int cnt_words_inside(str *str); // функция для void count_words(str *str)
void count_words(str *str); // подсчет и вывод кол-ва слов  

#endif