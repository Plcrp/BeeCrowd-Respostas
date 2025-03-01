#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char str1[8];
    char str2[8];

    char *strs[] = {"tesoura", "papel", "pedra", "lagarto", "Spock"};
    char *str_papel[] = {"pedra", "Spock"};
    char *str_tesoura[] = {"papel", "lagarto"};
    char *str_pedra[] = {"tesoura", "lagarto"};
    char *str_lagarto[] = {"Spock", "papel"};
    char *str_Spock[] = {"tesoura", "pedra"};

    char **strs2[] = {str_tesoura, str_papel, str_pedra, str_lagarto, str_Spock};

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s %s", str1, str2);
        if (strcmp(str1, str2) == 0) {
            printf("Caso #%d: De novo!\n", i + 1);
            continue;
        }
        int jogada1 = -1, jogada2 = -1;
        for (int j = 0; j < 5; j++) {
            if (strcmp(strs[j], str1) == 0) jogada1 = j;
            if (strcmp(strs[j], str2) == 0) jogada2 = j;
        }
        if (strcmp(strs2[jogada1][0], str2) == 0 || strcmp(strs2[jogada1][1], str2) == 0) {
            printf("Caso #%d: Bazinga!\n", i + 1);
        } else {
            printf("Caso #%d: Raj trapaceou!\n", i + 1);
        }
    }

    return 0;
}
