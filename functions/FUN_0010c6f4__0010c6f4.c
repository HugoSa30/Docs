/*
 * Program: n42.bin
 * Function: FUN_0010c6f4
 * Entry: 0010c6f4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010c6f4(void)

{
  code *pcVar1;
  uint uVar2;
  
  FUN_0010c7f8();
  FUN_0010ad8c(DAT_003fffa6);
  uVar2 = 0;
  if (*(char *)(_DAT_003fbe34 + 7) != '\0') {
    do {
      pcVar1 = *(code **)(*_DAT_003fbe34 + uVar2 * 0x14 + 0xc);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)();
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < *(byte *)(_DAT_003fbe34 + 7));
  }
  return;
}

