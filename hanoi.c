#include <stdio.h>
#include <conio.h>
void hanoi(int D,char from,char to, char through);
void main(){
    hanoi(3, 'A', 'C', 'B');
}

void hanoi(int D, char from, char to, char through){
    if(D==1){
        printf("\nMove disk 1 from tower %c to tower %c",from,to);
        return;
    }
    hanoi(D-1,from,through,to);
    printf("\nMove disk %d from tower %c to tower %c",D,from,to);
    hanoi(D-1,through,to,from);
}
