/*
 * Program: n42.bin
 * Function: FUN_000c7298
 * Entry: 000c7298
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c7298(void)

{
  short sVar1;
  int iVar2;
  short local_10;
  
  if (B_wdk2sel == '\0') {
    if (B_wdk1v == '\0') {
      iVar2 = (uint)udkp1_w - (uint)udkp1a_w;
      if (iVar2 < -0x8000) {
        iVar2 = -0x8000;
      }
      else if (0x7fff < iVar2) {
        iVar2 = 0x7fff;
      }
    }
    else {
      iVar2 = (udkp1v_w & 0x3fff) * 4 - (int)(short)udkp1vo_w;
      if (iVar2 < -0x8000) {
        iVar2 = -0x8000;
      }
      else if (0x7fff < iVar2) {
        iVar2 = 0x7fff;
      }
      local_10 = (short)(char)((uint)iVar2 >> 8);
      sVar1 = FUN_000a7b80((int)local_10,((int)(short)iVar2 & 0xffU) << 8,udkp1vv_w);
      iVar2 = (int)sVar1 - (uint)udkp1a_w;
      if (iVar2 < -0x8000) {
        iVar2 = -0x8000;
      }
      else if (0x7fff < iVar2) {
        iVar2 = 0x7fff;
      }
    }
  }
  else {
    iVar2 = (uint)udkp2a_w - (uint)udkp2_w;
    if (iVar2 < -0x8000) {
      iVar2 = -0x8000;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
  }
  local_10 = (short)((int)(short)iVar2 * (uint)dkpstg_w * 2 >> 0x10);
  _wdkba_w = local_10;
  return;
}

