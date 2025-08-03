#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a, &b, &c);
    if(a < 0 || b < 0 || c < 0) {
        printf("Numbers must be non-negative.\n");
    } else {
        printf("\nEnter your choice of operation(+, -, *, /, %%): ");

        char op;
        scanf(" %c", &op);
        switch(op) {
            case '+':
                printf("Result: %d\n", a + b + c);
                break;
            case '-':
                printf("Result: %d\n", a - b - c);
                break;
            case '*':
                printf("Result: %d\n", a * b * c);
                break;
            case '/':
                if(b == 0 || c == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    printf("Result: %d\n", a / b / c);
                }
                break;
            case '%':
                if(b == 0 || c == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    printf("Result: %d\n", a % b % c);
                }
                break;
            default:
                printf("Invalid operation.\n");
                break;
        }
    }
}