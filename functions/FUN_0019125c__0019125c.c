/*
 * Program: n42.bin
 * Function: FUN_0019125c
 * Entry: 0019125c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019125c(void)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  
  if ((B_dkunb != '\0') || (B_ll != '\0')) {
    B_vlb = 0;
    goto LAB_001913d0;
  }
  if (B_mrfavl == '\0') {
    if (DAT_003fb3db == '\0') {
LAB_001913a0:
      uVar3 = func_0xff2189bc(&DAT_001c9bb0,nmot_w);
      if ((int)(uVar3 & 0xffff) < (int)_wdkba_w) {
        B_vlb = 1;
        DAT_003fb3db = '\x01';
      }
    }
    else {
      uVar3 = func_0xff2189bc(&DAT_001c9bb0,nmot_w);
      if ((int)_wdkba_w < (int)((uVar3 & 0xffff) - (uint)_DAT_001c9b3a)) {
        B_vlb = 0;
        DAT_003fb3db = '\0';
      }
      else if (DAT_003fb3db == '\0') goto LAB_001913a0;
    }
  }
  else if (DAT_003fb3da == '\0') {
LAB_00191310:
    uVar2 = func_0xff2189bc(&DAT_001c9b76,nmot_w);
    if (uVar2 < mrfa_w) {
      B_vlb = 1;
      DAT_003fb3da = '\x01';
    }
  }
  else {
    uVar3 = func_0xff2189bc(&DAT_001c9b76,nmot_w);
    if ((int)(uint)mrfa_w < (int)((uVar3 & 0xffff) - (uint)_DAT_001c9b38)) {
      B_vlb = 0;
      DAT_003fb3da = '\0';
    }
    else if (DAT_003fb3da == '\0') goto LAB_00191310;
  }
LAB_001913d0:
  if ((rlvugd == 0) || (uVar3 = ((uint)rlvw_w << 10) / (uint)rlvugd, 0xffff < uVar3)) {
    uVar3 = 0xffff;
  }
  rlvwvugd_w = (word)uVar3;
  if ((mimax_w == 0) || (uVar3 = ((uint)milsol_w << 0xf) / (uint)mimax_w, 0xffff < uVar3)) {
    uVar3 = 0xffff;
  }
  milmxvl_w = (word)uVar3;
  if (DAT_003fb3dc != '\0') {
    uVar1 = func_0xff2189bc(&DAT_001c9b3c,nmot_w);
    if ((int)(uVar3 & 0xffff) < (int)((uVar1 & 0xffff) - (uint)_DAT_001c9b36)) {
      B_vlmi = 0;
      DAT_003fb3dc = '\0';
      goto LAB_001914e0;
    }
    if (DAT_003fb3dc != '\0') goto LAB_001914e0;
  }
  uVar2 = func_0xff2189bc(&DAT_001c9b3c,nmot_w);
  if (uVar2 < milmxvl_w) {
    B_vlmi = 1;
    DAT_003fb3dc = '\x01';
  }
LAB_001914e0:
  B_vl = B_mibeg == '\0' & B_vlb & B_vlmi & B_temxon == 0;
  return;
}

