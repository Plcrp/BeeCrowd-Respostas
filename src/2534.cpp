#include <stdio.h>
#include <iostream>
#include <algorithm>    

int main(){

    int q = 0;
    int n = 0;
    int qi[100] = {0};
    int ni[100] = {0};

    while(scanf("%d %d",&n,&q) == 2){
        for(int i = 0 ; i < n ; i++){
            scanf("%d",&qi[i]);
        }
        for(int i = 0 ; i < q ; i++){
            scanf("%d",&ni[i]);
        }
        std::sort(qi, qi + n, std::greater<int>());
        for(int i = 0 ; i < q ; i++){
            printf("%d\n",qi[ni[i] - 1]);
        }
    }

    return 0;

}