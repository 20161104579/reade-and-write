//
//  read File.c
//  reade and write
//
//  Created by 20161104579 on 2017/6/12.
//  Copyright © 2017年 20161104579. All rights reserved.
//

#include "read File.h"
int main()
{
    char str[80];
    int n;
    float weight;
    FILE *fp;
    fp=fopen("/Users/a20161104579/Library/Mobile Documents/com~apple~TextEdit/Documents/format.rtf","r");
    if(fp==NULL)
    {
        printf("error!");
        return 1;
    }
    else{
        while(fscanf(fp,"%s %d,%f",str,&n,&weight)!=EOF)
        {
            printf("%s %d %.2ff\n",str,n,weight);
        }
        fclose(fp);
    }
    return 0;
}
