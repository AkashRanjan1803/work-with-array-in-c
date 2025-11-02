#include<stdio.h>
int main(){
int n;

printf("Enter no. of elements:\n");
scanf("%d",&n);

int arr1[n];
int arr2[n];

printf("Enter %d elements:\n",n);
for(int i=0;i<n;i++){
scanf("%d",&arr1[i]);
}

for(int i=0;i<n;i++){
arr2[i]=arr1[i];
}

printf("Elements copied:\n");
for(int i=0;i<n;i++){
printf("%d ",arr2[i]);
}
return 0;
}
