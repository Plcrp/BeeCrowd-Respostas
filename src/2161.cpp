#include <stdio.h>

int main(){

    int n = 0;
    double m = 1/6;
    
    scanf("%d",&n);

    for(int i  = 0 ; i < n ; i++){
        m += 6;
        m = 1/m;
    }

    printf("%.10lf\n",3+m);

    return 0;

}