/*
 * Program: n42.bin
 * Function: FUN_001ac308
 * Entry: 001ac308
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001ac308(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  char *pcVar4;
  uint uVar5;
  undefined *puVar6;
  byte *pbVar7;
  short sVar8;
  
  (*(code *)&SUB_00fab7b8)(param_2);
  uVar5 = 0;
  _DAT_003fc3e0 = param_1;
  _DAT_003fc5a8 = param_2;
  do {
    iVar2 = uVar5 * 0x70;
    if (*(int *)(param_2 + uVar5 * 0xc) != 0) {
      *(undefined4 *)(&UNK_003fc44c + iVar2) = 1;
    }
    (&UNK_003fc454)[iVar2] = 0;
    (&UNK_003fc453)[iVar2] = 0xff;
    (*(code *)&SUB_00fac23c)(uVar5 & 0xff,*(byte *)(_DAT_003fc3e0 + 0x10) >> (uVar5 * 2 & 0x3f) & 3)
    ;
    uVar5 = uVar5 + 1 & 0xffff;
  } while (uVar5 < 4);
  uVar5 = 0;
  do {
    puVar6 = *(undefined **)(_DAT_003fc5a8 + uVar5 * 0xc);
    if (puVar6 == &DAT_00304000) {
      (*(code *)&SUB_00faf874)(0x66dd4,2,&DAT_00304000,4);
      *(undefined4 *)(&UNK_003fc44c + uVar5 * 0x70) = 2;
    }
    else {
      iVar2 = uVar5 * 0x70;
      *(undefined4 *)(&UNK_003fc44c + iVar2) = 0;
      if (puVar6 == &DAT_00304400) {
        (*(code *)&SUB_00faf874)(0x66d2c,2,&DAT_00304400,4);
        *(undefined4 *)(&UNK_003fc44c + iVar2) = 2;
      }
      else {
        *(undefined4 *)(&UNK_003fc44c + iVar2) = 0;
      }
    }
    uVar5 = uVar5 + 1 & 0xffff;
  } while (uVar5 < 4);
  pcVar4 = *(char **)(param_1 + 8);
  DAT_003fc5ad = *pcVar4 * '\x02';
  if (8 < DAT_003fc5ad) {
    DAT_003fc5ad = 8;
  }
  DAT_003fc5ae = DAT_003fc5ad >> 1;
  DAT_003fc5b4 = pcVar4[1];
  _DAT_003fc5b0 = (byte *)(pcVar4 + 2);
  DAT_003fc5b9 = 0;
  DAT_003fc5bb = 0;
  DAT_003fc5ba = 0xff;
  DAT_003fc5bc = 0xff;
  uVar3 = 0;
  pbVar7 = _DAT_003fc5b0;
  if (DAT_003fc5ae != 0) {
    do {
      if (DAT_003fc5bb < *pbVar7) {
        DAT_003fc5bb = *pbVar7;
      }
      if (*pbVar7 < DAT_003fc5bc) {
        DAT_003fc5bc = *pbVar7;
      }
      bVar1 = pbVar7[1];
      if (DAT_003fc5b9 < bVar1) {
        DAT_003fc5b9 = bVar1;
      }
      bVar1 = pbVar7[1];
      if (bVar1 < DAT_003fc5ba) {
        DAT_003fc5ba = bVar1;
      }
      uVar3 = uVar3 + 1;
      pbVar7 = pbVar7 + 2;
    } while (uVar3 < DAT_003fc5ae);
  }
  DAT_003fc5bb = DAT_003fc5bb + DAT_003fc5b4;
  DAT_003fc5b9 = DAT_003fc5b9 + DAT_003fc5b4;
  sVar8 = (ushort)DAT_003fc5ba - (ushort)DAT_003fc5b4;
  if (sVar8 < 0) {
    sVar8 = 0;
  }
  DAT_003fc5ba = (byte)sVar8;
  sVar8 = (ushort)DAT_003fc5bc - (ushort)DAT_003fc5b4;
  if (sVar8 < 0) {
    sVar8 = 0;
  }
  DAT_003fc5bc = (byte)sVar8;
  DAT_003fc5b5 = (*(code *)&SUB_00fb2ba0)(3);
  if ((DAT_003fc5b5 == 0) || (DAT_003fc5ad < DAT_003fc5b5)) {
    DAT_003fc5b5 = DAT_003fc5ad;
  }
  DAT_003fc5bf = 0;
  DAT_003fc5be = 0;
  DAT_003fc5ac = 0xff;
  return;
}

