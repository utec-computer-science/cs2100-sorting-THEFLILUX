//
// Created by theflilux on 30/03/20.
//

#ifndef CS2100_SORTING_THEFLILUX_MERSORT_H
#define CS2100_SORTING_THEFLILUX_MERSORT_H

class Mersort{
public:
    static void ordenar_Data(int arr[], int primero, int ultimo);
    static void merge(int arr[], int izq_primero, int izq_ultimo, int der_primero, int der_ultimo);
};

#endif //CS2100_SORTING_THEFLILUX_MERSORT_H
