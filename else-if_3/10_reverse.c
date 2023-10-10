// 10. WAP to reverse 5 digit number
#include <stdio.h>

int main() {
    int num, reversedNum = 0;

    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    // Check if the number is indeed a 5-digit number
    if (num >= 10000 && num <= 99999) {
        while (num != 0) {
            int digit = num % 10;
            reversedNum = reversedNum * 10 + digit;
            num /= 10;
        }

        printf("Reversed number: %d\n", reversedNum);
    } else {
        printf("Please enter a valid 5-digit number.\n");
    }

    return 0;
}
