#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int solution(int number) {
		int i; 
    i = 0;
  int soma;
  if( number < 0)
    return 0;
  
  while(number < 0)
    {
    if (number % 3 == 0 && number % 5 == 0)
      {
      soma = soma + number;
    number--;
  }
   else if (number % 3 == 0)
     { soma = soma + number;
    number--;
  }
  else if (number % 5 == 0)
    {
    soma = soma + number;  
    number--;
  }
  else
    {
    number--;
  }
  
}
    return number;
}

int main()
{
printf("%d", solution(10));
return 0;
}