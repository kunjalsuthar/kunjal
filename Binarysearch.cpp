#include<stdio.h>
#include<stdlib.h>
#define n 10
int a[n] = {1,5,14,42,65,72,80,88,92,99};
int high,low,mid;
int Binarysearch (int x)
{
  low = 0 , high = n-1;
  while (low <= high)
  {
    mid = (low + high)/2;
    if (a[mid] == x)
    return mid +1 ;
    else if (a[mid] < x)
    low = mid + 1;
    else 
    high = mid - 1;
  }
  return -1;
}

int main ()
{
for (int i=0 ;i<n;i++)
printf (" %d ",a[i]);
int x ;
printf ("\n Enter search element : ");
scanf ("%d",&x);
int b = Binarysearch (x);
if (b==1)
printf (" Element is not found .....");
else 
printf (" Element is foundat %d position :",b);
}