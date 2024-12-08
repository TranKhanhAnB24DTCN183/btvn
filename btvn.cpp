#include<stdio.h>
int main(){
	int n;
	int arr[100];
	int check;
	int sum=0;
	int pos,value;
	int i;
	int numbers;
	int choise;
	
	
	

 do {
        printf("\n\tMENU\n");
        printf("1. Nhap so luong va gia tri cho cac phan tu\n");
        printf("2. In mang\n");
        printf("3. Dem so luong so hoan hao\n");
        printf("4. Dem so luong so nguyen to\n");
        printf("5. Tim gia tri lon thu 2\n");
        printf("6. Tim gia tri nho thu 2\n");
        printf("7. Them phan tu tai vi tri\n");
        printf("8. Xoa phan tu tai vi tri\n");
        printf("9. Sap xep mang tang dan(insertion sort)\n");
        printf("10. Sap xep mang giam dan(insertion sort)\n");
        printf("11. Tim kiem phan tu (tim kiem nhi phan)\n");
        printf("12. Xoa phan tu trung lap va in ra phan tu doc nhat\n");
        printf("13. Sap xep va hien thi so chan dung truoc so le dung sau \n");
        printf("14. Dao nguoc mang\n");
        printf("15. Thoat\n");
      printf("Nhap vao chuc nang :");
      scanf("%d",&check);
      
      if(check==15){
      	printf("Thoat chuong trinh !!!");
      	break;
	  }
	switch(check){
		case 1:
				{
				 printf("Nhap vao so phan tu co trong mang:");
				 scanf("%d",&n);
				 for(int i=0;i<n;i++){
				 	printf("Arr[%d]=",i);
				 	scanf("%d",&arr[i]);
				 }
				 break;
			    }
	    
		case 2:
            	{
                printf("Gia tri cac phan tu trong mang:\n");
                for (int i = 0; i < n; i++) {
                    printf("Arr[%d]=%d\t ", i, arr[i]);
                }
                printf("\n");
				 }
                break;
	    
	   case 3: {
                int count = 0;
                for (int i = 0; i < n; i++) {
                    int sum = 0;
                    for (int j = 1; j < arr[i]; j++) {
                        if (arr[i] % j == 0) {
                            sum += j;
                        }
                    }
                    if (sum == arr[i]) {
                        count++;
                    }
                }
                printf("So luong so hoan hao: %d\n", count);
                break;
             }
        case 4:
            {
                int count = 0;
                for (int i = 0; i < n; i++) {
                    int isPrime = 1;
                    if (arr[i] <= 1) isPrime = 0;
                    for (int j = 2; j * j <= arr[i]; j++) {
                        if (arr[i] % j == 0) {
                            isPrime = 0;
                            break;
                        }
                    }
                    if (isPrime) count++;
                }
                printf("So luong so nguyen to: %d\n", count);
                break;
            }
        case 5:
        	{
			       if (n < 2) {
                    printf("Khong du phan tu de tim gia tri lon thu 2.\n");
                    break;
                }
                int max = arr[0], secondMax = -1;
                for (int i = 1; i < n; i++) {
                    if (arr[i] > max) {
                        secondMax = max;
                        max = arr[i];
                    } else if (arr[i] > secondMax && arr[i] != max) {
                        secondMax = arr[i];
                    }
                }
                printf("Gia tri lon thu 2: %d\n", secondMax);
                break;
            }
		    
		case 6:
		    	{
                    printf("Mang gom nhung phan tu la :\n");
		   			for(int i=0;i<n;i++){
						printf("%d\t",arr[i]);
					    }
				        printf("\n");
					for(int i=1;i<n;i++){
							int key=arr[i];
							int j=i-1;
						while(j>=0&&key<arr[j]){
							arr[j+1]=arr[j];
							j--;
						}
						arr[j+1]=key;
						
					}
					printf("\n");
					printf("Phan tu nho thu hai trong mang :");
					for(int i=0;i<n;i++){
						if(i=1){
							printf("%d\t",arr[i]);
							break;
						}
					}
                }
                break;
		   case 7:
		    {
			    printf("Nhap vi tri muon them phan tu : ");
			    scanf("%d", &pos);
			 
			    if (pos < 0 || pos > n) {
			        printf("Vi tri khong hop le\n");
			        return 1;
			    }
			
			    printf("Nhap gia tri muon chen: ");
			    scanf("%d", &value);
					    
			    for (i = n; i > pos; i--) {
			        arr[i] = arr[i - 1];
			    } 
				    arr[pos] = value;
				    n++;
			
			    printf("Mang sau khi chen gia tri :\n");
			    for (i = 0; i < n; i++) {
			        printf("%d ", arr[i]);
			    }
			    printf("\n");
                }
                break;
		   case 8:
		   	 {
                printf("Nhap vi tri muon xoa: ");
			    scanf("%d", &pos);
			
			   
			    if (pos < 0 || pos > n) {
			        printf("Vi tri khong hop le\n");
			        break;
			    }
			
			     pos=pos-1;
			    
			    for (i = pos; i <n-1; i++) {
			        arr[i] = arr[i+1];
			    } 
				    n--;
			
			    printf("Mang sau khi xoa :\n");
			    for (i = 0; i < n; i++) {
			        printf("%d ", arr[i]);
			    }
			    printf("\n");
                }
                break;
		   case 9:
		   	 {
                for (int i = 0; i < n - 1; i++) {
                    for (int j = i + 1; j < n; j++) {
                        if (arr[i] > arr[j]) {
                            int temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }
                printf("Mang da sap xep tang dan.\n");
                break;
            }
		   case 10:
		   		{
                    printf("Mang gom nhung phan tu la :\n");
		   			for(int i=0;i<n;i++){
						printf("%d\t",arr[i]);
					    }
				        printf("\n");
					for(int i=1;i<n;i++){
							int key=arr[i];
							int j=i-1;
						while(j>=0&&key<arr[j]){
							arr[j+1]=arr[j];
							j--;
						}
						arr[j+1]=key;
						
					}
					printf("\n");
					printf("Mang sau khi sap xep theo thu tu giam dan la :\n");
					for(int i=n-1;i>=0;i--){
							printf("%d\t",arr[i]);
						}
                }
                break;
		   	
		   case 11:
		   	{
	            printf("Mang hien tai la");
				   for(int i=0;i<n;i++){
				     	printf("%d\t",arr[i]);
			    }
			     printf("\nNhap vao phan tu can tim ");
			     scanf("%d",&numbers);
			     int check=0;
			      for(int i=0;i<n;i++){
			      	if(arr[i]==numbers){
			      		printf("Phan tu co trong mang nam o vi tri thu %d\n",i);
			      		check=1;
					  }	 
			    }
			       if(check==0){
			       	printf("Mang khong chua phan tu can tim\n");
				   }
			}
                break;
		   case 12:
		   	 {
				printf("Cac phan tu doc nhat: ");
			    for (int i = 0; i < n; i++) {
			        choise = 1; 
			
			      
			        for (int j = 0; j < n; j++) {
			            if (arr[i] == arr[j] && i != j) {
			                choise = 0; 
			                break;
			            }
			        }
			
			     
			        if (choise==1) {
			            printf("%d ", arr[i]);
			        }
			    }
			    printf("\n");
			}
		       break;
		   case 13:
		    {
                int evenIndex = 0, oddIndex = n - 1;
                int temp[100];
                for (int i = 0; i < n; i++) {
                    if (arr[i] % 2 == 0)
                        temp[evenIndex++] = arr[i];
                    else
                        temp[oddIndex--] = arr[i];
                }
                for (int i = 0; i < n; i++) {
                    arr[i] = temp[i];
                }
                printf("Mang sau khi sap xep so chan truoc, so le sau.\n");
                break;
            }
		   	  
		   case 14:
		   		{
                    printf("Mang gom nhung phan tu la :\n");
		   			for(int i=0;i<n;i++){
						printf("%d\t",arr[i]);
					    }
				        printf("\n");
				    printf("Mang dao nguoc la :\n");
					for(i=n-1;i>=0;i--){
						printf("%2d\t",arr[i]);		
					}
					   
					break;
				}
					
		   case 15:
		   	 printf("Thoat chuong trinh !!!");
		default:
			printf("Loi vui long nhap lai...");
		   
}

}while(check!=15);


    return 0;
     
}
