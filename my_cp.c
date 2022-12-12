#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#define N 1024

int main(){
    char buffer[N];
    scanf("%s", buffer);
    int res = open(buffer, O_RDONLY), desc;

    if (res == -1){
        printf("ERROR: L'arxiu no existeix");
    } else {
        if (desc=open("hola.txt", O_CREAT|O_WRONLY|O_TRUNC,0777 ) == -1){

        }
        else{
        printf("%d", desc);
        }
    }
    close(desc);   
}