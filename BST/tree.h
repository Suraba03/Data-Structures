#ifndef _TREE_H_
#define _TREE_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct tree {
    int value;
    struct tree *right;
    struct tree *left;
} tree;

tree *tree_node_create(int crt_value); // создание узла
tree *search(tree *root, int srch_value); // поиск узла в дереве по значению 
void print_tree(tree *root, int level); // печать дерева в горизонтальном виде
tree *tree_find_minimum(tree *root); // поиск минимума в дереве
tree *tree_add_node(tree *root, int add_value); // добавить узел в дерево по значению
tree *tree_delete_node(tree *root, int del_value); // удаление узла дерева по значению
void inorder(tree *root); // прямой обход в глубину
int checkUtil(tree *root, int level, int *leafLevel); //функция для check(...)
int check(tree *root); // проверка: все ли листья на одному уровне
void delete_tree(tree *curr); // удаление дерева

#endif