#include "lib.h"
#include "lib.cpp"


int main()
{
    setlocale(LC_ALL, "RUS");
    char s, w[50];
    FILE* file = fopen("text.txt", "rb");
    FILE* res = fopen("res.txt", "w");
    cout << "Input value (char for search)" << endl;
    cin >> s;


    if (file != 0 && res != 0) {
        choose(file, res, s, w);
        if (ftell(res) == 0) {
            fputs("0 words with char", res);
        }
        fclose(file);
        fclose(res);
    }
    else {
        cout << "Error with file loading!" << endl;
    }
}


