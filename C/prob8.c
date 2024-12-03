// Write function that reverses a list, preferably in place.

#include <stdio.h>
#include <string.h>

int main() {
    
    int numbers[] = {6,5,10,3,4,2,1,0};
    int size = sizeof(numbers) / 4 ;
    
    for(int count = 1; count < size+1; count++) {
        printf("Number: %d\n", numbers[size-count]);      
    }

    return 0; 
}