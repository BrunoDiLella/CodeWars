#include<stdio.h>
char* printerError(char *s) {
    int i;
    int erros;
  
  i =0;
  erros =0;
  
  while(s[i])
    {
    if(s[i] > 109)
      {
      erros++;
    i++;
      }
    else
      i++;
  }
  return (i, erros);
}

int main()
{
  char s[] = "";
  printerError(s);
}
