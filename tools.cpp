#include "tools.h"
#include <windows.h>
#include <stdio.h>

void SetWindowSize(int cols, int lines) {
	system("title ̰����");  //���ô��ڱ���
	char cmd[30];
	sprintf_s(cmd, "mod con cols=%d lines=%d", cols * 2, lines); //һ��ͼ�Ρ�ռ�����ַ����ʿ�ȳ���2
	system(cmd);
}

void SetCusorPosition(const int x, const int y) {//���ù��λ��
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
