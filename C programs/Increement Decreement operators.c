#include<stdio.h>
int main()
{
  int a, b;
  printf("Enter the value to be incremented\n");
  scanf("%d", &a);
  printf("Enter the value to be decremented\n");
  scanf("%d", &b);
  int t=a,s=b;
  printf("\nThe pre increment to value %d ", ++t);// the value is incremented and then assigned
  printf("\nThe post increment to value %d ",a++);//the value gets incremented after assigning the value
  printf("\nThe pre decrement to value %d ",--s);// the value is decremented and then assigned
  printf("\nThe post decrement to value %d",b--);////the value gets decremented after assigning the value
}

//-Nirmal George Mathew
 //4SF18ME1005
// 4B
