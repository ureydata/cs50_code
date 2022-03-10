#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        // Prompt user for height
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    char c1 = '#';
    char c2 = ' ';
    for (int row = 1; row <= height; row++)
    {
        // print space
        for (int j = 0; j < height - row; j++)
        {
            printf("%c", c2);
        }
        // print #
        for (int i = 0; i < row; i++)
        {
            printf("%c", c1);
        }
        printf("\n");
    }

}



