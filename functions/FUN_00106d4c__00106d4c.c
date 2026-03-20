/*
 * Program: n42.bin
 * Function: FUN_00106d4c
 * Entry: 00106d4c
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_00106d4c(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  do {
    iVar2 = (&DAT_005b800c)[uVar1];
    if ((*(uint *)(iVar2 + 8) & 0x80000000) != 0) {
      return 0;
    }
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffffffe;
    uVar1 = uVar1 + 1 & 0xffff;
  } while (uVar1 < 2);
  return 1;
}

