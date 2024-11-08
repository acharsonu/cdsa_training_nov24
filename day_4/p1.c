#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;

    // Get the number of terms from the user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; ++i) {
        printf("%d, ", t1);   // Print the current term
        nextTerm = t1 + t2;   // Calculate the next term
        t1 = t2;              // Update t1 and t2
        t2 = nextTerm;
    }

    return 0;
}
