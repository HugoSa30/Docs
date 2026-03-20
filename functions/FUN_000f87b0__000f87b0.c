/*
 * Program: n42.bin
 * Function: FUN_000f87b0
 * Entry: 000f87b0
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_000f87b0(void)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  while ((*(undefined **)(&UNK_003fc6e4 + uVar2 * 0xc) != &DAT_00304000 ||
         (cVar1 = (*(code *)&SUB_00068690)(&DAT_00304000,(&UNK_003fc6e8)[uVar2 * 0xc]),
         cVar1 == '\0'))) {
    uVar2 = uVar2 + 1 & 0xffff;
    if (1 < uVar2) {
      return 0;
    }
  }
  return 1;
}

