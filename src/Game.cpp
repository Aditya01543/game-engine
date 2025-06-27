#include"Game.h"
#include<iostream>

using namespace std;

Game::Game(){
    isRunning = false;
}

Game::~Game(){
    cout<<"Game deconstructed\n";
}

void Game::Init(){
    cout<<"Initializing game...\n";
    isRunning = true;
}

void Game::Update(){
    cout<<"Updating game...\n";
}

void Game::Render(){
    cout<<"Rendering game...\n";
}

void Game::Clean(){
    cout<<"Cleaning up...\n";
}

bool Game::IsRunning() const {
    return isRunning;
}