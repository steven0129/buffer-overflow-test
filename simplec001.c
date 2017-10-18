#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void func(char *str)
{
    char buffer[24];
    int *ret;
    strcpy(buffer, str);
}

int main(int argc, char **argv)
{
    int x;
    x = 0;
    func(argv[1]);
    x = 1;
    printf("x is 1\n");
    printf("x is 0\n");
    printf("press any key to be continued...");
    fgetc(stdin);
}