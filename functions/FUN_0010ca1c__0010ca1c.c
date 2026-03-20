/*
 * Program: n42.bin
 * Function: FUN_0010ca1c
 * Entry: 0010ca1c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010ca1c(void)

{
  undefined *puVar1;
  byte bVar2;
  
  bVar2 = 0;
  if (DAT_003fba64 != 0) {
    puVar1 = (undefined *)(_DAT_003fba80 + -0x14);
    do {
      puVar1 = puVar1 + 0x14;
      _5(*puVar1,&UNK_003fba1c,8,0,DAT_003fffa2);
      bVar2 = bVar2 + 1;
    } while (bVar2 < DAT_003fba64);
  }
  _8(0,2);
  _8(1,2);
  return;
}

