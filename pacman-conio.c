#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
//Pacman game in C but the pacman's direction does not change lol

/*All the elements to be used in game*/
#define WIDTH 40
#define HEIGHT 20
#define PACMAN 'C'
#define WALL '#'
#define FOOD '*'
#define EMPTY ' '
#define MONSTER '<'

//Global variables in game
int res = 0;
int score = 0;
int pacman_x, pacman_y;
char board[HEIGHT][WIDTH];
int food = 0;
int curr = 0;

void initialize() {
    //The walls are added to the game
    for(int i=0; i < HEIGHT; i++) {
        for(int j=0; j < WIDTH; j++){
            if(i == 0 || j == WIDTH -1  || j == 0 || i == HEIGHT -1){
                board[i][j] = WALL;
            } else
            board[i][j] = EMPTY;
        }
    }

    //Now we put the walls inside the game
    int count = 50;
    while(count != 0) {
        int i = (rand() % (HEIGHT + 1));
        int j = (rand() % (WIDTH +1));
        
        if(board[i][j] != WALL && board[i][j] != PACMAN) {
            board[i][j] = WALL;
            count --;
        }
    }

    int val = 5;
    while(val--) {
        int row =( rand() % (HEIGHT +1));
        for(int j = 3; j < WIDTH -3; j++){
            if((board[row][j] != WALL) && (board[row][j] != PACMAN)) {
                board[row][j] = WALL;
            }
        }
    }
    //Putting Monsters in the game
    count = 10;
    while(count != 0) {
        int i = (rand() % (HEIGHT +1));
        int j = (rand() % (WIDTH +1));

        if((board[i][j] != WALL) && (board[i][j] != PACMAN)) {
            board[i][j] = MONSTER;
            count--;
        }
    }

    //Cursor in the centre.
    pacman_x = WIDTH / 2;
    pacman_y = HEIGHT / 2;
    board[pacman_y][pacman_x] = PACMAN;

    //Points placed
    for(int i = 0; i < HEIGHT; i++){
        for(int j=0; j<WIDTH; j++) {
            if((i%2 == 0) && (j%2 == 0) && (board[i][j] != WALL) && (board[i][j] != MONSTER) && (board[i][j] != PACMAN)) {

                board[i][j] = FOOD;
                food++;
            }
        }
    }
}

void draw() {
    //Clear screen
    system("cls");

    //Drawing the elements in the screen
    for(int i=0; i<HEIGHT; i++) {
        for(int j=0; j<WIDTH; j++){
            printf("%c", board[i][j]);
        }
        printf("\n");
    }
    printf("Score: %d\n", score);
}

//Function enables to move the Cursor
void move(int move_x, int move_y){
    int x = pacman_x + move_x;
    int y = pacman_y + move_y;

    if(board[y][x] != WALL) {
        if(board[y][x] == FOOD) {
            score++;
            food--;
            curr++;
            if(food == 0) {
                res = 2;
                return;
            }
        } else if(board[y][x] == MONSTER) {
            res = 1;
        }

        board[pacman_y][pacman_x] = EMPTY;
        pacman_x = x;
        pacman_y = y;
        board[pacman_y][pacman_x] = PACMAN;

    }
}

//MAIN FUNCTION
int main (){
    initialize();
    char ch;
    food -= 40;
    int totalFood = food;
    // Instruction for player
    printf("Use buttons fo w(up), a(left), d(right) and s(down)\n Also, Press Q to quit\n");
    printf("Enter Y to continue: \n");

    ch = getch();
    if (ch != 'Y' && ch != 'y') {
        printf("Exit Game!");
        return 1;
    }
    while(1) {
        draw();
        printf("Total Food count: %d \n", totalFood);
        printf("Total Food eaten: %d \n", curr);
        if(res ==1) {
            //Clearscreen
            system("cls");
            printf("GAME OVER! Killed by Monster \nYour Score: %d\n", score);
            return 1;
        }
        if(res ==2) {
            //Clearscreen
            system("cls");
            printf("YOU WON! \n Your Score: %d\n", score);
            return 1;
        }

        //Taking the Input-from the user
        ch = getch();

        //Moving accoding to the buttons wads
        switch(ch) {
            case 'w':
                move(0, -1);
                break;
            case 's':
                move(0, 1);
                break;
            case 'a':
                move(-1, 0);
                break;
            case 'd':
                move(1, 0);
                break;
            case 'q':
                printf("GAME OVER! Your Score: %d \n", score);
                return 0;
        }
    }
    return 0;
}
