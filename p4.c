#include<stdio.h>
int main(){
int n,found = 0;

printf("Enter no. of elements:\n");
scanf("%d",&n);

int arr[n];
printf("Enter %d elements:\n",n);
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int a;
printf("Enter element to search:\n");
scanf("%d",&a);

for(int i=0;i<n;i++){
if(arr[i]==a){
printf("Element %d found at position %d.\n",a,i+1);
found = 1;
break;
}
}
if(!found)
printf("Element %d not found in the array.\n", a);
return 0;
}
