#include <stdio.h>

int main(){
    int n1 = 0, n2 = 1, n3, terms;

    printf("How many to Terms\nInput:");
    scanf("%d", &terms);

    printf("%d\n%d\n",n1, n2);
    
    for(int count = 3; count <= terms; count++){
        printf("%d\n", n3 = n1 + n2);

        n1 = n2, n2 = n3;
    }
}