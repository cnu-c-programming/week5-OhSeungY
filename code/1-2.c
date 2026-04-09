#include <stdio.h>

int sum_range(int* start, int* end){ 
    int* temp = start;
    int result = 0; 
    int count = 0;
    while(temp != end){
        result += *temp;
        temp = (temp + 1);
    }
    return result;
}

int main() {
    int data[] = {10, 20, 30, 40, 50, 60, 70};

    int result = sum_range(&data[1], &data[4]);

    printf("%d\n", result);
    return 0;
}
