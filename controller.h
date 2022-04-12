#ifndef CONTROLLER_H
#define CONTROLLER_H

class Controller {
private:
	int speed;
	int key;
	int score;

public:
	Controller() :speed(200), key(1), score(0) {}
	void Start();
	void Select();
	void DrawGame();
	int PlayGame();
	void UpdateScore(const int&);
	void RewriteScore();
	int Menu();
	void Game();
	int GameOver();
};
#endif
