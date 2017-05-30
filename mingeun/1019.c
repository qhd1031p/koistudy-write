//
//  1019.c
//  c language
//
//  Created by Mingeun Kim on 2017. 5. 30..
//  Copyright © 2017년 Mingeun Kim. All rights reserved.
//

#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d.%d.%d", &a, &b,&c);
    printf("%04d.%02d.%02d", a,b,c);
    return 0;
}
