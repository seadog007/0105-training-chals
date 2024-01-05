#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    char a[20];
    scanf("%s", a);
    printf("Please enter the password:\n");
    if (!strcmp(a, "THi5_15_the_P4ssw0rd")){
        printf("Correct Password!\n");
        printf("FLAG{0105_rev_chal}\n");
    } else {
        printf("Wrong Password\n");
    }

    return 0;
}
