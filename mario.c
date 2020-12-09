#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
        // Get number between 1 and 8.
    {
        
        height = get_int("Height: ");
    }
    // If number not between 1 and 8.
    while (height < 1 || height > 8);
    printf("\n");
    // Keep repeating loop until you get to max height of 8.
    for (int j = 1; j <= height; j++)
    {
        // Make a loop for number of spaces for each height.
        for (int k = j; k <= height - 1; k++)
        {
            printf(" ");
        }
        // Make a loop for number of hashes to print for each height.
        for (int l = 0; l < j; l++)
        {
            printf("#");
        }
        // Print gap
        {
            printf("  ");
        }
        // Print mirror image
        for (int l = 0; l < j; l++)
        {
            printf("#");
        }
        {
            printf("\n");
        }
    }
}