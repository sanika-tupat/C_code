#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a = 5;

    int* b = &a;
    float* c = &a;

    printf("%p\n",b);
    *b = 55;  
    printf("%p %d\n",b,*b);

    return 0;
}