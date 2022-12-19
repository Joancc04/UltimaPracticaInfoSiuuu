#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#define N 1024

int main(){
    char buffer[N];
    scanf("%s", buffer);
    int res = open(buffer, O_RDONLY);
    int r, desc;
    if (res == -1){
        printf("ERROR: L'arxiu no existeix");
    } else {
        desc=open("copia.txt", O_CREAT|O_WRONLY|O_TRUNC,S_IRWXU);
        if (desc == -1){
            printf("Error al crear arxiu");
        }
        else{
            while((r = read(res, buffer, N-1))!=0)
                {write(desc, buffer, r);}
        }
    }
    close(desc);
    close(res);
}