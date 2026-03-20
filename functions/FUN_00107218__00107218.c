/*
 * Program: n42.bin
 * Function: FUN_00107218
 * Entry: 00107218
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00107218(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((*(uint *)(&DAT_005b800c)[uVar1] & _DAT_003fb968 >> (uVar1 * -8 + 0x18 & 0x3f) & 0xff) != 0)
    {
      return 1;
    }
    uVar1 = uVar1 + 1 & 0xffff;
  } while (uVar1 < 2);
  return 0;
}

