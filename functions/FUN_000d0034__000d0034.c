/*
 * Program: n42.bin
 * Function: FUN_000d0034
 * Entry: 000d0034
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x000d010c) */
/* WARNING: Removing unreachable block (ram,0x000d0094) */
/* WARNING: Removing unreachable block (ram,0x000d00d8) */
/* WARNING: Removing unreachable block (ram,0x000d014c) */
/* WARNING: Removing unreachable block (ram,0x000d0124) */
/* WARNING: Removing unreachable block (ram,0x000d0164) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d0034(void)

{
  uint uVar1;
  
  mlbb2 = ml >> 1;
  mlbb = mlbb2;
  mlbb2_w = _ml_w >> 1;
  mlbb_w = mlbb2_w;
  uVar1 = (uint)mlbb2 + ((int)((uint)msl * 0xd) >> 7);
  msabg = (byte)uVar1;
  if (0xff < uVar1) {
    msabg = 0xff;
  }
  uVar1 = (uint)mlbb2 + ((int)((uint)msl2 * 0xd) >> 7);
  msabg2 = (byte)uVar1;
  if (0xff < uVar1) {
    msabg2 = 0xff;
  }
  msabg_w = mlbb2_w + (ushort)msl * 4;
  msabg2_w = mlbb2_w + (ushort)msl2 * 4;
  return;
}

