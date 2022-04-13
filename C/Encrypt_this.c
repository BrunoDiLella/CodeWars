#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void toascii(char** a, char **b)
{
 if( **b == '\0' )
 return;
 char ch = **b;
 int sum = 1;
 while( ch != '\0' )
 {
 sum*=10;
 ch/=10;
 }
 while( sum != 1 )
 {
sum/=10;
*(*a)++ = **b / sum + '0';
**b%=sum;
 }
 ++*b;
}
void handover(char *a)
{
 char temp, *str = a;
 if( *a == '\0' )
return;
while( *str != '\0' && *str != ' ' )
str++;
 temp = *a;
*a = *--str;
 *str = temp;
}
char *encrypt_this(const char *str)
{
 size_t len = strlen(str), i;
 char *string = (char*)malloc( len * sizeof(char) +1);
 strncpy( string, str, len+1 );
 printf("str = %s\n", str);
char *temp = string;
char *target = (char*)malloc( 2 * len * sizeof(char) );
char *s = target;
for( i = 0; *temp != '\0'; i++ )
 {
 while( *temp == ' ' )
 temp++;
 if( i != 0 && *temp != '\0' )
 *target++ = ' ';
toascii( &target, &temp );
if(*temp != ' ')
handover( temp );
while( *temp != '\0' && *temp != ' ' )
 *target++ = *temp++;

 }
*target = '\0';
printf("s = %s\n", s);
 free(string);
return s; 
}