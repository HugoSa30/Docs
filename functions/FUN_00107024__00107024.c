/*
 * Program: n42.bin
 * Function: FUN_00107024
 * Entry: 00107024
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00107024(void)

{
  uint uVar1;
  uint uVar2;
  
  FUN_00106e08();
  uVar1 = _DAT_003fb96c;
  DAT_005b8088._0_2_ = DAT_005b8088._0_2_ + 1;
  uVar2 = 0;
  do {
    if ((uVar1 & (&DAT_005b8000)[uVar2]) != 0) {
      *(uint *)((&DAT_005b800c)[uVar2] + 8) = *(uint *)((&DAT_005b800c)[uVar2] + 8) | 1;
    }
    uVar2 = uVar2 + 1 & 0xffff;
  } while (uVar2 < 2);
  return;
}

