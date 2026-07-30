#include <stdio.h>

int main() {
    int arr[5] = {5,3,0,1,2}; // {4,5,3,2,1} //{3,4,5,2,1}
    int n = 5;

    // Print array before sorting
    printf("Array before sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Insertion sort algorithm
    for (int i = 1; i < n; i++) {
        int key = arr[i]; // 4 el // key = arr[2] = 3
        int j = i - 1; // 1-1 = 0 // j = 1

        // Move elements of arr[0..i-1] that are greater than key to one position ahead of their current position
        while (j >= 0 && arr[j] > key) { //arr[0]=5, 5>4 -> yes //2nd time -1>=0 false loop terminated // again for i = 2 and j = 1
        // 1>=0 yes and arr[1]=5>key-> 5>3 yes loop run // now 0>=0 yes arr[0]>3 -> 4>3 yes loop run
            arr[j + 1] = arr[j]; // arr[1]= 5 // arr[2] = 5 // arr[1]=arr[0] = 4
            j--; // 0-1 = -1 // j = 1-1 = 0 // 0-1=-1
            // now 0>=0 yes arr[0]>3 -> 4>3 yes loop run // -1>=0 false
        }
        arr[j + 1] = key; // arr[-1+1]= arr[0]=4 //  arr[-1+1] = arr[0]=3
        // i++ = 2
        // i++ = 3
    }

    // Print array after sorting
    printf("Array after sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
