#include <stdio.h>

int main(){
    int n1 = 1, n2 = 0;

    printf("%d\n%d\n",n1, n2);

    for(int count = 3; count <= 10; count++){
        printf("%d\n",n1 + n2);
        n2 = (n1 += n2) - n2;
    }
    return 0;
}
