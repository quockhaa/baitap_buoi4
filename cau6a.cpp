//#include <stdio.h>
//#include <string.h>
//
//void timViTriChuoi(char* T, char* P) {
//    int n = strlen(T);
//    int m = strlen(P);
//    for (int i = 0; i <= n - m; i++) {
//        int j;
//        for (j = 0; j < m; j++) {
//            if (T[i + j] != P[j]) {
//                break;
//            }
//        }
//        if (j == m) {
//            printf("%d ", i);
//        }
//    }
//    printf("\n");
//}
//
//int main() {
//    char T[1000], P[100];
//
//    printf("Nhap chuoi van ban: ");
//    fgets(T, sizeof(T), stdin);
//    T[strcspn(T, "\n")] = '\0';
//
//    printf("Nhap chuoi con can tim: ");
//    fgets(P, sizeof(P), stdin);
//    P[strcspn(P, "\n")] = '\0';
//
//    timViTriChuoi(T, P);
//
//    return 0;
//}
