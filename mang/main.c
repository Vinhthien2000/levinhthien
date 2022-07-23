#include <stdio.h>
#include<stdint.h>
#include<string.h>

 
 
void NhapMangArray(int a[], int n){
    for(int i = 0;i < n; ++i){
        scanf("%d", &a[i]);
    }
}
 
void XuatMangArray(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("%d", a[i]);
    }
    printf("\n");
}
 
 
 int LonNhat(int a[], int n){
    int GTlonnhat = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] > GTlonnhat){
            GTlonnhat = a[i];
        }
    }
}


int NhoNhat(int a[], int n){
    int GTnhonhat = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] < GTnhonhat){
            GTnhonhat = a[i];
        }
    }    
}



int main(){
    int a[n];
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    printf("NHAP MANG ARRAY: ");
    NhapMang(a, n);
    printf("LON NHAT: ");
    LonNhat(a, n);
    printf("NHO NHAT: ");
    NhoNhat(a, n);

    return 0;
}