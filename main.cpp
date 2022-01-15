#include <iostream>

int main() {
    //float numbers[15]={1.2, 2.3, 1.11, 3.4, 5.5, 5.4, 5.3, 5.1, 1.5, 1.25, 5.41, 5.31, 5.11, 1.51, 1.251};
    float sorting[15];
    float numbers[15];
    int index=0;
    float max=0;
    float min=0;


    for(int i=0; i<15; i++) {
        std::cout << "Inter numbers - " << std::endl;
        std::cin >> numbers[i];
        if (i == 0){
            max = numbers[i];
            min = numbers[i];
        }
        else {
            if (max < numbers[i])
                max = numbers[i];

        }
    }
    //std::cout << max <<" " << min;

    for (int i=0; i<15; i++){
        for (int j=0; j<15; j++) {
            if (min > numbers[j]) {
                min = numbers[j];
                index=j;
            }

        }
        sorting[i] = min;
        numbers[index]=max+1;
        min=max+1;
    }
    for (int i=0; i<15; i++)
        std::cout << sorting[i] <<" ";



    //return 0;
}
