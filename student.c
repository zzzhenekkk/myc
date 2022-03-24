#include <stdio.h>

struct student {
    char fam[21];
    int bal;
};
 
int main() {
    int max = 0;
    int im = 0;
    int n;
    int flag = 1;
    if (scanf("%d", &n) !=1 && n <= 0) {
        flag = 0;
    } else {
        struct student students[n];
        for (int i = 0; i < n; i++) {
            if (scanf("%d %s", &students[i].bal, students[i].fam) != 2 && students[i].bal < 0) {
                flag = 0;
            }
        }
        if (flag == 1) {
            max = students[0].bal;
            for (int i = 0; i < n; i++) {
                if (students[i].bal > max) {
                    max = students[i].bal;
                    im = i;
                }
            }
            printf ("%d %s", students[im].bal, students[im].fam);
        }
    } 
    if (flag == 0) {
        printf("n/a");
    }
    return 0;
}