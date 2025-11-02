#include<stdio.h>
int main(){
int n;

printf("Enter no. of elements:\n");
scanf("%d",&n);

int arr[n];
printf("Enter %d elements:\n", n);
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}

int l, s;
if(arr[0]>arr[1]){
l=arr[0];
s=arr[1];
}else{
l=arr[1];
s=arr[0];
}
for(int i=2;i<n;i++){
if(arr[i]>l){
s=l;         
l=arr[i];     
} 
else if(arr[i]>s&&arr[i]!=l){
s=arr[i];
}
}

printf("Second largest element: %d\n", s);
return 0;
}

