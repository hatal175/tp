lbl_80BB9304:
/* 80BB9304  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80BB9308  7C 08 02 A6 */	mflr r0
/* 80BB930C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80BB9310  4B 46 09 6D */	bl fopAcM_delete__FP10fopAc_ac_c
/* 80BB9314  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80BB9318  7C 08 03 A6 */	mtlr r0
/* 80BB931C  38 21 00 10 */	addi r1, r1, 0x10
/* 80BB9320  4E 80 00 20 */	blr 
