#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#define N 1024


int main(){

    char buffer[N];
    scanf("%s", buffer);
    int res = open(buffer,O_RDONLY);
    if (res == -1){
        printf("ERROR: L'arxiu no existeix");
    }
    else {
        int r;
        while((r = read(res, buffer, N-1))!=0){
            printf("%s", buffer);
        }
    }
    return 0;
}

