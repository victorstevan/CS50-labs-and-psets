#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int population;
    printf("What is the initial Llama population?\n");
    do
    {
        scanf("%d", &population);
    }
    while (population < 9);

    // TODO: Prompt for end size
    int finalPopulation;
    printf("What is the final Llama population?\n");
    do
    {
        scanf("%d", &finalPopulation);
    }
    while (finalPopulation < population);
    
    
    //Define natality and mortality and set a variable n to the initial population
    int natality;
    int mortality;
    int n = population;
    int counter = 0;
    

    
    // TODO: Calculate number of years until we reach threshold
    
    //Calculate number iteratively, the counter representing the years;
    while (n < finalPopulation)
    {
        natality = n / 3;
        mortality = n / 4;
        n = n + natality - mortality;
        
        counter++;
    }
    // TODO: Print number of years
    
    printf("Years: %d\n", counter);
}