#include <stdio.h>
#include <string.h>

int main() {
    int s;
    char str[s];
    char v;
    int p;

    printf("Enter string size: ");
    scanf("%d", &s);

    printf("Enter string: ");
    scanf("%s", str);

//    fgets(str, sizeof(str), stdin);
//    str[strcspn(str, "\n")] = '\0';

    printf("Before Insertion: %s\n", str);

    int len = strlen(str);

    printf("Enter position and character: ");
    scanf("%d %c", &p, &v);

    if (p < 0 || p > len) {
        printf("INVALID!!\n");
        return 0;
    }

    for (int i = len; i >= p; i--) {
        str[i + 1] = str[i];
    }

    str[p] = v;

    printf("After Insertion: %s\n", str);

    return 0;
}
