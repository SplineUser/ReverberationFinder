#include <stdio.h>

int main(){

    double V, A, T;
    int a;
    
    
    printf("Enter what you want to find(Use 1 for Reverberation time, 2 for Volume, 3 for Total absorpption):");
    scanf("%d", &a);

    if (a == 1)
    {
        printf("\nEnter the value of volume:");
        scanf("%lf", &V);
        fflush(stdin);

        printf("\nEnter the value of total absorption:");
        scanf("%lf", &A);
        fflush(stdin);
        
        T = 0.161* V / A;

        printf("\nThe Reverberation time is %lf", T);
    }

    else if (a == 2)
    {   
        printf("\nEnter the value of reverberation time:");
        scanf("%lf", &T);
        fflush(stdin);

        printf("\nEnter the value of total absorption:");
        scanf("%lf", &A);
        fflush(stdin);
        
        V = T * A /0.161;

        printf("\nThe Volume is %lf", V);
    }
    else if (a == 3)
    {   
        printf("\nEnter the value of reverberation time:");
        scanf("%lf", &T);
        fflush(stdin);

        printf("\nEnter the value of Volume:");
        scanf("%lf", &V);
        fflush(stdin);
        
        A = T * V/0.161;

        printf("\nThe Total absorption is %lf", A);
    }
    else
    {
        printf("Invalid input");
    }

    return 0;
}
