/*--------------------------
 UNION_EXER1_C
--------------------------*/
#include <stdio.h>
#include "exer_com.h"


int main(int argv, char *argc[])
{
	UNI_EXER uni_val = {.exer.from = 'C',.exer.to = 'D',.exer.msg = "Good evening!"};
	UNI_EXER *uni_val_p = &uni_val;

	char modify_buf[30] = {"This is a pen!"};

	printf("***Init***\n");       
	printf("uni st from=%c\nuni st to=%c\nuni st msg=%s\n",uni_val.exer.from,uni_val.exer.to,uni_val.exer.msg);
	for(int i = 0; i<32; i++){
		if(i == 0){
			uni_val_p->sary.c_ary[i] = 'C';
		}else if(i == 1){
			uni_val_p->sary.c_ary[i] = 'D';
		}else{
			uni_val_p->sary.c_ary[i] = modify_buf[i-2];
		}
	}
	printf("***Modify***\n");
        printf("uni st from=%c\nuni st to=%c\nuni st msg=%s\n",uni_val.exer.from,uni_val.exer.to,uni_val.exer.msg);



}
