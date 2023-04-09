#include <stdio.h>
#include <cs50.h>

int main(void)

{
    // request user's name
    string user = get_string("What's your name? ");
    // greet the user
    printf("hello, %s\n", user);
}
