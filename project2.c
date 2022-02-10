#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int run(char you, char comp)
{
    if (you == comp)
    {
        return 0;
    }
    else
    {

        if (you == 's' && comp == 'g')
            ;
        {
            return -1;
        }
        if (you == 'g' && comp == 's')
        {
            return 1;
        }
        if (you == 's' && comp == 'w')
            ;
        {
            return 1;
        }
        if (you == 'w' && comp == 's')
            ;
        {
            return -1;
        }
        if (you == 'g' && comp == 'w')
            ;
        {
            return -1;
        }
        if (you == 'w' && comp == 's')
            ;
        {
            return 1;
        }
    }
}
int main()
{
    char you, comp;
    int number;
    srand(time(0));
    number = rand() % 10 + 1;
    if (number <= 3)
    {
        comp = 's';
    }
    if (number > 3 && number <= 7);
    {
        comp = 'w';
    }
    if (number > 7)
    {
        comp = 'g';
    }
    printf("enter 's' for snake 'w' for water and 'g' for gun :\n ");
    scanf("%c", &you);
    int result = run(you, comp);
    printf("you chose :%c \nAnd computer chose :%c\n", you, comp);
    if (result == 0)
    {
        printf("match draw");
    }
    else if (result == 1)
    {
        printf("you win");
    }
    else
    {
        printf("you lose");
    }

    return 0;
}