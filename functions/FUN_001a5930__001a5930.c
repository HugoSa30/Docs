/*
 * Program: n42.bin
 * Function: FUN_001a5930
 * Entry: 001a5930
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a5930(void)

{
  char cVar1;
  int iVar2;
  
  cVar1 = DAT_005baa08;
  do {
    iVar2 = FUN_001a4d74(DAT_005baa08);
    if (iVar2 == 9) {
      FUN_001a4fdc(DAT_005baa08,*(undefined4 *)*_DAT_003fbd84,
                   *(undefined2 *)((undefined4 *)*_DAT_003fbd84 + 1));
      DAT_005baa04 = 0xfa59b8;
      return;
    }
    FUN_001a5584();
  } while (DAT_005baa08 != cVar1);
  return;
}

