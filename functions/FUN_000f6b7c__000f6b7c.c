/*
 * Program: n42.bin
 * Function: FUN_000f6b7c
 * Entry: 000f6b7c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000f6b7c(void)

{
  uint uVar1;
  int iVar2;
  
  if ((DAT_003fc5be != '\0') || (DAT_003fc5bf != '\0')) {
    uVar1 = 0;
    do {
      iVar2 = uVar1 * 0x70;
      (&UNK_003fc3fb)[iVar2] = (&UNK_003fc3f8)[iVar2];
      (&UNK_003fc3fc)[iVar2] = (&UNK_003fc3f0)[iVar2 + (uint)(byte)(&UNK_003fc3f8)[iVar2]];
      uVar1 = uVar1 + 1 & 0xffff;
    } while (uVar1 < 4);
  }
  return;
}

