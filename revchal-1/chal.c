#include <stdio.h>

int main() {
    // Write C code here
    char a[20];
    scanf("%s", a);
    if (!strcmp(a, "THi5_15_the_P4ssw0rd")){
        printf("Correct Password!\n");
        printf("FLAG{0105_rev_chal}");
    } else {
        printf("Wrong Password");
    }

    return 0;
}
