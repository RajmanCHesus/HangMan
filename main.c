#include <stdio.h>
#include <string.h>

int main()
{
  char str[] = "Hello World";
  char guessedLetters[48] = {0};
  char newStr[48] = {0};
  int i = 0;

  while (strcmp(str, newStr) != 0)
  {
    printf("Enter a letter: ");
    char letter = getchar();
    getchar();

    if (letter == '0')
    {
      return 0;
    }

    guessedLetters[i] = letter;
    i++;

    for (int j = 0; str[j] != '\0'; j++)
    {
      if (strchr(guessedLetters, str[j]) != NULL)
      {
        newStr[j] = str[j];
      }
      else
      {
        newStr[j] = '_';
      }
    }
    printf("%s\n", newStr);
  }
  
  printf("You guesed the world!!");
  return 0;
}
