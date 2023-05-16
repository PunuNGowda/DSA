//Selection Sort Using User Defined Function;

#include <stdio.h>
void selectionSort(int arr[], int n)
{
int i, j, maxIndex, temp;
for (i = 0; i < n - 1; i++)
{
maxIndex = i;
for (j = i + 1; j < n; j++)
{
if (arr[j] > arr[maxIndex])
{
maxIndex = j;
}
}
temp = arr[i];
arr[i] = arr[maxIndex];
arr[maxIndex] = temp;
}
}
int main() {
int arr[100], n, i;
printf("Enter the number of elements: ");
scanf("%d", &n);
printf("Enter the elements:\n");
for (i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
}
selectionSort(arr, n);
printf("\nSorted array in descending order: ");
for (i = 0; i < n; i++)
{
printf("%d ", arr[i]);
}
return 0;
}
