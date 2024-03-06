/*#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>

int string_to_int(const char* str) {
    int result = 0; 
    
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + str[i] - '0'; 
        }
        else {
           
            break;
        }
    }
    return result;
}

int main() {
    
    char line[128]; 
    int sum = 0;    
    
   FILE  = fopen_s(&fp,"init.txt", "r");
    if (fp == NULL) {
        printf("Eroare la deschiderea fi?ierului");
        return 1;
    }

    
    while (fgets(line, sizeof(line), fp)) {
        sum += string_to_int(line);
    }

    
    fclose(fp);

    
    printf("Suma numerelor este %d\n", sum);

    return 0;
}*/
/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_WORDS 100
#define MAX_WORD_LENGTH 100


int compare(const void* a, const void* b) {
    const char* word1 = *(const char**)a;
    const char* word2 = *(const char**)b;
    size_t len1 = strlen(word1);
    size_t len2 = strlen(word2);

   
    if (len1 != len2) {
        return (int)(len2 - len1); 
    }
    else {
        return strcmp(word1, word2); 
    }
}

int main() {
    char sentence[1000]; 
    char* words[MAX_WORDS]; 
    int n = 0; 
    char* context = NULL;

    
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    
    sentence[strcspn(sentence, "\n")] = 0;
    //char* context;
   
    char* word = strtok_s(sentence, " ", &context);
    while (word != NULL) {
        
        if (n < MAX_WORDS) {
            words[n++] = word;
        }
        word = strtok_s(NULL, " ", &context);
    }

    
    qsort(words, n, sizeof(char*), compare);

   
    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}*/
#include <iostream>

using namespace std;



bool isPrime(int n)

{

    for (int tr = 2; tr < n / 2; tr++)

        if ((n % tr) == 0)

            return false;

    return true;

}

int main()

{

    int n;

    std::cout << "Enter a number:";

    std::cin >> n;

    if (isPrime(n))

        std::cout << n << " is prime !";

    else

        std::cout << n << " is NOT prime !";

    return 0;

}





