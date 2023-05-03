#include<stdio.h>
int main()
{
    int i, array[10], n, search, first, last, middle;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

  printf("Enter %d elements(in ascending order): \n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);
    printf("\nEnter element to be search: ");
    scanf("%d", &search);
    first = 0;
    last = 9;
    middle = (first+last)/2;
    while(first <= last)
    {
        if(array[middle]<search)
            first = middle+1;
        else if(array[middle]==search)
        {
            printf("\nThe number, %d found at Position %d", search, middle);
            break;
        }
        else
            last = middle-1;
        middle = (first+last)/2;
    }
    if(first>last)
        printf("\nThe number, %d is not found in given Array", search);
    return 0;
}
