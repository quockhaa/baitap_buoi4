//#include <stdio.h>
//#include <ctype.h>
//
//int main() {
//    char s[100];
//    int i, isDigit = 1;
//
//    printf("Nhập chuỗi: ");
//    fgets(s, sizeof(s), stdin);
//
//    for (i = 0; s[i] != '\0'; i++) {
//        if (s[i] == '\n') {
//            s[i] = '\0';
//            break;
//        }
//        if (!isdigit(s[i])) {
//            isDigit = 0;
//            break;
//        }
//    }
//
//    if (isDigit) {
//        printf("Chuỗi chỉ chứa ký số.\n");
//    }
//    else {
//        printf("Chuỗi không chỉ chứa ký số.\n");
//    }
//
//    return 0;
//}
