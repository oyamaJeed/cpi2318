/*--------------------------
 STRCT_EXER1_C
--------------------------*/
#include <stdio.h>
#include "exer_com.h"


int main(int argv, char *argc[])
{
	ST_EXER st_val[2] = {{'1','2',"Good morning!"},{'3','4',"Good afternoon!"}};
	ST_EXER *st_val_p = st_val;

	printf("***Init***\n");
	printf("struct from=%c\nstruct to=%c\nstruct msg=%s\n",st_val_p[0].from,st_val_p[0].to,st_val_p[0].msg);
	printf("struct from=%c\nstruct to=%c\nstruct msg=%s\n",st_val_p[1].from,st_val_p[1].to,st_val_p[1].msg);

	st_val_p[1] = (ST_EXER){'A','B',"This is a pen!"};

	printf("***Modify***\n");
        printf("struct from=%c\nstruct to=%c\nstruct msg=%s\n",st_val_p[0].from,st_val_p[0].to,st_val_p[0].msg);
        printf("struct from=%c\nstruct to=%c\nstruct msg=%s\n",st_val_p[1].from,st_val_p[1].to,st_val_p[1].msg);


	return 0;
}
