#include <stdio.h>


int main(){

    float convUSA=0.018371331, convRiyadh=0.068893447, convJapaneseYen=2.3844903;
    float inputPeso, inputUSD, inputRiyal, inputYen;

    printf("\nInput Peso Value: ");
    scanf("%f", &inputPeso);
    fflush(stdout);

    inputUSD= inputPeso*convUSA;
    inputRiyal= inputPeso*convRiyadh;
    inputYen= inputPeso*convJapaneseYen;

    printf("\n");
    printf("\n%f has the following currency equivalent\nUSD:%.2f\nRIYAL:%.2f\nYEN: %.2f\n", inputPeso, inputUSD, inputRiyal, inputYen);
    return 0;
}