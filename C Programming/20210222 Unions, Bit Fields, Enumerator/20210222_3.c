/* Define a structure with three elements that are variables of type int, char and float. 
The elements should be the quantity of the product, name and price. Set the value of each of 
the elements as follows: 50, chocolate, 2.50. Print on the screen */

#include <stdio.h>
#include <string.h>

struct productElements{
    int quantity;
    char name[128];
    float price;
};

int main(void){
    struct productElements product;
    product.quantity = 50;
    strcpy(product.name, "Chocolate");
    product.price = 2.50;

    printf("Product description:\nProduct name: %s\nQuantity: %i\nPrice: %.2f", (product.name), product.quantity, product.price);

    return 0;
}

/* Prints Product description:
          Product name: Chocolate
          Quantity: 50
          Price: 2.50 */
