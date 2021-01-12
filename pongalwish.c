#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(){
    char pongal_wish[20]="Happy Pongal";
    int i=0;
    while(pongal_wish[i]!='\0'){
        system("cls");
        for(int j=0;j<=i;j++){

            printf("%c",pongal_wish[j]);
            usleep(1000000);
            printf("\n");
        }
        printf("\n");

        i++;
    }
}
