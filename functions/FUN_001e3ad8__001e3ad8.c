/*
 * Program: n42.bin
 * Function: FUN_001e3ad8
 * Entry: 001e3ad8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_001e3ad8(int param_1,int param_2)

{
  bool bVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined4 in_IMMR;
  
  uVar5 = (undefined2)((uint)in_IMMR >> 0x18);
  FUN_001e2e0c();
  bVar1 = *(char *)(param_1 + 2) == '\0';
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 1);
    *(char *)(param_2 + (uint)bVar2 + 0x16) = (char)((ushort)uVar5 >> 8);
    uVar4 = bVar2 + 1 & 0xff;
    *(char *)(param_2 + uVar4 + 0x16) = (char)uVar5;
    puVar3 = _DAT_00fe1758;
    uVar4 = uVar4 + 1 & 0xff;
    *(char *)(param_2 + uVar4 + 0x16) = (char)((uint)*_DAT_00fe1758 >> 0x18);
    uVar4 = uVar4 + 1 & 0xff;
    *(char *)(param_2 + uVar4 + 0x16) = (char)((uint)*puVar3 >> 0x10);
    uVar4 = uVar4 + 1 & 0xff;
    *(char *)(param_2 + uVar4 + 0x16) = (char)((uint)*puVar3 >> 8);
    uVar4 = uVar4 + 1;
    *(char *)(param_2 + (uVar4 & 0xff) + 0x16) = (char)*puVar3;
    *(char *)(param_1 + 1) = (char)uVar4 + '\x01';
    *(undefined *)(param_2 + 2) = 8;
  }
  FUN_001e2e0c();
  return bVar1;
}

