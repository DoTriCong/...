#include<stdio.h>
int main(){
	int chose; 
	int arr[3][3];
	int n= 3;
	int m=3; 
	do{
	printf("MENU \n");
	printf("1.Nhap kich co va phan tu trong mang \n");
	printf("2.Cac gia tri cua mang theo ma tran: \n");
	printf("3.In ra cac phan tu nam tren duong bien va tinh tich \n");
	printf("4.In ra cac phan tu nam tren duong cheo chinh \n");
	printf("5.In ra cac phan tu nam tren duong cheo phu \n");
	printf("6.Sap xep cac phan tu trong duong cheo chinh theo tt tang dan \n");
	printf("7.Tim kiem phan tu va in ra vi tri cua no neu tim thay \n");
	printf("8.Thoat \n");
	printf("Lua chon cua ban la: "); 
	scanf("%d",&chose); 
	switch(chose){
		case 1: 
		printf("Nhap so dong: ");
                scanf("%d", &n);
                printf("Nhap so cot: ");
                scanf("%d", &m);
                printf("Nhap gia tri cac phan tu cua mang :\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        printf("Phan tu [%d][%d]: ", i, j);
                        scanf("%d", &arr[i][j]);
                    }
                }
	     	break; 
		case 2:
		    printf("in ra cac phan tu trong mang\n");
			for(int i=0; i<n; i++){ 
		    	for(int j=0; j<n;j++){
		    		printf("%d \t",arr[i][j]);
			  } 
			  	printf("\n"); 
		} 
		    break; 
		case 3:{
		     int tich = 1;
            printf("Cac phan tu tren duong bien la: ");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                      if (i == 0 || j == 0 || i == n - 1 || j == m - 1) {
                         printf("%d ", arr[i][j]);
                           tich *= arr[i][j];
               }
              }
             }
               printf("\nTich cac phan tu tren duong bien: %d\n", tich);
               break;
            }
		case 4: 
	        	printf("Cac gia tri trong duong cheo chinh la: ");
		    for(int i=0; i<3;i++){
			   printf("%d  ",arr[i][i]); 
		}
		printf("\n"); 
		    break; 
		case 5:
		    printf("cac phan tu trong duong cheo phu la:  ");
			for(int i=0; i<n; i++){
				printf("%d \t",arr[i][n-i-1]); 
			}
			printf("%n"); 
	    	break;   
		case 6:
            for(int i=0; i<n-1;i++){
		     	for(int j=i+1; j<n; j++){
		     		if(arr[i][i]>arr[j][j]){
		     			int temp= arr[i][i];
						 arr[i][i]=arr[j][j];
						 arr[j][j]=temp; 
					 }
					  
				 } 
		     }
		     printf("Duong cheo chinh sau khi duoc sap xep tang dan: ");
                for (int i = 0; i < n && i < m; i++) {
                    printf("%d ", arr[i][i]);
                    }
                printf("\n");
	    	break;    
		case 7: {
			int x, found = 0;
                printf("Nhap gia tri can tim : ");
                scanf("%d", &x);
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        if (arr[i][j] == x) {
                            printf("Phan tu %d xuat hien tai vi tri [%d][%d]\n", x, i, j);
                            found = 1;
                        }
                    }
                }
                if (!found) {
                    printf("khong tim thay phan tu  %d trong mang.\n", x);
                }
                break;
            }
		case 8: 
		printf("Thoat chuong trinh.\n");
	    	break;  
	    	   default:
                printf("Lua chon khong hop le. Vui long chon lai !!!\n");
	}
} while(chose!=8); 
return 0; 
}

