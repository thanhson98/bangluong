#include <stdio.h>
#include <stdlib.h>

int a, b, c, d, e, f;
int luonghientai;
int sonamkinhnghiem;
int sonamlamviec;
int luongmoi;
int luachon;


int main() {
    printf("ban co muon tiep tuc 1 de tat 2 de tiep tuc");
    scanf("%d", &luachon);
    if (luachon ==1){
        exit (1);
    } else if (luachon ==2){

    }
    printf("nhap so nam kinh nghiem");
    scanf("%d", &sonamkinhnghiem);
    printf("nhap so nam lam viec");
    scanf("%d", &sonamlamviec);

    if (sonamkinhnghiem <= 2) {
        printf("luong cua ban la 10 trieu");
        if (sonamlamviec < 1) {
            luongmoi = ((10 * 3) / 10) + 10;
            printf("luong moi la %d trieu ", luongmoi);
        }
        if (1 <= sonamlamviec && sonamlamviec <= 2) {
            luongmoi = ((10 * 5) / 10) + 10;
            printf("luong moi la %d ", luongmoi);
        }
        if (2 <= sonamlamviec && sonamlamviec <= 5) {
            luongmoi = ((10 * 10) / 10) + 10;
            printf("luong moi la %d ", luongmoi);
        }
        if (sonamlamviec > 5) {
            luongmoi = ((10 * 20) / 10) + 10;
            printf("luong moi la %d ", luongmoi);
        }

    }


    if (2 <= sonamkinhnghiem && sonamkinhnghiem <= 5) {
        luonghientai == 20;
        printf("luong cua ban la 20 trieu");
        if (sonamlamviec < 1) {
            luongmoi = ((20 * 3) / 10) + 10;
            printf("luong moi la %d trieu ", luongmoi);
        }
        if (1 <= sonamlamviec && sonamlamviec <= 2) {
            luongmoi = ((20 * 5) / 10) + 10;
            printf("luong moi la %d ", luongmoi);
        }
        if (2 <= sonamlamviec && sonamlamviec <= 5) {
            luongmoi = ((20 * 10) / 10) + 10;
            printf("luong moi la %d ", luongmoi);
        }
        if (sonamlamviec > 5) {
            luongmoi = ((20 * 20) / 10) + 10;
            printf("luong moi la %d ", luongmoi);
        }
    }
    if (sonamkinhnghiem > 5) {
        printf("luong cua ban la 30 trieu");
        if (sonamlamviec < 1) {
            luongmoi = ((30 * 3) / 10) + 10;
            printf("luong moi la %d trieu ", luongmoi);
        }
        if (1 <= sonamlamviec && sonamlamviec <= 2) {
            luongmoi = ((30 * 5) / 10) + 10;
            printf("luong moi la %d ", luongmoi);
        }
        if (2 <= sonamlamviec && sonamlamviec <= 5) {
            luongmoi = ((30 * 10) / 10) + 10;
            printf("luong moi la %d ", luongmoi);
        }
        if (sonamlamviec > 5) {
            luongmoi = ((30 * 20) / 10) + 10;
            printf("luong moi la %d ", luongmoi);
        }

    }
    return 0;
}





