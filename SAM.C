#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float a[10][10],e=0.001,x[10][1],x_new[10][1],lambda_new,lambda_old=1.0;
	int n,i,j,p=1;
	printf("Enter n*n matrix:\nn=");
	scanf("%d",&n);
	printf("Enter matrix:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%f",&a[i][j]);
		}
	}
	printf("Assume X:\n");
	for(i=0;i<n;i++){
			scanf("%f",&x[i][0]);

	}
	mathi:
	for(i=0;i<n;i++){
		x_new[i][0]=0;
		for(j=0;j<n;j++){
			x_new[i][0]=x_new[i][0]+(a[i][j]*x[j][0]) ;
		}
	}
	lambda_new=fabs(x_new[0][0]);
	for(i=0;i<n;i++){
		if(lambda_new<fabs(x[i][0])){
			lambda_new=fabs(x[i][0]);
		}
	}
	for(i=0;i<n;i++){
		x[i][0]=x_new[i][0]/lambda_new;
	}
	printf("Iteration %d \n Eigen vector:\n",p);
	for(i=0;i<n;i++){
		printf("0.3%f\n",x[i][0]);
	}
	printf("-----------------------------------------------------\n");
	p++;
	printf("Eigen value:0.3%f\n",lambda_new);
	if(fabs(lambda_old-lambda_new)>e){
		lambda_old=lambda_new;
		goto mathi;
	}
	printf("So after %d iterations value up to 2 decimal places are equal\n So eigen value =%0.3f \n Eigen vector is\n",p-1,lambda_new);
	for(i=0;i<n;i++){
		printf("%f\n",x[i][0]);
	}
	return 0;

}
