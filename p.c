#include <stdio.h>

// Function to convert decimal to binary and store in an array
void decimalToBinary(int decimalNum, int binaryArray[], int *numBits) {
    int index = 0;
    
    // Convert decimal to binary
    while (decimalNum > 0) {
        binaryArray[index] = decimalNum % 2;
        decimalNum /= 2;
        index++;
    }
    
    *numBits = index;
}

int main() {
    int decimalNum, binaryArray[32], numBits, i;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    // Convert decimal to binary and store in the array
    decimalToBinary(decimalNum, binaryArray, &numBits);

    // Display the binary representation
    printf("Binary representation: ");
    for (i = numBits - 1; i >= 0; i--) {
        printf("%d", binaryArray[i]);
    }
    printf("\n");

    return 0;
}

