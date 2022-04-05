int findSum (int n)
{
  int r = 0;
  int i = 0;
  
  while(i <= n)
    {
    if ((i % 3 == 0) || (i % 5 == 0))
      {
      r = r + i;
      i++;
    }
    else
    i++;
  }
  return (r);
}