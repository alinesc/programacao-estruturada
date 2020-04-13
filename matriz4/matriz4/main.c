//  matriz4
//  Created by Aline Souza Cruz on 24/03/20.
#include <stdio.h>
void buscaelemento (int x){
    int matriz[2][3] = {2,3,5,2,8,9};
    int l,c;
    for (l=0; l<2; l++){
        for (c=0; c<3; c++){
            if (x == matriz[l][c]){
                printf("O valor %d está na linha %d coluna %d.\n", x, l+1, c+1);
            }
        }
    }
}


int main(int argc, const char * argv[]) {
    int busca;
    printf("Qual elemento você deseja buscar? ");
    scanf("%d", &busca);
    buscaelemento(busca);
    return 0;
}
