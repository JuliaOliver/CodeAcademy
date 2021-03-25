/* The postage of a courier company is determined according to the weight of the shipments 
(to the nearest gram) and the volume, as shown in the table.
Weight (to the nearest 1 gram) Fee
up to 20 g BGN 0.46;
21-50 g BGN 0.69;
51-100 g BGN 1.02;
101-200 g BGN 1.75;
201-350 g BGN 2.13;
351-500 g BGN 2.44;
501-1000 g BGN 3.20;
1001-2000 g BGN 4.27;
2001-3000 BGN 5.03;

Volume:
up to 10 cm + BGN 0.01;
10-50 cm + 0.11 BGN,
50-100 cm + BGN 0.22,
100-150 cm + BGN 0.33,
150-250 cm + BGN 0.56,
250-400cm + BGN 1.50,
400-500 cm + BGN 3.11,
500-600 cm + BGN 4.89,
over 600 cm + BGN 5.79

The user is asked about the number of shipments and then the weight of each shipment and its volume. 
Determine according to the postage in this courier company how cheaper to send your shipments as one 
or to send them as separate shipments. */

#include <stdio.h>
#include <stdlib.h>

typedef struct shipmentStructure{
    int weight;
    int volume;
}shipmentStruct;

int main(void){
    int i, totalWeight = 0, totalVolume = 0;
    float oneByOnePrice = 0, totalPrice = 0;
    int shipmentsCount;
    printf("How many shipments do you have?\nShipments count: ");
    scanf(" %d", &shipmentsCount);
    printf("\n");

    shipmentStruct *shipmentsList = (shipmentStruct *)malloc(sizeof(shipmentStruct) * shipmentsCount);

    for(i=0; i < shipmentsCount; i++){
        printf("Please enter weight of shipment No.%d: ", i+1);
        scanf(" %d", &shipmentsList[i].weight);
        printf("Please enter volume of shipment No.%d: ", i+1);
        scanf(" %d", &shipmentsList[i].volume);
        printf("\n");
    }


    for(i = 0; i < shipmentsCount; i++){
        if(shipmentsList[i].weight <= 20)
            oneByOnePrice += 0.46;
        else if(shipmentsList[i].weight <= 50)
            oneByOnePrice += 0.69;
        else if(shipmentsList[i].weight <= 100)
            oneByOnePrice += 1.02;
        else if(shipmentsList[i].weight <= 200)
            oneByOnePrice += 1.75;
        else if(shipmentsList[i].weight <= 350)
            oneByOnePrice += 2.13;
        else if(shipmentsList[i].weight <= 500)
            oneByOnePrice += 2.44;
        else if(shipmentsList[i].weight <= 1000)
            oneByOnePrice += 3.20;
        else if(shipmentsList[i].weight <= 2000)
            oneByOnePrice += 4.27;
        else if(shipmentsList[i].weight <= 3000)
            oneByOnePrice += 5.03;
    }
    for(i = 0; i < shipmentsCount; i++){
        if(shipmentsList[i].volume <= 10)
            oneByOnePrice += 0.01;
        else if(shipmentsList[i].volume <= 50)
            oneByOnePrice += 0.11;
        else if(shipmentsList[i].volume <= 100)
            oneByOnePrice += 0.22;
        else if(shipmentsList[i].volume <= 150)
            oneByOnePrice += 0.33;
        else if(shipmentsList[i].volume <= 250)
            oneByOnePrice += 0.56;
        else if(shipmentsList[i].volume <= 400)
            oneByOnePrice += 1.50;
        else if(shipmentsList[i].volume <= 500)
            oneByOnePrice += 3.11;
        else if(shipmentsList[i].volume <= 600)
            oneByOnePrice += 4.89;
        else if(shipmentsList[i].volume > 600)
            oneByOnePrice += 5.79;
    }

    for(i = 0; i < shipmentsCount; i++){
        totalWeight += shipmentsList[i].weight;
        totalVolume += shipmentsList[i].volume;
    }

    
    if(totalWeight <= 20)
        totalPrice += 0.46;
    else if(totalWeight <= 50)
        totalPrice += 0.69;
    else if(totalWeight <= 100)
        totalPrice += 1.02;
    else if(totalWeight <= 200)
        totalPrice += 1.75;
    else if(totalWeight <= 350)
        totalPrice += 2.13;
    else if(totalWeight <= 500)
        totalPrice += 2.44;
    else if(totalWeight <= 1000)
        totalPrice += 3.20;
    else if(totalWeight <= 2000)
        totalPrice += 4.27;
    else if(totalWeight <= 3000)
        totalPrice += 5.03;

    if(totalVolume <= 10)
        totalPrice += 0.01;
    else if(totalVolume <= 50)
        totalPrice += 0.11;
    else if(totalVolume <= 100)
        totalPrice += 0.22;
    else if(totalVolume <= 150)
        totalPrice += 0.33;
    else if(totalVolume <= 250)
        totalPrice += 0.56;
    else if(totalVolume <= 400)
        totalPrice += 1.50;
    else if(totalVolume <= 500)
        totalPrice += 3.11;
    else if(totalVolume <= 600)
        totalPrice += 4.89;
    else if(totalVolume > 600)
        totalPrice += 5.79;

    printf("\nYour final price if you send your packages ONE BY ONE is: %.2f BGN\n", oneByOnePrice);
    printf("Your final price if you send your packages ALL AS ONE is: %.2f BGN\n", totalPrice);

    if(oneByOnePrice < totalPrice){
        printf("It is better to send your packages ONE BY ONE!\n\n");
    }
    else if(oneByOnePrice > totalPrice){
        printf("\nIt is better to send your packages ALL AS ONE!\n\n");
    }
    else if(oneByOnePrice == totalPrice){
        printf("\nBoth ways the price is equal!\n\n");
    }

    free(shipmentsList);

    return 0;
}

/* Depending the entered input, prints the corresponding answer */
