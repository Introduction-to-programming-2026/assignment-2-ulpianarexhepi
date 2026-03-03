// Missing cs50.h, variable's type, semicolon, %s, and second printf argument.
#include <cs50.h>
#include <stdio.h>

int main(void)
{

    string name = get_string("What's your name? ");
    printf("hello, %s\n", name);
}
