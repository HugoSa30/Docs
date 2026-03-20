/*
 * Program: n42.bin
 * Function: FUN_0010ef08
 * Entry: 0010ef08
 * Exported by: ExportAllDecompiledFunctions.java
 */


byte FUN_0010ef08(int param_1,byte param_2)

{
  byte bVar1;
  int iVar2;
  
  _5();
  iVar2 = *(int *)(DAT_005baa10 + 0x10) + param_1 * 0x18;
  bVar1 = *(byte *)(iVar2 + 0xc);
  *(byte *)(iVar2 + 0xc) = bVar1 & ~param_2;
  _6();
  return bVar1;
}

