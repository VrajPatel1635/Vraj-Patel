// This c program will print star pattern which is below this line.
//       *
//      * *
//     * * *
//    * * * *
//   * * * * *
//    * * * *
//     * * *
//      * *
//       *
#include<stdio.h>

int main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int j = n; j >= i; j--) {
            printf(" ");
        }
        for(int k = 1; k <= i; k++) {
            printf(" *");
        }
        printf("\n");
    }

    for(int i = n-1; i >= 1; i--) {
        for(int j = i; j <= n; j++) {
            printf(" ");
        }
        for(int k = i; k>=1; k--) {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}