//
//  1084.c
//  c language
//
//  Created by Mingeun Kim on 2017. 6. 1..
//  Copyright © 2017년 Mingeun Kim. All rights reserved.
//

#include <stdio.h>

int main(){
    int r,g,b;
    int i,j,k,c=0;
    scanf("%d %d %d", &r,&g,&b);
    for(i=0;i<r;i++){
        for(j=0;j<g;j++){
            for(k=0;k<b;k++){
                printf("%d %d %d\n", i , j , k);
                c++;
            }
        }
    }
    printf("%d", c);
    return 0;
    
}
