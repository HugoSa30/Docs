/*
 * Program: n42.bin
 * Function: FUN_001a4610
 * Entry: 001a4610
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_001a4610(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 * 4 + 0xf09940);
  uVar2 = 0;
  if (((*(ushort *)(iVar1 + 0x20) & 0x30) == 0x30) || ((*(ushort *)(iVar1 + 0x20) & 4) != 0)) {
    uVar2 = 0x40;
    *(ushort *)(iVar1 + 0x20) = *(ushort *)(iVar1 + 0x20) & 0xfffb;
  }
  else if ((*(ushort *)(iVar1 + 0x20) & 0x30) == 0x10) {
    uVar2 = 0x20;
  }
  return uVar2;
}

