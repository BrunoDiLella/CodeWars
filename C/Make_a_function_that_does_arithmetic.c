double arithmetic(double a, double b, const char* operator) {
  while(operator[0] == 'a')
   {
    return (a + b);
 }
  while(operator[0] == 's')
    {
    return (a - b);
  }
  while(operator[0] == 'm')
   {
    return (a * b);
  }
  while(operator[0] == 'd')
    {
    return (a/b);
  }
  return(0);
}