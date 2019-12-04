#include <stdio.h>
void main(){
    int x, c;
    x = 20;
    int i = 2;
    while (i <= x){
        c = 0;
        for (int j = 2;j < i; j++){
            if (i % j == 0 && i != 2){
                c = 1;
            }
        }
    if (c == 0)
        printf("[%d] ", i);
    i++;
    }

}
