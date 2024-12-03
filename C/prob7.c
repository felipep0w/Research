//Write a function that returns the largest element in a list.

#include <stdio.h>
#include <string.h>

int main() {
    
    int numbers[] = {5,3,4,2,7};
    int count = 0; 
    int c_number = 5;   

   for(int count = 0;  count < 4; count++) {

          if(c_number > numbers[count+1]) {
              continue;  
          } else{
             c_number = numbers[count+1]; 
          }
          count++; 
    }

    printf("Greater: %d\n", c_number); 

    return 0; 
}
