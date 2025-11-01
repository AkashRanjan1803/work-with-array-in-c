#include<stdio.h>
int main() {
int n,a=0;

printf("Enter no. of elements:\n");
scanf("%d",&n);

int arr[n];
printf("Enter %d elements:\n",n);
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
a=a+arr[i];
}
float b=(float)a/n;
printf("Total sum:=%d\n",a);
printf("Total avg=%f\n",b);

return 0;
}
