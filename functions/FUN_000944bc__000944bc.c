/*
 * Program: n42.bin
 * Function: FUN_000944bc
 * Entry: 000944bc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000944bc(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = _DAT_003fa180;
  uVar2 = 0;
  do {
    if ((uVar1 & *(uint *)(&UNK_003f9e44 + uVar2 * 4)) != 0) {
      **(uint **)(&DAT_003fa1c8 + uVar2 * 4) = **(uint **)(&DAT_003fa1c8 + uVar2 * 4) | 0x8000000;
    }
    uVar2 = uVar2 + 1 & 0xffff;
  } while (uVar2 < 2);
  return;
}

