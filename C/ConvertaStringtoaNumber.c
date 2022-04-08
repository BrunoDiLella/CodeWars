int string_to_number(const char *src) {
int neg;
  int num;
  int i;

  i = 0;
  neg = 1;
  num = 0;
  while (src[i] <= ' ')
    i++;
  if (src[i] == '-' || src[i] == '+')
  {
    if (src[i] == '-')
    {
      neg *= -1;
    }
    i++;
  }
  while (src[i] >= '0' && src[i] <= '9')
  {
    num = num * 10 + (src[i] - 48);
    i++;
  }
  return (num * neg);
}