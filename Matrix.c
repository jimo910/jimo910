
#include <stdio.h>
void multimatrices( size_t i, size_t j, size_t d, size_t h);
int determinant(int arr[][2]);
int matdeterminant(int arr[][3], size_t j);
int main(){
//	int arr[3][3] ={{3,4,5}, {7,4,9}, {4,6,0}};
	printf("// press 1  for determinant of a matrices\n");
	printf("// press 2 to multiply two matrices together\n");
	printf("which task do you want to do?");
	int choice;
	scanf("%d", &choice);
	if(choice==1){
			printf("the no of row of the matrix?");
			size_t w;
			scanf("%d", &w);
			int arr[w][w];
			int u, v;
			for(u=0; u<w; u++){
	 			for(v=0; v<w; v++){
	 				int element;
	 				printf("row %d columm %d of the first matrices : ", u,v);
	 				scanf("%d", &element);
	 				arr[u][v]= element;
	 			}
	 		}
	 		if(w==3){
			int x =matdeterminant(arr,3);
			printf("the determinant is %d", x);
		}else{
			determinant(arr);
		}
		
		}else if(choice==2){
				printf(" what is the no of row & column");
				int i, j, d,h;
				puts(" what is the row of the first matrix?");
				scanf("%d", &i);
				puts(" what is the column of the first matrix?");
				scanf("%d", &j);
				puts(" what is the row of the second matrix?");
				scanf("%d", &d);
				puts(" what is the column of the second matrix?");
				scanf("%d", &h);
				multimatrices(i, j, d,h);	
		}
		else{
		
			printf("no task to carry on");
			puts(" enter the correct choice");
	}
}
void multimatrices(size_t i, size_t j, size_t d, size_t h){
	if(i==h){   
	int arr[i][j];
	int array[d][h];
	int aray[d][j];  
	int ar[j];
   	int ac[d];
	size_t u, v;
	 for(u=0; u<i; u++){
	 	for(v=0; v<j; v++){
	 		int element;
	 		printf("row %d columm %d of the first matrices : ", u,v);
	 		scanf("%d", &element);
	 		arr[u][v]= element;
		 }
	 } 
	size_t l, k, s, t, q, m, f, w;
	for(l=0; l<d; l++){
	 	for(k=0; k<h; k++){
	 		int elemen;
	 		printf("row %d columm %d of the second matrices: ", l, k);
	 		scanf("%d", &elemen);
	 		array[l][k]= elemen;
		 }
	 }
   
   for(s=0; s<i; s++){
   	 for(m=0; m<h; m++){
   			for (t=0; t<j; t++){
   				ar[t]= arr[s][t];
   	   			ac[t]= array[t][m];
   	}
	  
	   size_t op;
	   int elet =0;
	for(op=0; op<j; op++){
		int  elect;
		elect = ar[op] * ac[op];
		elet= elet + elect;
 }

	 aray[s][m]= elet;
	 printf("%d\t", aray[s][m]);
	 
	 
 }
 printf("\n");
}


}else{
	printf("the multplication is not viable");
}

}
int determinant(int arr[][2]){
	size_t j;
	for(j=0; j<1; j++){
		int elet;
		int elm;
		elet= arr[j][j] * arr[j+1][j+1];
		elm=arr[j][j+1] * arr[j+1][j];
		int deter;
		deter= elet - elm;
		return deter;
		}
	
}

int matdeterminant(int arr[][3], size_t j){
	int ac[j];
	int ary[2][2];
	size_t w;
	int elet=0;
	int mum;
	mum=0;
	int r=0;
	int v=0;
	size_t x, u;
	int dim;
	if(j==3){
			for(w=0; w<3; w++){
				ac[w]= arr[r][w];
				for(x=1; x<3; x++){
					for(u=0; u<3; u++){
						if(w==u){
							continue;
						}else{
							int rs= x-1;
							ary[rs][v]=arr[x][u];
							v= v+1;
						}
						
					}
					printf("\n");
					v=0;
				}
				int x=determinant(ary);
				elet= ac[w] * x;
				if((w+2)%2==1){
					 dim = -(elet);
					
				}else{
					dim= elet;
				}
				 mum= dim+mum;	
			}
		}else{
			printf(" this is method not acccurate");
			
		}
		return mum;
	
   }




