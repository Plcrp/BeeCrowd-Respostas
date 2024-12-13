#include <stdio.h>

int main(){

    int n,amount;
    int x;
    float total = 0;

    scanf("%d", &x);

    for(int i = 0 ; i < x ; i++){
        scanf("%d %d",&n,&amount);
        if(n == 1001){
            total += amount * 1.5;
        }else if(n == 1002){
            total += amount * 2.5;
        } else if(n == 1003){
            total += amount * 3.5;
        } else if(n == 1004){
            total += amount * 4.5;
        } else if(n == 1005){
            total += amount * 5.5;
        }
    }

    printf("%.2f\n",total);
    

    return 0;

}