#include <stdio.h>
#include <stdlib.h>

int maximum (int t[], int size){
    int max=0;
    for (int i = 0; i < size; i++)
    {
        if (t[i]>max)
        {
            max = t[i];
        }        
    }
    return max;
}

int imaximum (int t[], int size){
    int max=0;
    int imax=0;
    for (int i = 0; i < size; i++)
    {
        if (t[i]>max)
        {
            max = t[i];
            imax = i;
        }        
    }
    return imax;
}

int minimum (int t[], int size){
    int min = 50;
    for (int i = 0; i < size; i++)
    {
        if (t[i]<min)
        {
            min = t[i];
        }        
    }
    return min;
}

int iminimum (int t[], int size){
    int min = 50;
    int imin;
    for (int i = 0; i < size; i++)
    {
        if (t[i]<min)
        {
            min = t[i];
            imin = i;
        }        
    }
    return imin;
}

int somme(int t[], int size){
    int sum;
    for (int i = 0; i < size; i++)
    {
        sum = sum + t[i];
    }
    return sum;
}

double moyenne(int t[], int size){
    double moy;
    double sum;
    for (int i = 0; i < size; i++)
    {
        sum = sum + t[i];
    }
    moy = sum / size;
    return moy;
}

int compte(int t[], int size, int lowest, int highest){
    int compteur = 0;
    for (int i = 0; i < size; i++)
    {
        if (t[i]>lowest && t[i]<highest)
        {
            compteur += 1;
        }
        
    }
    return compteur;
}

int est_trie(int t[], int size){
    int result;
    int tmp = t[0];
    for (int i = 0; i < size; i++)
    {
        if (t[i]>tmp || t[i]==tmp)
        {
            if (result == -1)
            {
                return 0;
            }            
            result = 1;
            tmp = t[i];
        }else if (t[i]<tmp || t[i]==tmp)
        {
            if (result == 1)
            {
                return 0;
            }            
            result = -1;
            tmp = t[i];
        } 
    }
    return result;
}

int main()
{
    int t[100];
    int size = 10;
    int nbr, min, max, imin, imax, sum, compteur, trie;
    double moy;
    for (int i = 0; i < size; i++)
    {
        nbr = rand() % 50;
        t[i] = nbr;
        printf("%d\n", nbr);
    }

    min = minimum(t, size);
    imin = iminimum(t, size);
    max = maximum(t, size);
    imax = imaximum(t, size);
    sum = somme(t,size);
    moy = moyenne(t, size);
    printf("minimum: %d\n", min);
    printf("i minimum: %d\n", imin);
    printf("maximum: %d\n", max);
    printf("i maximum: %d\n", imax);
    printf("somme: %d\n", sum);
    printf("moyenne: %lf\n", moy);

    compteur = compte(t, size, 10, 36);
    printf("%d\n", compteur);

    trie = est_trie(t, size);
    printf("%d\n", trie);

    return 0;   
}