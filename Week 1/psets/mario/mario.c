#include <stdio.h>


int main(void)
{
    //Define and get the height
    printf("Give a height so we can reproduce a mario style pyramid!\n");
    printf("But be ware, the pyramid can't be higher than 8 bricks and of course, should be bigger than 1 brick\n");
    int height;
    printf("What is the height? ");
    do
    {
        scanf("%d", &height);
    }
    while (height < 1 || height > 8);
    
    
    //Look at the problem as if in a table with rows and columns, we observe that whenever the indices of the row and column summed are bigger than the height, we hava a brick.
    for (int i = 1; i <= height ; i++)
    {
        //2-Dimensional loop
        for (int j = 1; j <= height; j++)
        {
            //The logic, if column-indice + row-indice bigger than height, print a brick!
            if (i + j > height)
            {
                printf("#");
            } 
            else 
            {
                printf(" ");
            }
        }
        //Print a new line after every row
        printf("\n");
    }
    
    
    
}