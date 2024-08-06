#include <stdio.h>
#include <string.h>

void tach_ho_ten(const char* ho_ten, char* ho_lot, char* ten) {
    size_t i, len = strlen(ho_ten);
    size_t index = (size_t)-1;

    for (i = len; i > 0; i--) {
        if (ho_ten[i - 1] == ' ') {
            index = i - 1;
            break;
        }
    }

    if (index == (size_t)-1) {
        strcpy_s(ho_lot, 100, "");
        strcpy_s(ten, 100, ho_ten);
        return;
    }

    strncpy_s(ho_lot, 100, ho_ten, index);
    ho_lot[index] = '\0';
    strcpy_s(ten, 100, ho_ten + index + 1);
}

int main() {
    char ho_ten[] = "Nguyen Van Anh";
    char ho_lot[100], ten[100];

    tach_ho_ten(ho_ten, ho_lot, ten);

    printf("Họ lót: %s\n", ho_lot);
    printf("Tên: %s\n", ten);

    return 0;
}
