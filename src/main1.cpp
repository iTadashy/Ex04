#include <stdlib.h>
#include <iostream>
#include <task1.h>

#define PRINT_ARR(arr) for (int _i = 0; _i < sizeof(arr)/sizeof(decltype(*arr)); ++_i) std::cout << arr[_i] << ", "; std::cout << '\n'

int main(){
    Person p[] = {
        {std::string("a"), 6},
        {std::string("a"), 5},
        {std::string("b"), 5},
    };
    int i[] = {1, 5, 35, 2, 142, -214, 55, -9, 0, 22, -34};
    double d[] = {1.0, 5.0, 35.535, 2.3, 142.00000001, -214.23, 55.61, -9.1, 0.0, 22.44, -34.5};
	//double d[] = {4.0, 3.0, 3.0, 2.4, 2.5, 2.1, -1};
    
    char const *s[] = {
        "New age",
        "Brew   ",
        "Double ",
        "Hop hop hop hop hop hop hop",
        "Job",
        "AAA",
        "aaa",
        "More",
        "more",
        "123",
        "1 2 3",
    };
    
    //qsort(p, 3, sizeof(Person), comp6);
    //qsort(p, sizeof(p)/sizeof(Person), sizeof(Person), comp6);
    std::cout << "Ints:" << '\n';
    PRINT_ARR(i);
    qsort(i, sizeof(i)/sizeof(int), sizeof(int), comp1);
    PRINT_ARR(i);
    std::cout << "Double:" << '\n';
    PRINT_ARR(d);
    qsort(d, sizeof(d)/sizeof(double), sizeof(double), comp2);
    PRINT_ARR(d);
    std::cout << "String val:" << '\n';
    PRINT_ARR(s);
    qsort(s, sizeof(s)/sizeof(char*), sizeof(char*), comp3);
    PRINT_ARR(s);
    std::cout << "String len:" << '\n';
    PRINT_ARR(s);
    qsort(s, sizeof(s)/sizeof(char*), sizeof(char*), comp4);
    PRINT_ARR(s);
    std::cout << "String ws:" << '\n';
    PRINT_ARR(s);
    qsort(s, sizeof(s)/sizeof(char*), sizeof(char*), comp5);
    PRINT_ARR(s);
    
    return 0;
}