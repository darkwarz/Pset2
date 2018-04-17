#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//By: Jabier Espinal 4-16-2018
// Vigenere.c
int main(int argc, string argv[])
{

    string input; // string variable user input

    if (argc != 2) // specified number of arguments not 2
    {
        printf("Caesar would not approve what you typed in, do it again!!\n"); // prompt user to enter key
        return 1;
    }

    string keyword = argv[1]); // store user key word

    for (int i = 0; i < strlen(keyword); i++) // if not a keyword alphabetic reject keyword
    {
        if (!alpha(keyword[i]))
        {
        printf("Error: Keyword must only contain alphabetic characters\n");
        return 1;
        }
    }
    else
    {

        string input = get_string("plaintext: "); // Prompt user for input
        printf("ciphertext: ");
        char cipher;
        int j = 0;


        for (int i = 0, n = strlen(input); i < n; i++)  // checks for string length input
        {
            cipher = input[i];

            if (isalpha(input[i])) // checks for string values

            {
                int vige = j % strlen(keyword);
            }

            if islower(input[i])  // checks for lower case
            {
                keyword[vige] = toLower(keyword[vige]);

            if (cipher + ((keyword[vige]) - 'a') > 'z')
            {
                cipher = ('a' - 1) + ((cipher + (keyword[vige] - 'a')) % 'z');
            }

            else
             {
                 cipher += (keyword[vige] - 'a');
             }
        }

            else
            {
                keyword[vige] = toupper(keyword[vige]);

                if (cipher + (keyword[vige] - 'A') > 'Z')
                {
                    cipher = ('A' -1) + ((cipher + (keyword[vige] - 'A')) % 'Z');
                }

                else
                {
                    cipher += (keyword[vige] - 'A');
                }
            }

            j++;
                }
            }
            printf("ciphertext: %s\n, input);
    }