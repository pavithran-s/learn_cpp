#include <iostream>

// This also similar to #define(macros) but using constexpr is the better way
constexpr int maxbuffer = 1024;

using namespace std;

int main() {

    const char *fileName = "test-file1.txt";
    const char *fileNameNew = "test-file2.txt";

    // Create file
    FILE *fh = fopen(fileName, "w");
    fclose(fh);

    // rename file
    rename(fileName, fileNameNew);

    // Delete file
    remove(fileNameNew);

    // Write content in the file
    const char * information = "Hai this is test write\n";
    FILE *fh1 = fopen(fileName, "w");
    for(int i =0; i < 10; ++i) {
        fputs(information, fh1);
    }
    fclose(fh1);

    cout << "Reading file content" << endl;
    char buf[maxbuffer];
    FILE *fh2 = fopen(fileName, "r");
    while(fgets(buf, maxbuffer, fh2)) {
        fputs(buf, stdout);
        cout << "line break\n";
    }
    fclose(fh2);

    return 0;
}