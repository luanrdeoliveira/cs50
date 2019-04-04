#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[]){

    if(argc == 2 && isalpha(argv[1][0])){
    int x = 0;
    bool allalpha=true;
    do{
        if(!isalpha(argv[1][x])){
        allalpha = false;

        }
        x++;

    }
    while(x<strlen(argv[1]));

    if(argc == 2 && allalpha){


      char alphabet[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
      int cycle = 0;
      char *keyword =  argv[1];

      string plaintext = get_string("plaintext: ");



      printf("ciphertext: ");

      for (int i = 0, n = strlen(plaintext); i < n; i++)
      {
       // printf("%c\n", plaintext[i]);


       if(isalpha(plaintext[i]) && !isblank(plaintext[i])){

          if(cycle==strlen(argv[1])){

             cycle = 0;

         }

         if(isupper(plaintext[i])){

         int textletter = plaintext[i] - 65; //Pegando a posição do texto no alfabeto
         int keyletter = tolower(keyword[cycle]) - 97; //Pegando a posição da senha no afabeto
         int cypher = (textletter + keyletter)%26;
         printf("%c", toupper(alphabet[cypher]));





       }
        else{

        int textletter = plaintext[i] - 97; //Pegando a posição do texto no alfabeto
        int keyletter = tolower(keyword[cycle]) - 97; //Pegando a posição da senha no afabeto
        int cypher = (textletter + keyletter)%26;
        printf("%c", alphabet[cypher]);






       }
        cycle++;

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
    else{
      printf("syntax error\n");
      return 1;

    }




}
