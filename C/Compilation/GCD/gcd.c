#include <stdio.h>

int main() {
    
    int num1, num2;
   
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int result = gcd(num1, num2);
    printf("GCD of %d and %d is %d\n", num1, num2, result);

    return 0;
}

int gcd(int n, int m) {
    while (m) {
        int temp = m;
        m = n % m;
        n = temp;
    }
    return n;
}
