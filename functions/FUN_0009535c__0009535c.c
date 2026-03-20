/*
 * Program: n42.bin
 * Function: FUN_0009535c
 * Entry: 0009535c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0009535c(uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  uint in_IMMR;
  
  if ((_DAT_002fc280 & 0x80000) == 0) {
    param_1 = param_1 / ((_DAT_002fc284 & 0x1f) + 1);
    iVar9 = (_DAT_002fc284 >> 0x14) + 1;
    if ((iVar9 * (param_1 >> 8) & 0xff800000) == 0) {
      param_1 = param_1 * iVar9;
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
  uVar3 = 0;
  while (((&DAT_001c0120)[uVar3 * 0x21] != in_IMMR >> 0x10 ||
         (*(uint *)(&LAB_001c0124 + uVar3 * 0x84) != param_1))) {
    uVar3 = uVar3 + 1 & 0xffff;
    if (2 < uVar3) {
      _DAT_003fa1c4 = 0xffffffff;
      return 0xf0;
    }
  }
  iVar9 = 7;
  puVar1 = (undefined4 *)&DAT_003fa1c4;
  puVar2 = (undefined4 *)(&LAB_001c0128 + uVar3 * 0x84);
  do {
    puVar8 = puVar2;
    puVar7 = puVar1;
    uVar4 = puVar8[1];
    uVar5 = puVar8[2];
    uVar6 = puVar8[3];
    *puVar7 = *puVar8;
    puVar7[1] = uVar4;
    puVar7[2] = uVar5;
    puVar7[3] = uVar6;
    iVar9 = iVar9 + -1;
    puVar1 = puVar7 + 4;
    puVar2 = puVar8 + 4;
  } while (iVar9 != 0);
  uVar4 = puVar8[5];
  uVar5 = puVar8[6];
  puVar7[4] = puVar8[4];
  puVar7[5] = uVar4;
  puVar7[6] = uVar5;
  return 0;
}

