#include <stdio.h>
#include <string.h>

struct Product{
    char name[30];
    float price;
    int stock;
};
int findMostExpensive(struct Product products[], int size){
    int max=0;
    for(int i=1; i<size; i++){
        if(products[i].price>products[max].price){
            max=i;
        }
    }
    return max;
}
float calculateTotalValue(struct Product products[], int size){
    float total=0.0;
    for(int i=0; i<size;i++){
        total+=products[i].price * products[i].stock;
    }
    return total;
}
int findLowStock(struct Product products[], int size, int threshold){
    int count=0;
    for(int i=0; i<size; i++){
        if(products[i].stock<threshold){
            count++;
        }
    }
    return count;

}
int main() {
    struct Product inventory[3];
    
    for (int i = 0; i < 3; i++) {
        scanf("%s", inventory[i].name);
        scanf("%f", &inventory[i].price);
        scanf("%d", &inventory[i].stock);
    }
    
    for(int i=0; i<3;i++){
    printf("Product %d: %s - Price: %.2f, Stock: %d\n", i,inventory[i].name, inventory[i].price,inventory[i].stock);
    }
    int mostExpensive=findMostExpensive(inventory, 3);
    printf("Most expensive product: %s\n",inventory[mostExpensive].name);
    float totalValue= calculateTotalValue(inventory, 3);
    printf("Total inventory value: %.2f\n",totalValue);
    int threshold;
    scanf("%d", &threshold);
    
    int low=findLowStock(inventory,3,threshold);
    printf("Products with low stock: %d\n", low);
    if(inventory[mostExpensive].stock>10){
        printf("Most expensive product is well stocked\n");
    }
    else{
        printf("Most expensive product needs restocking\n");
    }
    return 0;
}