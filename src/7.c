int main(void) {
    int num1 = 5;
    int num2 = 6;
    int result = add_numbers(num1, num2);
    printf("The sum of %d and %d is %d", num1, num2, result);
}
int add_numbers(int a, int b) {
    return a + b;
}
