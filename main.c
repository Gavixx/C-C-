#include <stdio.h>
#include <stdlib.h>

#define FILE_PATH "test.bin"
#define MODE_BIN_WRITE "wb"
#define MODE_BIN_READ "rb"

FILE* openFile(const char* file_path, const char* mode);
void readArr(int *arr, const int n);
void reversePrintFile(FILE *fptr);

int main() {
  
  int n = 0;
  FILE *fptr = NULL;
  
  printf("Введіть кількість елементів: ");
  scanf("%d", &n);
  int arr[n];
  readArr(arr, n);
  fptr = openFile(FILE_PATH, MODE_BIN_WRITE);
  fwrite(arr, sizeof(arr), 1, fptr);
  fclose(fptr);
  
  fptr = openFile(FILE_PATH, MODE_BIN_READ);
  reversePrintFile(fptr);
  fclose(fptr);
  return 0;
}

FILE* openFile(const char* file_path, const char* mode)
{
  FILE *fptr;
  fptr = fopen(file_path, mode);
  if(fptr == NULL)
  {
    printf("Error! Файл не відкрито");
    exit(-2);
  }
  return fptr;
}

void readArr(int *arr, const int n)
{
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
}

void reversePrintFile(FILE *fptr)
{
  fseek(fptr, -sizeof(int), SEEK_END);
  long leng = ftell(fptr)/sizeof(int);
  for(; leng >= 0; leng--)
  {
    int a = 0;
    fread(&a, sizeof(int), 1, fptr);
    printf("%d ", a);
    fseek(fptr, -sizeof(int)*2, SEEK_CUR);
  }
}
