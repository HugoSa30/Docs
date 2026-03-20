/*
 * Program: n42.bin
 * Function: FUN_00106568
 * Entry: 00106568
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00106568(void)

{
  uint uVar1;
  
  uVar1 = _DAT_003fb904 & 3;
  while (uVar1 != 0) {
    (&UNK_003fb90c)[_DAT_003fb904 & 0x3f] = 0xff;
    _DAT_003fb904 = _DAT_003fb904 + 1;
    uVar1 = _DAT_003fb904 & 3;
  }
  FUN_001067e4(&UNK_003fb90c + (_DAT_003fb908 & 0x3f),_DAT_003fb904 - _DAT_003fb908 >> 2 & 0xff,
               _DAT_003fb908);
  return;
}

