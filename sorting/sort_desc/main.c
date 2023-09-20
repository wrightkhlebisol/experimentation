#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

int main(void)
{
    int arr[MAX];

    for (int i = 0; i < MAX; i++)
        arr[i] = arc4random_uniform(MAX + 1);

    //sorting the array
    // Ascending sort
    for (int i = 0; i < MAX; i++)
    {
        for (int j = i + 1; j < MAX; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        } 
    }

    for (int i = 0; i < MAX; i++)
        printf("%d ", arr[i]);
    
    // Descending sort
    for () 

    for (int i = 0; i < MAX; i++)
        printf("%d ", arr[i]);
    
    return (0);
}
