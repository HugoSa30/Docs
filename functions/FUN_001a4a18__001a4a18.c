/*
 * Program: n42.bin
 * Function: FUN_001a4a18
 * Entry: 001a4a18
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001a4a18(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_005ba9f0;
  uVar2 = 0;
  if (*(char *)(DAT_005ba9f0 + 0x10) != '\0') {
    do {
      *(undefined *)(*(int *)(iVar1 + 0x18) + uVar2 * 0xc) = 2;
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < *(byte *)(iVar1 + 0x10));
  }
  return;
}

