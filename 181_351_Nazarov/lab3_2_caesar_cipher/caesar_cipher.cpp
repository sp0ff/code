#include <iostream>
// Lab 3 (task 2)
int main()
{
// Caesar cipher encryption of an initialized char array

    char plaintext[] = "The quick brown fox jumps over the lazy dog"; // initialize original array
    char c; // var for the current character
    char *ciphertext = plaintext; // for clarity sake
    int shift_size = 3;

    std::cout << "PLAINTEXT:\t" << plaintext << std::endl;

    for (int i = 0; plaintext[i] != '\0'; ++i) // walk through the array
    {
        c = plaintext[i];

        if (c >= 'a' && c <= 'z') // lowercase letter
        {
            c += shift_size;
            if (c > 'z') // if the new c is not a letter
            {
                c = c - 'z' + 'a' - 1;
            }
            plaintext[i] = c;
        }
        else if (c >= 'A' && c <= 'Z') // uppercase letter
        {
            c += shift_size;
            if (c > 'Z')
            {
                c = c - 'Z' + 'A' - 1;
            }
            plaintext[i] = c;
        }
    }
    std::cout << "CIPHERTEXT:\t" << ciphertext << std::endl;

    return 0;
}
