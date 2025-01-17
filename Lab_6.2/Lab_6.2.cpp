#include "lib.h"
#include "lib.cpp"


int main()
{
    setlocale(LC_ALL, "RUS");
    char s, w[50];
    FILE* file = fopen("text.txt", "rb");
    FILE* res = fopen("res.txt", "w");
    FILE* res2 = fopen("zashita.txt", "w");
    cout << "Input value (char for search)" << endl;
    cin >> s;


    if (file != 0 && res != 0) {
        choose(file, res, s, w);
        if (ftell(res) == 0) {
            fputs("0 words with char", res);
        }

        //zashita
        int num;
        int countMax;
        int cur = 0;
        fseek(file, 0, SEEK_SET);
        startData(file, s, w, num, countMax, cur);
        
        if (num != -1) {
            findWord(file, s, w, num, countMax, cur);
            zashita(file, res2, num,w);
        }
        else {
            cout << "Нет подходящих слов!" << endl;
            fputs("Нет подходящих слов!\n", res2);
        }
        fclose(file);
        fclose(res);
        fclose(res2);
    }
    else {
        cout << "Error with file loading!" << endl;
    }
}


