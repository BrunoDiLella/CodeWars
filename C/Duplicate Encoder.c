#include <stdlib.h>

#include <string.h>


char *DuplicateEncoder(char *x)
{
 int i = 0;
 int y = 0;

 size_t len = strlen(x);
 char *x1 = (char*)malloc( len * sizeof(char) + 1);
 char *x2 = (char*)malloc( len * sizeof(char) + 1);
 char z;

 while(x[i])
 {
   x1[i] = x[i];
   i++;
 }

 i= 0;


  while(x[i])
    {

    while(x[y])
      {
        if (x1[i] >= 65 && x1[i] <= 90)
      {
        z = x1[i] + 32;
        x1[i] = z;
     if(x1[i] == x1[y] && i!= y)
        {
         z = 41;
      x2[i] = z;
      i++;
      y=0;
      }
      else
        {
        y++;
      }
      }

      if(x1[i] == x1[y] && i!= y)
        {
         z = 41;
      x2[i] = z;
      i++;
      y = 0;
      }
      else
        {
        y++;
      }
    }

    if ( x2[i] != ')'&&  x[i] != '\0')
      {
        z = 40;
      x2[i] =z;
    }

    if(x2[i] == '\0')
    {
      z = '\0';
      x2[i] =z;
    }


    i++;
    y = 0;
     }

  
  return x2;
}