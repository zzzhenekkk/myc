#include <stdio.h>
#include <stdlib.h>


int main () {
    int m, n;
    if (scanf("%d %d", &m, &n) == 2 && m > 0 && n > 0) {
        int mas[m][n];
        int mas2[n][m];

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                scanf("%d", &mas[i][j]);
            }
        }
        
        for (int m2 = 0; m2 < n; ++m2) {
            for (int n2 = 0; n2 < m; ++n2) {
                mas2[m2][n2] = mas[m-1-n2][m2];
            }
        }
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                printf("%d ", mas2[i][j]);
            }
            printf("\n");  
        }

    }
    return 0;
}
