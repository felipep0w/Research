//Write a function that checks whether an element occurs in a list.

#include <stdio.h>

int main() {

    int numbers[] = {1,4,3,5,2}; 
    int element = 3; 

    for(int count = 0; count < sizeof(numbers)/4; count++) {
           if(element != numbers[count]) {
               continue;
           }else{
              printf("Found: %d\n", element); 
              break; 
           }
    }

return 0; 
}