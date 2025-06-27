#include"Game.h"

int main(){
    Game game;

    game.Init();

    while(game.IsRunning()){
        game.Update();
        game.Render();
    }

    game.Clean();

    return 0;
}