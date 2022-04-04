int digital_root(int n) {
  int r = 0;
  int x = 0;
  int y = 0;
  int z = 0;
  if ( n < 10) 
  {
    return (n);
  }
  
  while(n > 10 )
 {
   r = n % 10;
   n = n / 10;
  x = x + r;
  }
  if(n == 10)
    {
    n++;
  }
   r = n % 10;
   x = x + r;
  
  if (x < 10)
    {
    return (x);
  }
  while(x > 10)
    {
    r = x % 10;
    x = x /10;
    y = y + r;
  }
  if(x == 10)
    {
    x++;
  }
  r = x % 10;
  y = y + r;
  
  if ( y < 10)
    {
    return (y);
  }
  while(y > 10)
    {
    r = y % 10;
    y = y / 10;
    z = z + r;
  }
  if (y == 10)
    {
    y++;
  }
  r = y % 10;
  z = z + r;
  return (z);
}
