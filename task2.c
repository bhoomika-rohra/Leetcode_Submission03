#include <stdio.h>
#include <string.h>

int main() {
    char words[5][20] = {"abc", "car", "ada", "racecar", "cool"};
    int size = 5;

    for (int w = 0; w < size; w++) {

        int n = strlen(words[w]);
        int isPal = 1;

        for (int i = 0; i < n / 2; i++) {
            if (words[w][i] != words[w][n - 1 - i]) {
                isPal = 0;
                break;
            }
        }

        if (isPal) {
            printf("%s\n", words[w]);
            return 0;
        }
    }
}
