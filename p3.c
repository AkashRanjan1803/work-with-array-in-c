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

int max=arr[0];
int min=arr[0];

for(int i=1;i<n;i++){
if(max<arr[i])
max=arr[i];
if(min>arr[i])
min=arr[i];
}
printf("Minimum: %d\n",min);
printf("Maximum: %d\n",max);
return 0;
}
