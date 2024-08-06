#include <stdio.h>
#include <string.h>

void timViTriChuoi(char* T, char* P) {
    size_t n = strlen(T);
    size_t m = strlen(P);
    for (size_t i = 0; i <= n - m; i++) {
        size_t j;
        for (j = 0; j < m; j++) {
            if (T[i + j] != P[j]) {
                break;
            }
        }
        if (j == m) {
            printf("%zu ", i);
        }
    }
    printf("\n");
}

int main() {
    char T[1000], P[100];
    FILE* file;

    // Đọc danh sách sinh viên từ file
    file = fopen("sinhvien.txt", "r");
    if (file == NULL) {
        printf("Không thể mở file sinhvien.txt.\n");
        return 1;
    }

    printf("Danh sách sinh viên:\n");
    while (fgets(T, sizeof(T), file) != NULL) {
        T[strcspn(T, "\n")] = '\0';
        printf("%s\n", T);
    }
    fclose(file);

    // Đọc chuỗi văn bản từ file
    file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Không thể mở file input.txt.\n");
        return 1;
    }

    fgets(T, sizeof(T), file);
    T[strcspn(T, "\n")] = '\0';
    fclose(file);

    // Nhập chuỗi con cần tìm
    printf("Nhập chuỗi con cần tìm: ");
    fgets(P, sizeof(P), stdin);
    P[strcspn(P, "\n")] = '\0';

    // Tìm và hiển thị vị trí của chuỗi con trong chuỗi văn bản
    timViTriChuoi(T, P);

    return 0;
}
