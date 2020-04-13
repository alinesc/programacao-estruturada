//  matriz1
//  Created by Aline Souza Cruz on 24/03/20
#include <stdio.h>

void somatriz(int m1[][2], int m2[][2]){
    int i,j;
    int m3[3][2];
    for (i=0; i<3; i++){
        for (j=0; j<2; j++){
        m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
    for (i=0; i<3; i++){
    for (j=0; j<2; j++){
        printf("%d \n", m3[i][j]);
    }
    }
    
}

int main(int argc, const char * argv[]) {
    int matriz1[3][2] = {2,3,5,4,3,1};
    int matriz2[3][2] = {4,7,8,3,1,7};
    somatriz(matriz1, matriz2);
    
    return 0;
}
