#include <stdio.h>
#include <string.h>
#ifdef _WIN32
#include <Windows.h>
#endif // Windows


#define BUFFER_SIZE 256
#define FILE_PATH "test.txt"
#define DEBUG

int main()
{
#ifdef _WIN32
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
#endif // Windows

  FILE* tf;
  char buffer[BUFFER_SIZE];

  printf("¬вед≥ть р€док символ≥в(не б≥льше н≥ж %d символи: ", BUFFER_SIZE - 1);
  fgets(buffer, BUFFER_SIZE, stdin);
  tf = fopen(FILE_PATH, "w");
  if (tf == NULL)
  {
    printf("Error! ‘айл не ≥снуЇ");
    exit(1);
  }
  fprintf(tf, "%s", buffer);
  fclose(tf);
#ifdef DEBUG
  printf("¬ведений текст: %s\n", buffer);
#endif // DEBUG


  for (int i = 0; i < BUFFER_SIZE && buffer[i] != '\0'; i++)
  {
    buffer[i]=0;
  }

  tf = fopen(FILE_PATH, "r");
  if (tf == NULL)
  {
    printf("Error! ‘айл не ≥снуЇ");
    exit(1);
  }
  fgets(buffer, BUFFER_SIZE, tf);

#ifdef DEBUG
  printf("«читаний з файлу текст: %s\n", buffer);
#endif // DEBUG


  char ch = 0;
  unsigned int count = 0;
  printf("¬вед≥ть символ дл€ пошуку: ");
  scanf("%c", &ch);
  for (int i = 0; i < BUFFER_SIZE && buffer[i] != '\0'; i++)
  {
    if(buffer[i] == ch)
      count++;
  }
  printf(" ≥льк≥сть %c в текст≥: %d", ch, count);
  fclose(tf);
  return 0;
}
