#include <stdlib.h>
#include <task1.h>

int main(){
    Person p[] = {
        {std::string("a"), 6},
        {std::string("a"), 5},
        {std::string("b"), 5},
    };
    int i[] = {1, 5, 35, 2, 142, -214, 55, -9, 0, 22, -34};
    double d[] = {1.0, 5.0, 35.535, 2.3, 142.00000001, -214.23, 55.61, -9.1, 0.0, 22.44, -34.5};
    
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
    qsort(p, sizeof(p)/sizeof(Person), sizeof(Person), comp6);
    qsort(i, sizeof(i)/sizeof(int), sizeof(int), comp1);
    qsort(d, sizeof(d)/sizeof(double), sizeof(double), comp2);
    qsort(s, sizeof(s)/sizeof(char*), sizeof(char*), comp3);
    qsort(s, sizeof(s)/sizeof(char*), sizeof(char*), comp4);
    qsort(s, sizeof(s)/sizeof(char*), sizeof(char*), comp5);
    
    return 0;
}