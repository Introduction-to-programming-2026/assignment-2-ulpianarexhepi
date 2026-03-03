#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // TODO:
    // if argc == 2 print hello, argv[1]
    // else print hello, world
    if (argc == 2)
    {
        printf("Hello, %s\n", argv[1]);
    } else
    {
        printf("hello, world\n");
    }
    return 0;
}
