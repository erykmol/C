#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

typedef struct Snake_{
    int x,y;
    struct Snake_ *nastepny;
    struct Snake_ *poprzedni;
} Snake;

WINDOW * mainwin;
Snake *glowa=NULL;
Snake *ogon=NULL;

Snake* GetNewNode(int x,int y) {
    Snake *newNode= ( Snake*)malloc(sizeof(Snake));;
	newNode->x = x;
    newNode->y = y;
	newNode->poprzedni = NULL;
	newNode->nastepny = NULL;
	return newNode;
}


void add_Node(int x, int y){
    Snake *newNode = GetNewNode(x,y);
	Snake *iterator = glowa;

    if (iterator == NULL){
        glowa = newNode;
        return;
    }

    while (iterator->nastepny != NULL){
        iterator = iterator->nastepny;
    }

    iterator->nastepny = newNode;
    newNode->poprzedni = iterator;
    ogon = newNode;
}

void move_Snake(int x, int y){
    Snake * orgOgon= ogon;
    int tmpx = ogon->x, tmpy = ogon->y;
    int tmp1x, tmp1y;
    ogon->x=x;
    ogon->y=y;
    mvprintw(ogon->y,ogon->x,"o");
    ogon=ogon->poprzedni;
    while(ogon!=NULL){
        
        tmp1x = ogon->x;
        tmp1y = ogon->y;
        ogon->x=tmpx;
        ogon->y=tmpy;
        tmpx=tmp1x;
        tmpy=tmp1y;
        mvprintw(ogon->y,ogon->x,"o");
        ogon=ogon->poprzedni;
    }
    ogon=orgOgon;
    
}

int main(int argc, char *argv[]) {
    initscr();
    //noecho();
    cbreak();
    keypad(stdscr, TRUE);
    nodelay(stdscr, TRUE);
    int tmp = KEY_RIGHT;
    int p,b,j,i,ch;
    i=2;
    j=2;
    int x1=rand()% 80;
    int y1=rand()% 24;
    add_Node(i,j);
    j=j+1;
    add_Node(i,j);
    while(1)
    {
        mvaddch(y1,x1,'+');
        p = mvinch(j,i);
        if(p==(int)'+'){
            add_Node(i,j);
            x1=rand()% 80;
            y1=rand()% 24;
        }
        ch = getch();
        if( ch == ERR ){
            move_Snake(i,j);
            refresh();
            usleep(250000);
            
            if(tmp==KEY_UP){
                j=j-1;
            }else if(tmp==KEY_RIGHT){
                i=i+1;
            }else if(tmp==KEY_DOWN){
                j=j+1;
            }
            else if(tmp==KEY_LEFT){
                i=i-1;
            }
        }else{
            if(ch == KEY_UP){
                j=j-1;
                move_Snake(i,j);
                refresh();
                usleep(250000);
                tmp=ch;
            }
            else if(ch == KEY_DOWN){
                j=j+1;
                move_Snake(i,j);
                refresh();
                usleep(250000);
                tmp=ch;
            }
            else if(ch == KEY_RIGHT){
                i=i+1;
                move_Snake(i,j);
                refresh();
                usleep(250000);
                tmp=ch;
            }
            else if(ch == KEY_LEFT){
                i=i-1;
                move_Snake(i,j);
                refresh();
                usleep(250000);
                tmp=ch;
            }
        }
        
        erase();
    }
 endwin();
}