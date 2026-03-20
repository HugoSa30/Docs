/*
 * Program: n42.bin
 * Function: FUN_00102f88
 * Entry: 00102f88
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00102f88(undefined4 param_1,byte **param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  undefined *puVar5;
  byte bVar6;
  undefined uVar7;
  
  DAT_003fffcf = 0;
  if (DAT_003fffa6 == '\x03') {
    if (*(short *)((int)param_2 + 6) != 8) {
      bVar6 = 0x12;
      goto LAB_00103138;
    }
    if (DAT_003f9f38 != '\0') {
      bVar6 = 0x22;
      goto LAB_00103138;
    }
    pbVar4 = *param_2;
    uVar3 = (uint)*pbVar4 * 0x10000 + (uint)pbVar4[1] * 0x100 + (uint)pbVar4[2];
    _DAT_003f9f3c = (uint)pbVar4[5] * 0x10000 + (uint)pbVar4[6] * 0x100 + (uint)pbVar4[7];
    iVar2 = uVar3 + _DAT_003f9f3c;
    puVar5 = (undefined *)(iVar2 + -1);
    if (((uVar3 < 0x8000) || (&DAT_0006ffff < puVar5)) &&
       ((uVar3 < 0xf00000 || ((undefined *)0xfeffff < puVar5)))) {
      bVar6 = 0x12;
      goto LAB_00103138;
    }
    if ((0xefffff < uVar3) && (puVar5 < (undefined *)0xf10000)) {
      uVar3 = uVar3 + 0xc0000;
      puVar5 = (undefined *)(iVar2 + 0xbffff);
    }
    FUN_00104370();
    _();
    _DAT_003f9f3a = 0;
    DAT_003f9fcc = 0;
    _DAT_003f9fc4 = uVar3;
    _DAT_003f9fc8 = puVar5;
    sVar1 = _(&DAT_003f9fc4,&UNK_003f9fd8);
    if (sVar1 != 0) {
      **param_2 = 0x22;
      *(undefined2 *)(param_2 + 2) = 1;
      uVar7 = 2;
      goto LAB_0010314c;
    }
    DAT_003f9f38 = '\x11';
    **param_2 = DAT_00ffe5f6;
    uVar7 = 1;
  }
  else {
    bVar6 = 0x33;
LAB_00103138:
    **param_2 = bVar6;
    uVar7 = 2;
  }
  *(undefined2 *)(param_2 + 2) = 1;
LAB_0010314c:
  *(undefined *)((int)param_2 + 10) = uVar7;
  return;
}

