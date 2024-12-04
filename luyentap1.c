#include<stdio.h>
int main(){
	int arr[100];
	int n=0;
	int choice;
	do{
		printf("MENU\n");
		printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
		printf("2. In ra gia tri cac phan tu dang quann ly\n");
		printf("3. In ra gia tri lon nhat cua mang\n");
		printf("4. In ra cac phan tu la so nguyen to trong mang\n");
		printf("5. Them mot phan tu vao trong mang\n");
		printf("6. Xoa mot phan tu trong mang\n");
		printf("7. Sap xep mang theo thu tu tang dan\n"); 
		printf("8. Tim kiem phan tu(Nguoi dung nhap) va in ra vi tri index cua phan tu do \n");
		printf("9. Thoat \n");
		printf("Lua chon cua ban: "); 
		scanf("%d",&choice); 
		switch(choice){
			case 1:{
				printf("Nhap so phan tu: ");
				scanf("%d",&n);
				printf("Nhap cac gia tri phan tu cua mang: \n");
				for (int i=0; i<n; i++){
				    printf("phan tu %d: ", i);
				    scanf("%d",&arr[i]); 
			}
				break;
			}  
		    case 2:{
			printf("Cac phan tu dang quan ly: ");
			for(int i=0; i<n; i++){
				printf("%d ",arr[i]);  
			}
			printf("\n "); 
			break;
	}
            case 3:{
            	 int max=arr[0];
				 for(int i=1; i<n; i++){
				 	if(arr[i]>max){
				 		max=arr[i]; 
					 } 
				 } 
				 printf("phan tu lon nhat cua mang la: %d\n", max); 
				break;
			} 
	        case 9:{
	        	printf("Thoat chuong trinh.\n"); 
				break;
				default:
				printf("Khong hop le,Vui long nhap lai:\n"); 
			} 
		} 
	} while(choice!=9);
	return 0; 
} 
