
void choose(FILE* file, FILE* res, char s, char w[50]) {
    bool fl = true;
    int i = 0;

    while (fscanf(file, "%50s", w) == 1) {
        i = 0;
        fl = true;
        while (fl && w[i] != '\0') {
            if (w[i] == s) {
                fl = false;
                fprintf(res, "%s\n", w);
            }
            else {
                i++;
            }
        }
        
    }//найти слово содерж максимального кол-ва раз заданный символ
}

void zashita(FILE* file, FILE* res, int num,char w[50]) {
    fseek(file, num, SEEK_SET);
    fscanf(file, "%50s", w);
    fprintf(res, "%s", w);
}
//нач данные в отдельной функции
void startData(FILE* file, char s, char w[50], int& num, int& countMax, int& cur) {
    int count;
    int i;
    bool flag = true;
    while (fscanf(file, "%50s", w) == 1 && flag) {
        i = 0;
        count = 0;
        while (w[i] != '\0') {
            if (w[i] == s) {
                count++;
            }
            i++;
        }
        if (count >= 1) {
            countMax = count;
            num = cur;
            flag = false;
        }
        cur = ftell(file);
    }
    if (flag) {
        num = -1;
    }
    return;

}
void findWord(FILE* file, char s, char w[50], int & num,int &countMax, int & cur) {
    int count;
    int i;
    fseek(file, num, SEEK_SET);
    while (fscanf(file, "%50s", w) == 1) {
        i = 0;
        count = 0;
        while (w[i] != '\0') {
            if (w[i] == s) {
                count++;
            }
            i++;
        }
        if (countMax < count) {
            countMax = count;
            num = cur;
        }
        cur = ftell(file);
    }
    return;
}