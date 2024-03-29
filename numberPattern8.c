/* this code will print following pattern:
if input is 3
3 3 3 3 3
3 2 2 2 3
3 2 1 2 3
3 2 2 2 3
3 3 3 3 3
*/

#include <stdio.h>


int main() 
{

    int n, i, j, k;
    int a = n / 2;
    scanf("%d", &n);
  	
      for(int i=0; i<2*n-1; i++){
          for(int j=0; j<2*n-1; j++) {
            k = i < j ? i : j;
              if(2*n-1-i-1 < k) {
                  k = 2*n-1-i-1;
              } if(2*n-1-j-1<k) {
                k = 2*n-1-j-1;
              }
              printf("%d ", n-k);
          }
        printf("\n");
      }
    return 0;
}