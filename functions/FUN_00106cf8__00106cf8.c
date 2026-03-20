/*
 * Program: n42.bin
 * Function: FUN_00106cf8
 * Entry: 00106cf8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00106cf8(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = _DAT_003fb968;
  uVar2 = 0;
  do {
    if ((uVar1 & (&DAT_005b8000)[uVar2]) != 0) {
      *(uint *)(&DAT_005b800c)[uVar2] = *(uint *)(&DAT_005b800c)[uVar2] & 0xf7ffffff;
    }
    uVar2 = uVar2 + 1 & 0xffff;
  } while (uVar2 < 2);
  return;
}

