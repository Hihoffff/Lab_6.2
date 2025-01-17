#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>


using namespace std;

void choose(FILE* file, FILE* res, char s, char w[50]);
void zashita(FILE* rperm, FILE* res, int num, char w[50]);
void findWord(FILE* file, char s, char w[50], int& num, int& countMax, int& cur);
void startData(FILE* file, char s, char w[50], int& num, int& countMax, int& cur);