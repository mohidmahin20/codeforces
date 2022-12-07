#include <stdio.h>
int main()
{
  int t, b, c;
  scanf("%d", &t);
  for (int i = 0; i < t; i++)
  {
    scanf("%d %d", &b, &c);
    int arr[b];
    int sum = 0;
    for (int i = 0; i < b; i++)
    {
      scanf("%d", &arr[i]);
      sum+=arr[i];
    }
    int count = 0;
    for (int i = 0; i < b; i++)
    {
      if(arr[i]+c>sum-arr[i])
      {
        count++;
      }
    }
    printf("%d\n",count);
  }
  return 0;
}
