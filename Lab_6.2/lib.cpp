
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
        
    }
}