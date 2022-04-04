int dontGiveMeFive(int start, int end)
{
  int r = 0;
  while(start <= end)
    {
    if(start == 0)
      {
      start++;
      r++;
    }
    
    if((((start % 5) == 0) && (start % 2 != 0)) || start / 10 == 5 || start / 100 == 5 | start / 1000 == 5)
      {
      start++;
    }
    else
      {
    start++;
      r++;
      }
  }
  return (r);
}