/*
 * Program: n42.bin
 * Function: FUN_000949c0
 * Entry: 000949c0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000949c0(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((**(uint **)(&DAT_003fa1c8 + uVar1 * 4) & _DAT_003fa180 >> (uVar1 * -8 + 0x18 & 0x3f) & 0xff
        ) != 0) {
      return 1;
    }
    uVar1 = uVar1 + 1 & 0xffff;
  } while (uVar1 < 2);
  return 0;
}

