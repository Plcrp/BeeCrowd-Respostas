#include <stdio.h>

int main(){

    int n = 0;
    double m = 1/2;
    
    scanf("%d",&n);

    for(int i  = 0 ; i < n ; i++){
        m += 2;
        m = 1/m;
    }

    printf("%.10lf\n",1+m);

    return 0;

}