
#include<stdio.h>

int main(){

int a[30],n,number;
printf("Enter the size of array(less than 30)");
scanf("%d",&n);
int pos,i;

printf("Enter the array numbers");
for(i=0;i<n;i++){
	printf("%dth =>",i+1);
	scanf("%d",&a[i]);
}
printf("Enter the number to be searched for ");
scanf("%d",&number);

for(int i = 0;i<n;i++){

	if(a[i]==number){
	pos =i+1;
		}
}
printf("number %d is present at the position [ %d ] in array.",number,pos);

return 0;
}
