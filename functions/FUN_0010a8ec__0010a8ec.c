/*
 * Program: n42.bin
 * Function: FUN_0010a8ec
 * Entry: 0010a8ec
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_0010a8ec(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)((uint)*(byte *)(param_1 + 5) * 4 + 0xf09940);
  uVar2 = 0;
  uVar1 = 1 << (*(byte *)(param_1 + 6) & 0x3f);
  if (((uVar1 & *(ushort *)(iVar3 + 0x24)) == (uVar1 & 0xffff)) ||
     ((*(ushort *)(iVar3 + (uint)*(byte *)(param_1 + 6) * 0x10 + 0x80) & 0xf0) == 0x80)) {
    uVar2 = 1;
  }
  return uVar2;
}

