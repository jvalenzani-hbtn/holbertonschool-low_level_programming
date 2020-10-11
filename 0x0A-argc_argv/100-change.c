#include <stdio.h>
#include <stdlib.h>

/**
 * main - give me change
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
    int n = 0;
    int coins[5] = {25, 10, 5, 2, 1};
    int count = 0;
    int i = 0;

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }
    n = atoi(argv[1]);
    if (n <= 0){
        printf("0\n");
        return (count);
    }
    for (i = 0; i < 5; i++){
        while (n >= coins[i]){
            n -= coins[i];
            count++;
            if (n == 0){
                printf("%d\n", count);
                return(0);
            }
        }
    }
    return (0);
}
