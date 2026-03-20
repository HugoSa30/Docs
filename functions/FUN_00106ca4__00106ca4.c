/*
 * Program: n42.bin
 * Function: FUN_00106ca4
 * Entry: 00106ca4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00106ca4(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = _DAT_003fb968;
  uVar2 = 0;
  do {
    if ((uVar1 & (&DAT_005b8000)[uVar2]) != 0) {
      *(uint *)(&DAT_005b800c)[uVar2] = *(uint *)(&DAT_005b800c)[uVar2] | 0x8000000;
    }
    uVar2 = uVar2 + 1 & 0xffff;
  } while (uVar2 < 2);
  return;
}

