/*
 * Program: n42.bin
 * Function: FUN_000d33a8
 * Entry: 000d33a8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000d33a8(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar4;
  undefined2 uVar5;
  uint uVar3;
  uint uVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  
  uVar1 = **(ushort **)(param_1 + 0x30);
  if ((uint)uVar1 < (uint)*(ushort *)(&SPRZG_AN + (uint)*(byte *)(param_1 + 0x74) * 2)) {
    uVar2 = **(ushort **)(param_1 + 0x38);
    psVar7 = *(short **)(param_1 + 0x18);
    **(short **)(param_1 + 0x1c) = *psVar7;
    sVar4 = FUN_000b5508((uint)uVar2 - (uint)uVar1);
    *psVar7 = sVar4 + -0x8000;
    uVar5 = calc_value_from_y(*(undefined4 *)(param_1 + 0x6c),**(undefined2 **)(param_1 + 0x18));
    **(undefined2 **)(param_1 + 0x3c) = uVar5;
    uVar1 = **(ushort **)(param_1 + 0x3c);
    uVar6 = (uint)Vnsfaktmot;
    uVar3 = calc_value_from_y(*(undefined4 *)(param_1 + 0x70),**(undefined2 **)(param_1 + 0x18));
    iVar8 = (uint)**(ushort **)(param_1 + 0x40) + (uVar3 & 0xffff) + -0x8000;
    if ((int)(uint)**(ushort **)(param_1 + 100) < iVar8) {
      **(ushort **)(param_1 + 0x40) = **(ushort **)(param_1 + 100);
    }
    else if (iVar8 < (int)(uint)**(ushort **)(param_1 + 0x68)) {
      **(ushort **)(param_1 + 0x40) = **(ushort **)(param_1 + 0x68);
    }
    else {
      **(undefined2 **)(param_1 + 0x40) = (short)iVar8;
    }
    iVar9 = iVar8 + ((int)((uVar1 - 0x8000) * uVar6) >> 7) + -0x8000;
    iVar8 = (int)**(short **)(param_1 + 0x5c);
    if ((iVar9 <= iVar8) && (iVar8 = iVar9, iVar9 < **(short **)(param_1 + 0x60))) {
      iVar8 = (int)**(short **)(param_1 + 0x60);
    }
    **(undefined2 **)(param_1 + 0x20) = 0;
    **(byte **)(param_1 + 0x24) = **(byte **)(param_1 + 0x24) & 0xfe;
  }
  else {
    if (**(char **)(param_1 + 0x50) == '\0') {
      sVar4 = **(short **)(param_1 + 0x60);
    }
    else {
      sVar4 = **(short **)(param_1 + 0x5c);
    }
    iVar8 = (int)sVar4;
    if (**(ushort **)(param_1 + 0x54) <= **(ushort **)(param_1 + 0x20)) {
      **(byte **)(param_1 + 0x24) = **(byte **)(param_1 + 0x24) | 1;
    }
    if (**(ushort **)(param_1 + 0x58) <= **(ushort **)(param_1 + 0x20)) {
      **(byte **)(param_1 + 0x24) = **(byte **)(param_1 + 0x24) | 0x40;
    }
    if ((((B_st == '\0') && (B_nmot != '\0')) && (B_nvnsad == 0)) && (NMOTVNSAD < nmot)) {
      sVar4 = **(short **)(param_1 + 0x20);
      if (sVar4 != -1) {
        **(short **)(param_1 + 0x20) = sVar4 + 1;
      }
    }
    else {
      **(undefined2 **)(param_1 + 0x20) = 0;
      **(byte **)(param_1 + 0x24) = **(byte **)(param_1 + 0x24) & 0xfe;
    }
  }
  uVar5 = FUN_000b54d0(iVar8 * 5000 >> 0xe);
  **(undefined2 **)(param_1 + 0x10) = uVar5;
  return;
}

