#include <stdio.h>

typedef void (*FUNCTION)();

void Help();
void SayHello();
int Menu();

const FUNCTION menuOptionFunctions[2] = {
    SayHello,
    Help
};

int main() {
    int running = 1;

    Help();
    while (running)
    {
        running = Menu();
    }

    return 0;
}

void Help()
{
    printf("show the options...\n");
    printf("[0] Say hello\n");
    printf("[1] Help\n");
    printf("[2] Exit\n");
}

int Menu()
{
    int input;
    printf("enter your choice: ");
    scanf("%d", &input);

    if (input == 2) return 0;
    if (input < 0 || input > 2)
    {
        printf("invalid input\n");
    }
    else
    {
        menuOptionFunctions[input]();
    }
    return 1;
}

void SayHello()
{
    printf("Hello world\n");
}