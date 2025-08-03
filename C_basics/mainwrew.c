#include <stdio.h>
#include <string.h>

// Function to convert binary to decimal
int binaryToDecimal(char binary[]) {
    int decimal = 0;
    int len = strlen(binary);
    for (int i = 0; i < len; i++) {
        if (binary[i] == '1') {
            decimal += 1 << (len - 1 - i);  // Using bit shifting instead of pow()
        } else if (binary[i] != '0') {
            printf("Invalid binary digit '%c'\n", binary[i]);
            return -1;
        }
    }
    return decimal;
}

// Function to convert decimal to hexadecimal
void decimalToHex(int decimal) {
    if (decimal == 0) {
        printf("Hexadecimal: 0\n");
        return;
    }

    char hex[20];
    int i = 0;

    while (decimal != 0) {
        int remainder = decimal % 16;
        hex[i++] = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'A');
        decimal /= 16;
    }

    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%c", hex[j]);
    printf("\n");
}

int main() {
    char binary[65];
    printf("Enter a binary number: ");
    scanf("%64s", binary);  // Limits input to avoid buffer overflow

    int decimal = binaryToDecimal(binary);
    if (decimal != -1) {
        decimalToHex(decimal);
    }

    return 0;
}