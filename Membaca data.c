#include <stdio.h>

void bacaData() {
    FILE *file;
    char line[256];
    char ID[7], name[50], amount[50];

    file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("File tidak dapat dibuka.\n");
        return;
    }

    while (fgets(line, sizeof(line), file)) {
        sscanf(line, "%s %[^(0-9)] %s", ID, name, amount);
        printf("ID: %s\n", ID);
        printf("Nama: %s\n", name);
        printf("Nominal: Rp.%s\n", amount);
        printf("\n");
    }

    fclose(file);
}

int main() {
    bacaData();

    return 0;
}

