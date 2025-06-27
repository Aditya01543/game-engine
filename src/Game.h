#pragma once

class Game{
    public:
    Game();
    ~Game();
    
    void Init();
    void Update();
    void Render();
    void Clean();
    bool IsRunning() const;

    private:
    bool isRunning;
};