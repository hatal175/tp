lbl_8049F8B0:
/* 8049F8B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8049F8B4  7C 08 02 A6 */	mflr r0
/* 8049F8B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8049F8BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8049F8C0  93 C1 00 08 */	stw r30, 8(r1)
/* 8049F8C4  7C 7E 1B 78 */	mr r30, r3
/* 8049F8C8  88 C3 09 50 */	lbz r6, 0x950(r3)
/* 8049F8CC  28 06 00 05 */	cmplwi r6, 5
/* 8049F8D0  41 80 00 0C */	blt lbl_8049F8DC
/* 8049F8D4  38 60 00 00 */	li r3, 0
/* 8049F8D8  48 00 00 B4 */	b lbl_8049F98C
lbl_8049F8DC:
/* 8049F8DC  28 04 00 00 */	cmplwi r4, 0
/* 8049F8E0  41 82 00 0C */	beq lbl_8049F8EC
/* 8049F8E4  83 E4 00 04 */	lwz r31, 4(r4)
/* 8049F8E8  48 00 00 08 */	b lbl_8049F8F0
lbl_8049F8EC:
/* 8049F8EC  3B E0 FF FF */	li r31, -1
lbl_8049F8F0:
/* 8049F8F0  38 60 00 00 */	li r3, 0
/* 8049F8F4  7C C9 03 A6 */	mtctr r6
/* 8049F8F8  2C 06 00 00 */	cmpwi r6, 0
/* 8049F8FC  40 81 00 24 */	ble lbl_8049F920
lbl_8049F900:
/* 8049F900  38 03 06 AC */	addi r0, r3, 0x6ac
/* 8049F904  7C 1E 00 2E */	lwzx r0, r30, r0
/* 8049F908  7C 00 F8 40 */	cmplw r0, r31
/* 8049F90C  40 82 00 0C */	bne lbl_8049F918
/* 8049F910  38 60 00 00 */	li r3, 0
/* 8049F914  48 00 00 78 */	b lbl_8049F98C
lbl_8049F918:
/* 8049F918  38 63 00 04 */	addi r3, r3, 4
/* 8049F91C  42 00 FF E4 */	bdnz lbl_8049F900
lbl_8049F920:
/* 8049F920  2C 05 00 00 */	cmpwi r5, 0
/* 8049F924  41 82 00 30 */	beq lbl_8049F954
/* 8049F928  38 64 05 38 */	addi r3, r4, 0x538
/* 8049F92C  38 9E 04 D0 */	addi r4, r30, 0x4d0
/* 8049F930  4B EA 7A 6D */	bl PSVECSquareDistance
/* 8049F934  C0 1E 09 84 */	lfs f0, 0x984(r30)
/* 8049F938  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8049F93C  40 81 00 0C */	ble lbl_8049F948
/* 8049F940  38 60 00 00 */	li r3, 0
/* 8049F944  48 00 00 48 */	b lbl_8049F98C
lbl_8049F948:
/* 8049F948  D0 3E 09 84 */	stfs f1, 0x984(r30)
/* 8049F94C  93 FE 06 A8 */	stw r31, 0x6a8(r30)
/* 8049F950  48 00 00 38 */	b lbl_8049F988
lbl_8049F954:
/* 8049F954  54 C0 15 BA */	rlwinm r0, r6, 2, 0x16, 0x1d
/* 8049F958  7C 7E 02 14 */	add r3, r30, r0
/* 8049F95C  93 E3 06 AC */	stw r31, 0x6ac(r3)
/* 8049F960  88 1E 09 50 */	lbz r0, 0x950(r30)
/* 8049F964  54 00 10 3A */	slwi r0, r0, 2
/* 8049F968  7C 7E 02 14 */	add r3, r30, r0
/* 8049F96C  90 83 06 C0 */	stw r4, 0x6c0(r3)
/* 8049F970  38 7E 05 98 */	addi r3, r30, 0x598
/* 8049F974  88 9E 09 50 */	lbz r4, 0x950(r30)
/* 8049F978  4B FF F4 31 */	bl initFrame__19daBoomerang_sight_cFi
/* 8049F97C  88 7E 09 50 */	lbz r3, 0x950(r30)
/* 8049F980  38 03 00 01 */	addi r0, r3, 1
/* 8049F984  98 1E 09 50 */	stb r0, 0x950(r30)
lbl_8049F988:
/* 8049F988  38 60 00 01 */	li r3, 1
lbl_8049F98C:
/* 8049F98C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8049F990  83 C1 00 08 */	lwz r30, 8(r1)
/* 8049F994  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8049F998  7C 08 03 A6 */	mtlr r0
/* 8049F99C  38 21 00 10 */	addi r1, r1, 0x10
/* 8049F9A0  4E 80 00 20 */	blr 
