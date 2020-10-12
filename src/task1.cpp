#include "task1.h"
#include <iostream>

int comp1(const void *a, const void *b){
    return *((int*)a)-*((int*)b);
}

int comp2(const void *a, const void *b){
    return *((double*)a) -*((double*)b);
}

int comp3(const void *_a, const void *_b){
    char *a = (char*)_a;
    char *b = (char*)_b;
    int a_sum = 0;
    int b_sum = 0;
    while (*a){
        a_sum += *a;
        a += 1;
    }
    while (*b){
        b_sum += *b;
        b += 1;
    }
    return a_sum - b_sum;
}

int comp4(const void *_a, const void *_b){
    char *a = (char*)_a;
    char *b = (char*)_b;
    int a_sum = 0;
    int b_sum = 0;
    while (*a){
        a_sum += 1;
        a += 1;
    }
    while (*b){
        b_sum += 1;
        b += 1;
    }
    return a_sum - b_sum;
}

int comp5(const void *_a, const void *_b){
    char *a = (char*)_a;
    char *b = (char*)_b;
    int a_sum = 0;
    int b_sum = 0;
    while (*a){
        if (*a == ' ') a_sum += 1;
        a += 1;
    }
    while (*b){
        if (*b == ' ') b_sum += 1;
        b += 1;
    }
    return a_sum - b_sum;
}

int comp6(const void *_a, const void *_b){
    Person *a = (Person*)_a;
    Person *b = (Person*)_b;
    return a->age - b->age;
}