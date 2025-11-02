#include<stdio.h>
int main(){
int n;

printf("Enter no. of elements:\n");
scanf("%d",&n);

int arr[n];
printf("Enter %d elements:\n",n);
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
for(int i=0;i<n/2;i++){
int t=arr[i];
arr[i]=arr[n-i-1];
arr[n-i-1]=t;
}
printf("Reversed number:\n");
for(int i=0;i<n;i++){
printf("%d ",arr[i]);
}
return 0;
}
