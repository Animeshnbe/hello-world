#include<stdio.h>
struct hotel{
char name[50],address[100];
char grade;
float chg;
int rn;}h1,h2;

struct hotel comp(struct hotel h1,struct hotel h2){
	if(h1.chg<h2.chg)
	return h1;
	else
	return h2;
}

void disp(struct hotel g[10],char c,int count){
	int i;
	printf("The listed grade %c hotels in order of charges are:\n",c);
	for(i=0;i<count;i++){
		printf("\n#%d\t",(i+1));
		printf("Hotel: %s\n%s\nRate: %f",g[i].name,g[i].address,g[i].chg);
		printf("\nNumber of rooms: %d",g[i].rn);
	}
}

void main(){
	int n,i,j,k=0;
	struct hotel h[10],h_g[10];
	struct hotel *p[10]=&h[10],*p1[10]=&h_g[10];
	char g;
	printf("Enter the number of hotels(<10):\t");
	scanf("%d",&n);
	if(n < 10){
	for(i=0;i<n;i++){
     printf("Enter hotel name:");
     scanf("%s",h[i].name);
     printf("Enter address of this hotel:");
     scanf("%s",h[i].address);
     printf("Enter the hotel grade:");
     scanf("%c",&h[i].grade);
     printf("Enter the average room charge of the hotel:");
     scanf("%f",&h[i].chg);
     printf("Enter the number of rooms in this hotel:");
     scanf("%d",&h[i].rn);
     }
	printf("\nEnter a grade for search:");
	scanf("%c",&g);
	
	//sorting by price
	for(i=0;i<n;i++){
		h_g[k]=h[i];
		for(j=i+1;j<n;j++){
			if((h[i].grade==g)&&(h[j].grade==g))
			h_g[k]=comp(h_g[k],h[j]);
		}
	k++;}
	disp(h_g,g,k);}
	else
	printf("Invalid Input!");
}
