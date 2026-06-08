#include <stdio.h>
#include <string.h>

int main() {
    int s;
    char str[s];
    int p;

    printf("Enter string size: ");
    scanf("%d",&s);

    printf("Enter string: ");
    scanf("%s", str);

//    fgets(str, sizeof(str), stdin);
//    str[strcspn(str, "\n")] = '\0';

    printf("Before Deletion: %s\n", str);

    int len = strlen(str);

    printf("Enter position to delete: ");
    scanf("%d", &p);

    if (p < 0 || p > len) {
        printf("INVALID!!\n");
        return 0;
    }

    for (int i = p; str[i] != '\0'; i++) {
        str[i] = str[i+1];
    }

    printf("After Deletion: %s\n", str);

    return 0;
}
