#include <stdio.h>

int main() {
    int n, i, cookies, sum = 0;

    printf("Enter number of days: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter cookies sold on day %d: ", i + 1);
        scanf("%d", &cookies);
        sum += cookies;
    }

    printf("Total cookies sold in %d days = %d\n", n, sum);

    return 0;
}
