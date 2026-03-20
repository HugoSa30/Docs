/*
 * Program: n42.bin
 * Function: FUN_0018edd4
 * Entry: 0018edd4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018edd4(void)

{
  ushort local_20;
  ushort local_1c [2];
  ushort local_18 [2];
  ushort *local_14;
  ushort local_10 [2];
  ushort *local_c;
  
  if (vfzroh_w < _VDMN) {
    DAT_003fab35 = TDV;
    if ((((B_sa == '\0') || (NDVO <= nmot)) || (nmot <= NDV)) || (tmot <= TMDV)) {
      DAT_003fab34 = TDV;
    }
    else if (DAT_003fab34 == '\0') {
      local_20 = _B_mnvfz & 0xd0fc | 0x2403;
      local_1c[0] = local_20;
      local_c = local_1c;
      local_10[0] = local_20;
      func_0xff222958(0xbe,local_10);
    }
    else {
      DAT_003fab34 = DAT_003fab34 + -1;
    }
  }
  else {
    DAT_003fab34 = TDV;
    if (DAT_003fab35 == '\0') {
      local_20 = _B_mnvfz & 0xd0fc | 0x2002;
      local_1c[0] = local_20;
      local_14 = local_1c;
      local_18[0] = local_20;
      func_0xff222958(0xbe,local_18);
    }
    else {
      DAT_003fab35 = DAT_003fab35 + -1;
    }
  }
  return;
}

