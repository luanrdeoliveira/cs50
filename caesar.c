#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[]){


    if(argc == 2 && atoi(argv[1]) > 0){

      char alphabet[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};


      string plaintext = get_string("plaintext: ");
      printf("ciphertext: ");

      for (int i = 0, n = strlen(plaintext); i < n; i++)
      {
       // printf("%c\n", plaintext[i]);

       if(isalpha(plaintext[i])){

         if(isupper(plaintext[i])){

         int alphavalue = plaintext[i] - 65; //Pegando a posição no alfabeto

         int cypher = (alphavalue + atoi(argv[1]))%26;

         printf("%c", toupper(alphabet[cypher]));





       }
          else{

          int alphavalue = plaintext[i] - 97;

          int cypher = (alphavalue + atoi(argv[1]))%26;

          printf("%c", alphabet[cypher]);

       }



       }
       else{

         printf("%c", plaintext[i]);

       }




      }

      printf("\n");


    }
    else{

      printf("syntax error\n");
      return 1;

    }




}
