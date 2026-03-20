/*
 * Program: n42.bin
 * Function: FUN_001266b4
 * Entry: 001266b4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001266b4(void)

{
  uint *puVar1;
  char *pcVar2;
  undefined2 *puVar3;
  undefined *puVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  
  if (DAT_00f0022c == 0) {
    pbVar7 = (byte *)0xf0022b;
    iVar9 = 6;
    puVar3 = &DAT_005b89b6;
    do {
      pbVar7 = pbVar7 + 1;
      *(byte *)(puVar3 + 1) = (*pbVar7 >> 4) + 0x30;
      *(byte *)((int)puVar3 + 3) = (*pbVar7 & 0xf) + 0x30;
      iVar9 = iVar9 + -1;
      puVar3 = puVar3 + 1;
    } while (iVar9 != 0);
  }
  else {
    pbVar5 = &CALIBID1;
    CALIBID1 = DAT_00f0022c;
    DAT_005b89b9 = DAT_00f0022d;
    DAT_005b89ba = DAT_00f0022e;
    pbVar7 = &DAT_00f0022e;
    iVar9 = 3;
    do {
      pbVar7 = pbVar7 + 1;
      pbVar5[3] = (*pbVar7 >> 4) + 0x30;
      pbVar5[4] = (*pbVar7 & 0xf) + 0x30;
      pbVar5 = pbVar5 + 2;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    DAT_005b89c1 = 0;
    DAT_005b89c2 = 0;
    DAT_005b89c3 = 0;
  }
  puVar8 = (uint *)&DAT_00ffe200;
  iVar9 = 0xf;
  do {
    uVar6 = 0xffffffff;
    iVar10 = 8;
    puVar1 = puVar8 + -2;
    do {
      puVar8 = puVar1;
      uVar6 = uVar6 & puVar8[2] & puVar8[3];
      iVar10 = iVar10 + -1;
      puVar1 = puVar8 + 2;
    } while (iVar10 != 0);
    puVar8 = puVar8 + 4;
    iVar9 = iVar9 + -1;
  } while ((uVar6 != 0xffffffff) && (iVar9 != 0));
  if (-iVar9 == -0xe) {
    puVar4 = &DAT_005b89c3;
    iVar9 = 3;
    do {
      puVar4[1] = 0;
      puVar4 = puVar4 + 2;
      *puVar4 = 0;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  else {
    iVar10 = -iVar9 + 0xd;
    iVar9 = iVar10 * 0x40;
    if (*(char *)(iVar9 + 0xffe212) == '\0') {
      pbVar7 = (byte *)(iVar9 + 0xffe211);
      iVar9 = 6;
      pcVar2 = &DAT_005b89c2;
      do {
        pbVar7 = pbVar7 + 1;
        pcVar2[2] = (*pbVar7 >> 4) + 0x30;
        pcVar2[3] = (*pbVar7 & 0xf) + 0x30;
        iVar9 = iVar9 + -1;
        pcVar2 = pcVar2 + 2;
      } while (iVar9 != 0);
    }
    else {
      pbVar5 = &CALIBID2;
      iVar10 = iVar10 * 0x40;
      CALIBID2 = *(byte *)(iVar10 + 0xffe212);
      DAT_005b89c5 = *(undefined *)(iVar10 + 0xffe213);
      DAT_005b89c6 = *(undefined *)(iVar10 + 0xffe214);
      pbVar7 = (byte *)(iVar10 + 0xffe214);
      iVar9 = 3;
      do {
        pbVar7 = pbVar7 + 1;
        pbVar5[3] = (*pbVar7 >> 4) + 0x30;
        pbVar5[4] = (*pbVar7 & 0xf) + 0x30;
        pbVar5 = pbVar5 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      DAT_005b89cd = 0;
      DAT_005b89ce = 0;
      DAT_005b89cf = 0;
    }
  }
  return;
}

