#include <stdio.h>
#include <string.h>

int main() {
    int n = 0;
    int fruit_amount = 0;
    char fruits[7][20] = {"suco de laranja", "morango fresco", "mamao", 
                          "goiaba vermelha", "manga", "laranja", "brocolis"};
    char fruit_name[20];
    int mg[7] = {120, 85, 85, 70, 56, 50, 34};
    int sum = 0;

    while (scanf("%d", &n) == 1 && n != 0) {
        sum = 0;

        for (int i = 0; i < n; i++) {
            scanf("%d", &fruit_amount);
            getchar();
            fgets(fruit_name, 20, stdin);
            fruit_name[strcspn(fruit_name, "\n")] = '\0';

            for (int j = 0; j < 7; j++) {
                if (strcmp(fruit_name, fruits[j]) == 0) {
                    sum += mg[j] * fruit_amount;
                }
            }
        }
        if(sum > 130){
            printf("Menos %d mg\n",sum - 130);
        }else if(sum < 110){
            printf("Mais %d mg\n",110 - sum);
        } else{
            printf("%d mg\n",sum);
        }
    }

    return 0;
}
