//#include <stdio.h>
//#include <ctype.h>
//
//void chuyenDoiChu(char* s) {
//    int i = 0;
//    if (s[i] != '\0') {
//        s[i] = toupper(s[i]);
//        i++;
//    }
//    while (s[i] != '\0') {
//        if (isspace(s[i])) {
//            while (isspace(s[i])) {
//                i++;
//            }
//            if (s[i] != '\0') {
//                s[i] = toupper(s[i]);
//            }
//        }
//        else {
//            s[i] = tolower(s[i]);
//        }
//        i++;
//    }
//}
//
//int main() {
//    char s[100];
//    printf("Nhập chuỗi: ");
//    fgets(s, sizeof(s), stdin);
//    chuyenDoiChu(s);
//    printf("Chuỗi sau khi thay đổi: %s", s);
//    return 0;
//}
