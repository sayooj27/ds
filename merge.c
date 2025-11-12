#include <stdio.h>

int main() {
    int a[50], b[50], m[100];
    int n1, n2, n, i, j, temp;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements: ");
    for (i = 0; i < n1; i++) 
    scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements: ");
    for (i = 0; i < n2; i++) 
    scanf("%d", &b[i]);
    
    n = n1 + n2;
    for (i = 0; i < n1; i++) m[i] = a[i];
    for (j = 0; j < n2; j++) m[i++] = b[j];

    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (m[i] > m[j]) {
                temp = m[i];
                m[i] = m[j];
                m[j] = temp;
            }

    printf("\nSorted merged array:\n");
    for (i = 0; i < n; i++) printf("%d ", m[i]);
    return 0;
}

