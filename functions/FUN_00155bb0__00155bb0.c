/*
 * Program: n42.bin
 * Function: FUN_00155bb0
 * Entry: 00155bb0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00155bb0(undefined *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((byte)(&DAT_001d37bc)[uVar1 + param_2 * 4] < 100) {
      if ((byte)(&DAT_001d37bc)[uVar1 + param_2 * 4] < DAT_0001ba64) {
        *param_1 = **(undefined **)
                     (&DAT_0001b94c + (uint)(byte)(&DAT_001d37bc)[uVar1 + param_2 * 4] * 4);
      }
      else {
        *param_1 = *_DAT_0001b94c;
      }
    }
    else if ((uint)(byte)(&DAT_001d37bc)[uVar1 + param_2 * 4] < DAT_0001bc28 + 100) {
      *param_1 = **(undefined **)((uint)(byte)(&DAT_001d37bc)[uVar1 + param_2 * 4] * 4 + 0x1b8d8);
    }
    else {
      *param_1 = *_DAT_0001b94c;
    }
    param_1 = param_1 + 1;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 4);
  return;
}

