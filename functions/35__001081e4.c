/*
 * Program: n42.bin
 * Function: 35
 * Entry: 001081e4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _5(undefined4 *param_1,ushort param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  
  iVar4 = param_1[1];
  *(undefined4 *)(iVar4 + 0x24) = 0;
  uVar2 = _DAT_00f08340;
  uVar1 = _DAT_00f0833c;
  *(undefined4 *)(iVar4 + 4) = _DAT_00f08338;
  *(undefined4 *)(iVar4 + 8) = uVar1;
  *(undefined4 *)(iVar4 + 0xc) = uVar2;
  *(bool *)(param_1[1] + 0x44) = (param_2 & 0x8000) == 0;
  *(undefined *)(param_1[1] + 0x42) = 0;
  iVar4 = param_1[1];
  *(ushort *)(iVar4 + 0x36) = param_2 | (ushort)param_1[2] | *(ushort *)(iVar4 + 0x36) & 0x10;
  puVar3 = (undefined *)*param_1;
  *(undefined2 *)(puVar3 + 10) = *(undefined2 *)(iVar4 + 0x36);
  if (puVar3 == &DAT_00305000) {
    _DAT_00305028 = 0;
  }
  return;
}

