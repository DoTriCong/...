#include <stdio.h>

int main() {
    int arr[100];
    int n = 0;
    int choice;

    do {
        printf("MENU\n");
        printf("1. Nhap so phan tu va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri lon nhat cua mang\n");
        printf("4. In ra cac phan tu la so nguyen to trong mang\n");
        printf("5. Them mot phan tu vao trong mang\n");
        printf("6. Xoa mot phan tu trong mang\n");
        printf("7. Sap xep mang theo thu tu tang dan\n");
        printf("8. Tim kiem phan tu va in ra vi tri index cua no\n");
        printf("9. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                printf("Nhap so phan tu: ");
                scanf("%d", &n);
                printf("Nhap cac phan tu cua mang:\n");
                for (int i = 0; i < n; i++) {
                    printf("Phan tu %d: ", i);
                    scanf("%d", &arr[i]);
                }
                break;
            }

            case 2: {
                printf("Cac phan tu trong mang la: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            }

            case 3: {
                int max = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] > max) {
                        max = arr[i];
                    }
                }
                printf("Gia tri lon nhat trong mang la: %d\n", max);
                break;
            }

            case 4: {
                printf("Cac so nguyen to trong mang la: ");
                for (int i = 0; i < n; i++) {
                    int isPrime = 1;
                    if (arr[i] < 2) {
                        isPrime = 0;
                    } else {
                        for (int j = 2; j * j <= arr[i]; j++) {
                            if (arr[i] % j == 0) {
                                isPrime = 0;
                                break;
                            }
                        }
                    }
                    if (isPrime) {
                        printf("%d ", arr[i]);
                    }
                }
                printf("\n");
                break;
            }

            case 5: {
                if (n >= 100) {
                    printf("Khong the them phan tu. Mang da day.\n");
                } else {
                    int value;
                    printf("Nhap gia tri can them: ");
                    scanf("%d", &value);
                    arr[n++] = value;
                    printf("Da them %d vao mang.\n", value);
                }
                break;
            }

            case 6: {
                int index;
                printf("Nhap vi tri can xoa (0-%d): ", n - 1);
                scanf("%d", &index);
                if (index < 0 || index >= n) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    for (int i = index; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Da xoa phan tu tai vi tri %d.\n", index);
                }
                break;
            }

            case 7: {
                for (int i = 0; i < n - 1; i++) {
                    for (int j = i + 1; j < n; j++) {
                        if (arr[i] > arr[j]) {
                            int temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }
                printf("Mang sau khi sap xep tang dan: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            }

            case 8: {
                int value, found = 0;
                printf("Nhap gia tri can tim: ");
                scanf("%d", &value);
                for (int i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        printf("Phan tu %d nam tai vi tri %d.\n", value, i);
                        found = 1;
                    }
                }
                if (!found) {
                    printf("Khong tim thay phan tu %d trong mang.\n", value);
                }
                break;
            }

            case 9:
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le. Vui long thu lai!\n");
        }
    } while (choice != 9);

    return 0;
}

