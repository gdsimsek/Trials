long long findNb(long long m)
{
  long long toplam = 0;
  long long n = 1;
  while (toplam < m)
  {
    toplam += n * n * n;
    n++;
  }
  if (toplam == m)
  {
    return n - 1;
  }
  else
  {
    return -1;
  }
}