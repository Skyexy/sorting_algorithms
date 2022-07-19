#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array to sort
 * @size: size of array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size __attribute__((unused)))
{
    size_t i;
    size_t j;
    int temp;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < (size - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
                print_array(array, size);
            }
        }
    }
}
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}