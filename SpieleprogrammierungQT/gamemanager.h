#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H


class GameManager
{
private:

public:
    enum SaveFormat // TODO: By-default binary speichern
    {
        Json, Binary
    };
    GameManager();
    void NewGame();
    void SaveGame();
    void LoadGame();
};

#endif // GAMEMANAGER_H
