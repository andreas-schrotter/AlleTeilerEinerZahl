#include <stdio.h> 

int main() {
    int number;
    int amountDivs = 0;
    int* divs;
    int index = 0;

    printf("Bitte geben Sie eine Zahl ein: ");
    scanf_s("%d", &number);

    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            amountDivs++;
        }
    }

    if (amountDivs == 2)
    {
        printf("%d -> Primzahl", number);
    }
    else {
        divs = new int(amountDivs - 2);

        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                divs[index] = i;
                index++;
            }
        }

        printf("%d -> ", number);


        /*Man hätte diese Schleife sparen können und direkt in der darüber liegenden
        Schleife die Ausgabe machen können
        und somit auf die den pointer vertichten können (effizienter für den
        eigentlichen Fall).
        Zur Übung habe ich mich aber für diese Lösung entschieden (bietet auch die
        Möglichkeit bei Erweiterung des Programms
        mit den Teilern zu arbeiten falls nötig)*/
        for (int i = 0; i < index; i++) {
            if (i != index - 1)
            {
                printf("%d, ", divs[i]);
            }
            else {
                printf("%d", divs[i]);
            }
        }
    }

    return 0;
}