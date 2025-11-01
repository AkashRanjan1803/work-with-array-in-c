#include<stdio.h>
int main(){
int n,e=0,o=0;

printf("Enter no. of elements:\n");
scanf("%d",&n);

int arr[n];
printf("Enter %d elements:\n",n);
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}

for(int i=0;i<n;i++){
if(arr[i]%2==0)
e++;
else
o++;
}
printf("Total even numbers: %d\n", e);
printf("Total odd numbers: %d\n", o);

return 0;
}
