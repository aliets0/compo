#include <string.h>
#include <stdlib.h>
#include <stdio.h>


int main(int argc, char *argv[])
{
  char sc[30], fn[30], ys[30];
 

  
  printf("Enter source code (should end with .c): ");
  fgets(sc, 255, stdin);
  printf("Enter executable file name: ");
  fgets(fn, 255, stdin);
  printf("Enter script name (name of program): ");
  fgets(ys, 255, stdin);
  sc[strcspn(sc, "\n")] = '\0';
  fn[strcspn(fn, "\n")] = '\0';
  ys[strcspn(ys, "\n")] = '\0';
  FILE *fo = fopen(argv[1], "w+");
  fprintf(fo,"gcc %s -o %s\n", sc, fn);
  fprintf(fo,"chmod +x %s\n", ys);
  fprintf(fo,"cp %s /usr/bin/", ys);
  
  fclose(fo);


  return 0;
} 
