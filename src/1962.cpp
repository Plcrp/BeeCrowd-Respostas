#include <stdio.h>
#include <iostream>

int main(){

    int n = 0;
    int t = 0;

    std::cin >> n;

    for(int i = 0 ; i < n ; i++){
        std::cin >> t;
        if(t >= 2015){
            printf("%d A.C.\n",(2014-t)*-1);
        } else{
            printf("%d D.C.\n",2015-t);
        }
    }


    return 0;

}