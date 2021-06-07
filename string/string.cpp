#include <iostream>
#include <cstdlib>
#include "string.h"

using namespace std;

int is_split(char c)
{
    return (c == '\t' || c == ' ');
}

void create_str(str *v)
{
    v->size = 0;
    v->data = (char *) malloc(sizeof(char) * v->size);
    v->count_elem = 0;
}

int size(str *v)
{
    return v->size;
}

void resize(str *v)
{
    v->size++;
    v->data = (char *) realloc(v->data, sizeof(char) * v->size);
}

void push_back(str *v, char simb)
{
    if (v->size == v->count_elem) {
        resize(v);
    }
    v->count_elem++;
    v->data[v->count_elem - 1] = simb;
}

int cnt_words_inside(str *str)
{
    int cnt = 0;
    for (int i = 0; i < size(str); i++) {
        if (str->data[i] == ' ') cnt++;
    }
    return cnt + 1;
}

void count_words(str *str)
{
    int flag = 1, flag2 = 0;
    char c;

    while ((c = getchar()) != EOF && c != '\n') {
        if (flag && is_split(c)) {
            push_back(str, c);   
            flag = 0;
        } else if (!is_split(c) && c != '\n') {
            push_back(str, c);   
            flag = 1;   
            flag2 = 1;         
        }
    }
    if (flag2) {
        cout << (cnt_words_inside(str)) << endl;
    } else if (flag2 && flag) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;        
    }
}
