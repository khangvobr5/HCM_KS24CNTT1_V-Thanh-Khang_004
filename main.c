#include <stdio.h>
#define MAX_SIZE 50

int main(void) {
    int usage[MAX_SIZE]={120,250,180,95,310};
    int n = 5;
    int choice;
    do {
        printf("========================================\n"
               "CHUONG TRINH QUAN LY DIEN NANG SAO MAI\n"
               "========================================\n"
               "1. Them chi so dien tieu thu\n"
               "2. Sua chi so dien tieu thu\n"
               "3. Xoa chi so dien tieu thu\n"
               "4. Tim kiem chi so dien tieu thu\n"
               "0. Thoat chuong trinh\n"
               "Vui long nhap lua chon cua ban (0 - 4): \n");
        scanf("%d",&choice);
        switch(choice) {
            case 1:
                int value,pos;
                printf("Vui long nhap gia tri: ");
                scanf("%d",&value);
                printf("Vui long nhap thu tu muon them: ");
                scanf("%d",&pos);
                if(n >= 50) {
                    printf("Mang da day, khong the them\n");
                    break;
                }
                if (pos < 0) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }else {
                    for(int i=1;i<pos;i++) {
                        int temp;
                        if (i == pos-1) {
                            for(int j=i;j<n;j++) {
                                temp = usage[j+1];
                                usage[j+1]=usage[j];
                            }
                        }
                    }
                    usage[pos-1]=value;
                    n++;
                    for(int i=0;i<n;i++) {
                        printf("%d", usage[i]);
                        printf("\n");
                    }
                }
                break;
            case 2:

                if (pos < 0) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }else {
                    int value,pos;
                    printf("Vui long nhap gia tri: ");
                    scanf("%d",&value);
                    printf("Vui long nhap thu tu muon them: ");
                    scanf("%d",&pos);
                    for(int i=0;i<pos;i++) {
                        if (i == pos-1) {
                            usage[i]=value;
                        }
                    }
                    for(int i=0;i<n;i++) {
                        printf("%d", usage[i]);
                        printf("\n");
                    }
                }
                break;
            case 3:

                break;
            case 4:
                int taget;
                printf("vui long nhap taget: ");
                scanf("%d",&taget);
                for(int i=0;i<n;i++) {
                    if (usage[i] == taget) {
                        printf("tim thay vi tri tai: %d\n",i+1);
                    }else {
                        printf("khong tim thay\n")
                    }
                }
                break;
            default:
                printf("Lua chon khong hop le!\n");
                break;
        }
    }while(choice != 0);
    return 0;
}
