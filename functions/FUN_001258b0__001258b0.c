/*
 * Program: n42.bin
 * Function: FUN_001258b0
 * Entry: 001258b0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001258b0(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_001c1d75 - (uint)DAT_001c1d74;
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  else if (0xff < (int)uVar1) {
    uVar1 = 0xff;
  }
  if ((((nmot == 0) || (B_stend == '\0')) || (tnst_w <= _DAT_001c1d76)) && ((B_nouetm & 1) != 0)) {
    if (((uint)tmot < (uVar1 & 0xff)) || ((DAT_003fdfc1 & 1) != 0)) {
      B_uetm = 0;
    }
  }
  else if (((uint)tmot < (uVar1 & 0xff)) || ((DAT_003fdfc1 & 1) != 0)) {
    B_uetm = 0;
  }
  else if ((uint)DAT_001c1d75 <= (uint)tmot) {
    B_uetm = 1;
  }
  return;
}

