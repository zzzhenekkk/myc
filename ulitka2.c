#include <stdio.h>
#include <stdlib.h>


int main () {
    int m, n;
    if (scanf("%d %d", &m, &n) == 2 && m > 0 && n > 0) {
        int mas[m][n];

        int ch = 1;
        int sr = 0, sc = 0, er = (m-1), ec = (n-1);
        while (sr < er && sc < ec)  {
            for (int j = sc; j <= ec; ++j) {
                mas[sr][j] = ch;
                ch++;
            }
            sr++;


            for (int j = sr; j <= er; ++j) {
                mas[j][ec] = ch;
                ch++;
            }
            ec--;

            for (int j = ec; j >= sc; --j) {
                mas[er][j] = ch;
                ch++;
            }
            er--;

            for (int j = er; j >= sr; --j) {
                mas[j][sc] = ch;
                ch++;
            }
            sc++;

        }

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                printf("%3d ", mas[i][j]);
            }
            printf("\n");  
        }
    }
    return 0;
}
