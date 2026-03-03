#include <cs50.h>
#include <stdio.h>

// TODO: change N if you want more inputs
const int N = 3;

// TODO: implement this function
float average(int length, int array[]);

int main(void)
{
    int scores[N];

    // TODO: ask user for N scores and store them in scores[]
    // Example prompt: "Score: "
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_in("score:");
    }

    // TODO: print average
    // Example: printf("Average: %.2f\n", average(N, scores));
    printf("average: %.2f\n", average(N, scores));
}

float average(int length, int array[])
{
    // TODO: compute and return average
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return (float)sum / length;
}
