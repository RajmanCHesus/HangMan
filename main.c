#include <stdio.h>

int main()
{
  // char input;
  // printf("For exit press 'ESC'\n");
  // scanf("%s", &input);
  while (1)
  {
    int pocet = 0;
    char letter;
    printf("Enter a letter");
    scanf("%c", &letter);
    // input = getchar();
    // if (input == 27)
    // {
    //   return 0;
    // }
    char str[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd'};
    switch (letter)
    {
    case 'A':
    case 'a':
    case 'B':
    case 'b':
    case 'C':
    case 'c':
    case 'D':
    case 'd':
    case 'E':
    case 'e':
    case 'F':
    case 'f':
    case 'G':
    case 'g':
    case 'H':
    case 'h':
    case 'I':
    case 'i':
    case 'J':
    case 'j':
    case 'K':
    case 'k':
    case 'L':
    case 'l':
    case 'M':
    case 'm':
    case 'N':
    case 'n':
    case 'O':
    case 'o':
    case 'P':
    case 'p':
    case 'Q':
    case 'q':
    case 'R':
    case 'r':
    case 'S':
    case 's':
    case 'T':
    case 't':
    case 'U':
    case 'u':
    case 'V':
    case 'v':
    case 'W':
    case 'w':
    case 'X':
    case 'x':
    case 'Y':
    case 'y':
    case 'Z':
    case 'z':
      for (int i = 0; i < str[i]; i++)
      {
        if (str[i] == letter)
        {
          printf("%c", str[i]);
          pocet++;
        }
        else
        {
          printf("_");
        }
      }
      break;

    default:
      break;
    }
    printf("%i", pocet+1);

    
  }
  return 0;
}