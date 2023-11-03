#include <iostream>
#include <ctime>

void draw(char *spaces);
void playerP(char *spaces, char player);
void computerC(char *spaces, char computer);
bool checkWin(char *spaces, char player, char computer);
bool checkDraw(char *spaces);


int main(){
char spaces[9] ={' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
char player = 'X';
char computer = 'O';
bool running = true;

draw(spaces);
while(running){
     playerP(spaces, player);
     draw(spaces);

     if(checkWin(spaces, player, computer)){
        running = false;
        break;
     } 
     if(checkDraw(spaces)){
        running = false;
        break;
     }

     computerC(spaces, computer);
     draw(spaces);
}
std :: cout << "Thanks for playing!" << '\n';

return 0;
}
void draw(char *spaces){
    std :: cout << '\n';
    std:: cout << "      |      |      " << '\n';
    std:: cout << "  " << spaces[0] << "   |  " << spaces[1] << "   |  " << spaces[2] << "   " << '\n';
    std:: cout << "______|______|______" << '\n';
     std:: cout << "      |      |      " << '\n';
    std:: cout << "  " << spaces[3] << "   |  " << spaces[4] << "   |  " << spaces[5] << "   " << '\n';
    std:: cout << "______|______|______" << '\n';
     std:: cout << "      |      |      " << '\n';
    std:: cout << "  " << spaces[6] << "   |  " << spaces[7] << "   |  " << spaces[8] << "   " << '\n';
    std:: cout << "      |      |      " << '\n';
      std :: cout << '\n';

}
 void playerP(char *spaces, char player){
    int num;
    do{
        std :: cout << "Choose a square to place your letter (1-9)" << '\n';
        std :: cin >> num;
        num--;
        if(spaces[num] == ' '){
            spaces[num] = player;
            break;
        }
    }while(!num > 0 || !num < 8);


}
void computerC(char *spaces, char computer){
    int num;
srand(time(0));

while(true){
    num = rand() % 9;
    if(spaces[num] == ' '){
        spaces[num] = computer;
        break;
    }
}
 
}
bool checkWin(char *spaces, char player, char computer){

if((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2]) ){
    spaces[0] == player ? std::cout << "You Win!\n" : std::cout << "You Lose!\n";
}
else if ((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5])){
 spaces[3] == player ? std::cout << "You Win!\n" : std::cout << "You Lose!\n";
}
else if ((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8])){
 spaces[6] == player ? std::cout << "You Win!\n" : std::cout << "You Lose!\n";
}
else if ((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6])){
 spaces[0] == player ? std::cout << "You Win!\n" : std::cout << "You Lose!\n";
}
else if ((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7])){
 spaces[1] == player ? std::cout << "You Win!\n" : std::cout << "You Lose!\n";
}
else if ((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8])){
 spaces[2] == player ? std::cout << "You Win!\n" : std::cout << "You Lose!\n";
} 
else if ((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8])){
 spaces[0] == player ? std::cout << "You Win!\n" : std::cout << "You Lose!\n";
}
else if ((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6])){
 spaces[2] == player ? std::cout << "You Win!\n" : std::cout << "You Lose!\n";
}
else{
    return false;
}
 return true;
}
bool checkDraw(char *spaces){
    for(int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }
        std :: cout << "The result is a Draw!" << '\n';
    return true;
}