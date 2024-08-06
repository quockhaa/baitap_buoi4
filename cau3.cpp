+ACM-include +ADw-stdio.h+AD4-
+ACM-include +ADw-ctype.h+AD4-

void xoaKhoangTrangThua(char+ACo- s) +AHs-
    int i +AD0- 0, j +AD0- 0+ADs-
    int inWord +AD0- 0+ADs-

    while (s+AFs-i+AF0- +ACEAPQ- '+AFw-0') +AHs-
        if (isspace(s+AFs-i+AF0-)) +AHs-
            if (inWord) +AHs-
                s+AFs-j+-+-+AF0- +AD0- ' '+ADs-
                inWord +AD0- 0+ADs-
            +AH0-
        +AH0-
        else +AHs-
            s+AFs-j+-+-+AF0- +AD0- s+AFs-i+AF0AOw-
            inWord +AD0- 1+ADs-
        +AH0-
        i+-+-+ADs-
    +AH0-

    if (j +AD4- 0 +ACYAJg- s+AFs-j - 1+AF0- +AD0APQ- ' ') +AHs-
        j--+ADs-
    +AH0-

    s+AFs-j+AF0- +AD0- '+AFw-0'+ADs-
+AH0-

int main() +AHs-
    char s+AFs-100+AF0AOw-

    printf(+ACI-Nh+Hq0-p chu+Htc-i: +ACI-)+ADs-
    fgets(s, sizeof(s), stdin)+ADs-

    xoaKhoangTrangThua(s)+ADs-

    printf(+ACI-Chu+Htc-i sau khi chu+Hqk-n h+APM-a: +ACU-s+ACI-, s)+ADs-

    return 0+ADs-
+AH0-
