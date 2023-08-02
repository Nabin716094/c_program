#include <stdio.h>
void main() {
    int n, i, searchAge,ages[n],foundIndex = -1;
    printf("Enter the number of people: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter age of person %d: ", i + 1);
        scanf("%d", &ages[i]);
    }
    printf("Enter the age to search for: ");
    scanf("%d", &searchAge);  
    for (i = 0; i < n; i++) {
        if (ages[i] == searchAge) {
            foundIndex = i;
        }
    }
    if (foundIndex != -1) {
        printf("Age %d is found at index %d.\n", searchAge, foundIndex);
    } else {
        printf("Age %d is not found in the array.\n", searchAge);
    }
}

