/*
 * Program: n42.bin
 * Function: FUN_001541bc
 * Entry: 001541bc
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001541bc(void)

{
  bool bVar1;
  
  if (B_kl15 == 0) {
    DAT_005bb7d8 = 0;
  }
  else {
    if (DAT_001c0ea0 <= DAT_005bb7d8) {
      dmrkrll._1_1_ = (byte)dmrkrll | 1;
      bVar1 = true;
      goto LAB_00154224;
    }
    DAT_005bb7d8 = DAT_005bb7d8 + 1;
  }
  dmrkrll._1_1_ = (byte)dmrkrll & 0xfe;
  bVar1 = false;
LAB_00154224:
  if (((bVar1) && (B_cdiagoff == 0)) && (DAT_001c0ea1 < ub)) {
    B_fgdcan = 1;
  }
  else {
    B_fgdcan = 0;
  }
  return;
}

