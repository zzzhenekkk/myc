#include <stdio.h>
#include <stdlib.h>

int input(int * m, int * n);
int ** creat(int m, int n);
void fr(int ** mas, int m);
void def2(int ** mas, int m, int n);
void print(int ** mas, int m, int n);

int main() {
    int m, n;
    if (input(&m, &n) == 1) {
        int ** mas = creat(m, n);
        def2(mas, m, n);
        print(mas, m, n);
        fr(mas, m);

    }
    return 0;
}

int input(int * m, int * n) {
    int flag = 0;
    if (scanf("%d %d", m, n) == 2 && *m > 0 && *n > 0) {
        flag = 1;
    } else {
        printf("n/a\n");
    }
    return flag;
}

int ** creat(int m, int n) {
    int ** mas = (int**)malloc(sizeof(int*)*m);
    for (int i = 0; i < m; ++i) {
        mas[i] = (int*)malloc(sizeof(int)*n);
    }
    return mas;
}

void def(int ** mas, int m, int n) {
    int ch = 1;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            mas[i][j] = ch;
            ch++;
        }
    }
}

void def2(int ** mas, int m, int n) {
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
}

void print(int ** mas, int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", mas[i][j]);
        }
        printf("\n");  
    }
}


void fr(int ** mas, int m) {
    for (int i = 0; i < m; ++i) {
        free(mas[i]);
    }
    free(mas);
}
