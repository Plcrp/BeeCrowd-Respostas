#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    int bool = 0;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    //1
    if(a > b && c >= b){
            bool = 1;
    }else if(a < b && c <= b){
            bool = 0;
    }else if(a < b && b < c){
            if((c-b) >= (b-a)){
                bool = 1;
            } else{
                bool = 0;
            }
    }else if(a > b && b > c){
            if((b-c) < (a-b)){
                bool = 1;
            } else{
                bool = 0;
            }
    }else if(a == b){
            if(c > b){
                bool = 1;
            }else{
                bool = 0;
            }
    }

    if(bool == 1){
        printf(":)\n");
    } else{
        printf(":(\n");
    }

    return 0;
}
