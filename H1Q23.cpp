#include <stdio.h>

int main() {
    int reverse = 0, number, temp;
    printf("Enter a number: \n");
    scanf("%d", &number);
    temp = number;

    while (temp != 0) {
        reverse = reverse * 10 + temp % 10;  // Corrected line to construct the reverse number
        temp /= 10;
    }

    if (number == reverse) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }
    
    return 0;
}

