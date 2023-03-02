#include <stdio.h>

void FourNumbers(){
    int numbers[4];

    for(int i = 0; i < 4;i++){
        int num;
        printf("Ange tal %d:", i+1);
        scanf(" %d", &num);
        numbers[i] =num;
    }

    int largestSoFar = numbers[0];
    for(int i = 1 ; i < 4; i++){
        if(numbers[i] > largestSoFar )
            largestSoFar = numbers[i];
    }
    printf("Largest:%d\n", largestSoFar);
}

void Replace(){
    int arrayen[] = {44,12,345,2,545,45,66,2};
    int antal2 = sizeof(arrayen);
    printf("%d\n",antal2);
    int antal3 = sizeof(int);
    printf("%d\n",antal3);
    int antal = sizeof(arrayen) / sizeof(int);
    for(int i = 0; i < antal;i++){
        if(arrayen[i] % 2 == 0)
            arrayen[i] = 0;
    }
    for(int i = 0; i < antal; i++){
        printf("%d\n",arrayen[i]);
    }

}

void FourNumbers2(){
    int antal;
    printf("Ange antal:");
    scanf(" %d", &antal);

    int numbers[antal];

    for(int i = 0; i < antal;i++){
        int num;
        printf("Ange tal %d:", i+1);
        scanf(" %d", &num);
        numbers[i] =num;
    }

    int largestSoFar = numbers[0];
    for(int i = 1 ; i < antal; i++){
        if(numbers[i] > largestSoFar )
            largestSoFar = numbers[i];
    }
    printf("Largest:%d\n", largestSoFar);
}


void TemperatureMeasurements(){
    int antal;
    printf("Ange antal:");
    scanf(" %d", &antal);

    float numbers[antal];

    for(int i = 0; i < antal;i++){
        float num;
        printf("Ange mätvärde %d:", i+1);
        scanf(" %f", &num);
        numbers[i] =num;
    }

    float largestSoFar = numbers[0];
    float smallestSoFar = numbers[0];
    float sum = numbers[0];
    for(int i = 1 ; i < antal; i++){
        sum += numbers[i];
        if(numbers[i] > largestSoFar )
            largestSoFar = numbers[i];
        if(numbers[i] < smallestSoFar )
            smallestSoFar = numbers[i];
    }

    for(int i = 0; i < antal;i++)
        printf("Measurement :%d\n%.2f\n", i+1, numbers[i]);
    printf("Average:%.2f", sum/antal);
    printf("Largest:%.2f\n", largestSoFar);
    printf("Smallest:%.2f\n", smallestSoFar);
}


void TemperatureMeasurements2(){
    int antal;
    printf("Ange antal:");
    scanf(" %d", &antal);

    float numbers[antal];
    int dates[antal];

    for(int i = 0; i < antal;i++){
        float num;
        printf("Ange mätvärde %d:", i+1);
        scanf(" %f", &num);
        numbers[i] =num;

        int datum;
        printf("Ange datum yyyyMMdd %d:", i+1);
        scanf(" %i", &datum);
        dates[i] =datum;

    }

    float largestSoFar = numbers[0];
    float smallestSoFar = numbers[0];
    float sum = numbers[0];
    for(int i = 1 ; i < antal; i++){
        sum += numbers[i];
        if(numbers[i] > largestSoFar )
            largestSoFar = numbers[i];
        if(numbers[i] < smallestSoFar )
            smallestSoFar = numbers[i];
    }

    for(int i = 0; i < antal;i++)
        printf("Measurement :%d\n%d\n%.2f\n", i+1, dates[i], numbers[i]);
    printf("Average:%.2f", sum/antal);
    printf("Largest:%.2f\n", largestSoFar);
    printf("Smallest:%.2f\n", smallestSoFar);
}


int main(){
    //FourNumbers();
    //FourNumbers2();
    //Replace();
    //TemperatureMeasurements();
    TemperatureMeasurements2();
    return 0;
}