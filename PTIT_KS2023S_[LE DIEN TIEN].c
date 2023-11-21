#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int numbers[100];
    int choice;
    int currentIndex = 0;
    int size;
    float averagenumbers;
    int sum;
    int countNumbers;
    int findNumbers;
    int k;
    int j;
    int n;
    int Number;
    do{
        printf("**********************MENU*********************\n");
        printf("1.Nhap gia tri n phan tu cua mang\n");
        printf("2.In gia tri cac phan tu trong mang\n");
        printf("3.Tinh trung binh cac phan tu duong trong mang\n");
        printf("4.In ra vi tri(chi so) cac phan tu co gia tri bang k trong mang\n");
        printf("5.Su dung thuat toan sap xep noi bot sap xep mang giam dan\n");
        printf("6.Tinh so luong cac phan tu la so nguyen to trong mang\n");
        printf("7.Sap xep cac phan tu chan chia het cho 3 o dau mang theo thu tu tang dan, cac phan tu le chia het cho 3 o cuoi mang theo thu tu giam gian, cac phan tu con lai o giua mang theo thu tu tang dan\n");
        printf("8. Nhap gia tri m tu ban phim, chen gia tri m vao mang(sap xep giam dan) dung vi tri\n");
        printf("9.Thoat\n");
        printf("Nhap lua chon:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                    printf("Nhap vao so phan tu cua mang:");
                    scanf("%d",&size);
                    for(int i=0;i<size;i++){
                        printf("numbers[%d]=",currentIndex);
                        scanf("%d",&numbers[currentIndex]);
                        currentIndex++;
                    }
                    break;
            case 2:
                    for(int i=0; i< currentIndex;i++){
                        printf("%d\t",numbers[i]);
                    }
                    printf("\n");
                    break;
                    
            case 3:
                    sum = 0;
                    averagenumbers = 0;
                    for(int i=0;i<currentIndex;i++){
                        if(numbers[i]>0){
                            printf("%d\t",numbers[i]);
                            sum+=numbers[i];
                            averagenumbers = sum / numbers[i];
                    }
                    }
                    printf("Trung binh cac phan tu duong la:%.2f\t",averagenumbers);
                    break;
            case 4: 
		            printf("nhap gia tri can tim \n");
		            scanf("%d",&k);
		            for(int i=0; i<currentIndex; i++){
			        if(numbers[i]==k){
                    printf("numbers[%d] \n",i);
                } 
		        }
            case 6:
                Number = 0;
				printf("Cac so nguyen to trong mang: ");
				for(int i=0;i<currentIndex;i++){
					int isPrime = 0;
					if(numbers[i]>=2){
						for(int j=2;j<=sqrt(numbers[i]);j++){
							if(numbers[i]%j==0){
								isPrime = 1;
								break;
							}
						}
					}else{
						isPrime=1;
					}
					if(isPrime==0){
						printf("%d\t",numbers[i]);
						Number++;
					}
				}
				printf("\nSo cac so nguyen to la: %d\n",Number);
				break;
            case 5:
                for(int i=0;i<currentIndex;i++){
                    for(int j=i+1;j<currentIndex;j++){
                        if(numbers[i]<numbers[j]){
                            int temp = numbers[i];
                            numbers[i] = numbers[j];
                            numbers[j]=temp;
                        }
                    }
                }
                printf("Mang sau khi da sap xep giam dan:\n");
                for(int i=0;i<currentIndex;i++){
                    printf("%d\t",numbers[i]);
                }
                break;
            case 9:
                exit(0);
            default:
                printf("Vui long chon tu 1-8\n");
 }   
    }while(1==1);
}
