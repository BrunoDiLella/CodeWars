#include <unistd.h>
#include <string.h>
#include <stdlib.h>


char *accum(const char *source)
{
  int i = 0;
  int yi = 0;
  int x = 0;
  int c = 0;
  char y;
  int len = strlen(source);
  int tlen = len * (len + 1) / 2 + len;
  char *yu = malloc(tlen);
  if (yu == NULL) return NULL;
  yu[tlen - 1] = '\0';
  
  while(source[i])
    {
    c++;
    i++;
  }
  i = 0;
  while (source[i])
    {
    if((source[i] >= 'a' && source[i] <= 'z'))
      {
      y = source[i] - 32;
      write(1, &y, 1);
      yu[yi] = y;
      yi++;
    }
    else
      {
        y = source[i];
        write(1, &y, 1);
        yu[yi] = y;
        yi++;
      }
    
    while(x < i)
      {
      if((source[i] >= 'A' && source[i] <= 'Z'))
        {
        y = source[i] + 32;
        write(1, &y, 1);
        yu[yi]=y;
        yi++;
        x++;
      }
      else
        {
      y = source[i];
      write(1, &y, 1);
        yu[yi]=y;
        yi++;
      x++;
        }
        
    }
    if(x + 1 != c)
      {
      y = '-';
      yu[yi] = y;
      
    write(1, "-", 1);
      }
    
    x = 0;
    i++; 
     yi++;
  }
    return (yu);
}