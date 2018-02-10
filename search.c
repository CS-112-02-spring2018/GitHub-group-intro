/**
 * search.c
 *
 * Performs a word search on a file.
 *
 * Input:    File name to read and search term
 * Output:   Matching lines in the file
 *
 * Compile:  gcc -g -Wall -o search search.c
 *
 * Example Run:
 * ./search redemption.txt none
 * 17: None but ourselves can free our minds.
 * 19: 'Cause none of them can stop the time.
 * 33: None but ourselves can free our mind.
 * 35: 'Cause none of them-a can-a stop-a the time.
 *
 * ./search nest.txt we
 * 20: The way the nest-full every time we stirred
 * 26: That was a thing we could not wait to learn.
 * 27: We saw the risk we took in doing good,
 * 28: But dared not spare to do the best we could
 * 31: All this to prove we cared. Why is there then
 * 32: No more to tell? We turned to other things.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {


    /* TODO: Check for the correct number of arguments. If not present, then
     * print usage information and exit. */
    if (argc != 3){
        printf("The number of arguments is: %d\n", argc);
        printf("Sorry, you entered the wrong number of arugments for this program.");
        return EXIT_FAILURE;
    }



    /* TODO: Open the file for reading. If it doesn't exist or something goes
     * wrong print an error and exit. */
    
    FILE *file = fopen(argv[1], "r");
    if (file == NULL){
        perror("fopen");
        //rintf("The file does not exit!")
        return EXIT_FAILURE;
    }

    /* Assuming your FILE variable is named 'file', the following snippet will
     * count the number of lines in the file. You should modify this to perform
     * the word-based search through the file */
    int num_lines = 0;
    char line[500];

    while (fgets(line, 500, file) != NULL) {
        char Newline[500];
        strcpy(Newline, line);
        num_lines++;
        char *token = strtok(line," \n");
        while (token != NULL){
            if (strcasecmp(argv[2], token) == 0) {
                printf("%i:  %s", num_lines, Newline);
            }
            token = strtok(NULL, " \n");
            
        }
        
    }

    fclose(file);

   // printf("Number of lines: %d\n", num_lines);

    /* - HINT 1: strtok is destructive, so trying to print a string you've
     *   tokenized will not work.
     *
     * - HINT 2: to ignore case sensitivity when comparing words, use strcasecmp
     *   instead of regular strcmp.
     */

    return 0;
}