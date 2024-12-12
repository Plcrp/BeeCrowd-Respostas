#include <iostream>
#include <iomanip>

int main(){

    int stars = 0;
    int total = 0;
    int robbed = 0;
    int count = 0;

    std::cin >> stars;
    int s[stars];

    for(int i = 0 ; i < stars ; i++){
        std::cin >>s[i];
        total += s[i];
    }

    for(int i = 0 ; i < stars ; i++){
        if(s[i] % 2 != 0){
            robbed++;
            count++;
        } else{
            break;
        }
    }

    std::cout << robbed << " " << total-robbed << "\n";
    






    return 0;
}