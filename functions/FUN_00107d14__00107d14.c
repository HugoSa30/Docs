/*
 * Program: n42.bin
 * Function: FUN_00107d14
 * Entry: 00107d14
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00107d14(uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uint in_IMMR;
  
  if ((_DAT_002fc280 & 0x80000) == 0) {
    param_1 = param_1 / ((_DAT_002fc284 & 0x1f) + 1);
    iVar3 = (_DAT_002fc284 >> 0x14) + 1;
    if ((iVar3 * (param_1 >> 8) & 0xff800000) == 0) {
      param_1 = param_1 * iVar3;
      if ((_DAT_002fc284 & 0x400) == 0) {
        param_1 = param_1 / (uint)(1 << (_DAT_002fc280 & 7));
      }
      else {
        param_1 = param_1 / (uint)(1 << (_DAT_002fc280 >> 4 & 7) + 1);
      }
    }
    else {
      param_1 = 0;
    }
  }
  else {
    param_1 = 0;
  }
  uVar4 = 0;
  while ((iVar3 = uVar4 * 0x84, *(uint *)(iVar3 + 0xf060b0) != in_IMMR >> 0x10 ||
         (*(uint *)(iVar3 + 0xf060b4) != param_1))) {
    uVar4 = uVar4 + 1 & 0xffff;
    if (4 < uVar4) {
      DAT_005b8008 = 0xffffffff;
      return 0xf0;
    }
  }
  iVar10 = 7;
  puVar1 = &DAT_005b8008;
  puVar2 = (undefined4 *)(iVar3 + 0xf060b8);
  do {
    puVar9 = puVar2;
    puVar8 = puVar1;
    uVar5 = puVar9[1];
    uVar6 = puVar9[2];
    uVar7 = puVar9[3];
    *puVar8 = *puVar9;
    puVar8[1] = uVar5;
    puVar8[2] = uVar6;
    puVar8[3] = uVar7;
    iVar10 = iVar10 + -1;
    puVar1 = puVar8 + 4;
    puVar2 = puVar9 + 4;
  } while (iVar10 != 0);
  uVar5 = puVar9[5];
  uVar6 = puVar9[6];
  puVar8[4] = puVar9[4];
  puVar8[5] = uVar5;
  puVar8[6] = uVar6;
  return 0;
}

