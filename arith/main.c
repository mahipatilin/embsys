#include <stdio.h>
int count=0;
int pressure;

int add(int, int);

int main(int argc, char const *argv[])
{
    printf("Add: %d\n", add(10,20));
    printf("Sub: %d\n", sub(10,20));
    return 0;
}
