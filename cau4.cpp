#include <stdio.h>
#include <string.h>

void timTenTrongHoTen(const char* hoTen, const char* tenCanTim) {
    char hoTenCopy[256];
    char* token;
    char* context;

    strncpy_s(hoTenCopy, sizeof(hoTenCopy), hoTen, _TRUNCATE);

    token = strtok_s(hoTenCopy, " ", &context);
    while (token != NULL) {
        if (strcmp(token, tenCanTim) == 0) {
            printf("Tên '%s' tồn tại trong chuỗi họ tên.\n", tenCanTim);
            return;
        }
        token = strtok_s(NULL, " ", &context);
    }

    printf("Tên '%s' không tồn tại trong chuỗi họ tên.\n", tenCanTim);
}

int main() {
    char hoTen[256];
    char tenCanTim[50];

    printf("Nhập chuỗi họ tên: ");
    fgets(hoTen, sizeof(hoTen), stdin);
    hoTen[strcspn(hoTen, "\n")] = '\0';

    printf("Nhập tên cần tìm: ");
    fgets(tenCanTim, sizeof(tenCanTim), stdin);
    tenCanTim[strcspn(tenCanTim, "\n")] = '\0';

    timTenTrongHoTen(hoTen, tenCanTim);

    return 0;
}
