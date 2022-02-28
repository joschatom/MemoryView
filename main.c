#include <stdio.h>
#include <stdbool.h>
#include <Windows.h>


#define clear() printf("\033[H\033[J")
#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))
#define curxy(x,y,cur) ((printf("\033[%d;%dH", (x), (y)) == (cur)) ? (cur) : 1)

void newline(int cdata, int *position){
    if (position== cdata){
    printf("]\n                      \t[");
}
}


int main(){

    char nameentry[25];
    int VCountXtemp;
    printf("This is a gcc programme!\n");

    int *position = NULL;
    printf(*position);
    Sleep(2000);
    int *postemp = NULL;
    int *postemp2 = NULL;
    int *counttemp = NULL;

    counttemp = (&VCountXtemp);

    curxy(0,0,0);

    for (int i = 0; i < 10000;i++)
    {
        clear();
        system("cls");
        postemp = position;
        for (position;position < postemp + 6; position++){
            
             printf("%p-%p:\t[%c.", postemp,position,(*position ? *position : '.'));

            postemp2 = position;
            int j = 0;
            for (position;position != postemp2 + 20; position++){
               printf("%c.", *position ? *position : '.');
               /*if (position== postemp2 + 5){
                   printf("]\n                      \t[");
               }*/
               
               newline(postemp2 + 5, position);
               j++;
            }
            printf("]\n\nADRESS: 0x%p",position);
            gotoxy(9999999999999999, 999999999999999);
        }
        Sleep(1000);
        postemp = NULL;
        postemp2 = NULL;
        //printf("\n");
/*
        if (*position == 0){
            printf(".");
        }
        printf("0x%p\t%c\n", position, *position);
        position = position + 1;
    }
    */
    }
    return 0;
}

