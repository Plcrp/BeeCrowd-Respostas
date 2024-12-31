#include <stdio.h>

int main(){

    int n = 0;
    int h = 0;
    int m = 0;
    int o = 0;

    scanf("%d",&n);

    for(int i = 0 ; i < n ; i++){
        scanf("%d",&h);
        scanf("%d",&m);
        scanf("%d",&o);
        if(o == 1){
            printf("%02d:%02d - A porta abriu!\n",h,m);
        } else{ 
            printf("%02d:%02d - A porta fechou!\n",h,m);
        }
    }

    return 0;

}