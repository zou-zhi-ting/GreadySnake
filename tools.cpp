#include "tools.h"
#include <windows.h>
#include <stdio.h>

void SetWindowSize(int cols, int lines) {
	system("title 贪吃蛇");  //设置窗口标题
	char cmd[30];
	sprintf_s(cmd, "mod con cols=%d lines=%d", cols * 2, lines); //一个图形■占两个字符，故宽度乘以2
	system(cmd);
}

void SetCusorPosition(const int x, const int y) {//设置光标位置
	COORD position;
	position.X = x * 2;
	position.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

void SetColor(int colorID) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorID);
}

void SetBackColor() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE |
		BACKGROUND_BLUE |
		BACKGROUND_GREEN |
		BACKGROUND_RED);
}
