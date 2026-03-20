/*
 * Program: n42.bin
 * Function: func_7
 * Entry: 000da1f8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x000da4c8) */

void func_7(void)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  
  if (B_clradkrd != '\0') {
    uVar4 = 0;
    do {
      (&UNK_003fdda8)[uVar4] = DYAMNV;
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < 5);
    B_clradkrd = '\0';
  }
  bVar3 = B_krldy;
  if (B_gdvhub == 0) {
    if (((int)(short)devhubi_w < (int)(short)dyesehv_w) || (B_ll != '\0')) {
      B_krldyok = 0;
      bVar1 = false;
    }
    else {
      B_krldyok = 1;
      bVar1 = true;
    }
    iVar5 = (int)(short)dyesehv_w + (int)(short)dyesehof_w;
    if (iVar5 < -0x8000) {
      iVar5 = -0x8000;
    }
    else if (0x7fff < iVar5) {
      iVar5 = 0x7fff;
    }
    if ((int)(short)devhubi_w < (int)(short)iVar5) {
      B_krldyofok = 0;
      bVar2 = false;
    }
    else {
      B_krldyofok = 1;
      bVar2 = true;
    }
  }
  else {
    if (((int)(short)dwdkba_w < (int)(short)dyesv_w) || (B_ll != '\0')) {
      B_krldyok = 0;
      bVar1 = false;
    }
    else {
      B_krldyok = 1;
      bVar1 = true;
    }
    iVar5 = (int)(short)dyesv_w + (int)(short)dyesofv_w;
    if (iVar5 < -0x8000) {
      iVar5 = -0x8000;
    }
    else if (0x7fff < iVar5) {
      iVar5 = 0x7fff;
    }
    if ((int)(short)dwdkba_w < (int)(short)iVar5) {
      B_krldyofok = 0;
      bVar2 = false;
    }
    else {
      B_krldyofok = 1;
      bVar2 = true;
    }
  }
  if (B_tmkr != '\0') {
    if (B_sa != '\0') {
      B_krsadyn = '\0';
      DAT_003fb156 = 1;
    }
    if (bVar1) {
      zldy = azkrldy;
      DAT_003fb157 = B_krldy;
      if ((CWZWDYN & 2) == 0) {
        B_krldy = 1;
      }
      else {
        B_krldy = B_zwdyn;
      }
      B_kr = 1;
      if (((TMDYNA < tmot) && (B_krsadyn != '\0')) && (B_gdvvtueb == 0)) {
        if ((B_krldya == '\0') || ((B_krldy != 0 && (bVar3 == 0)))) {
          B_krldya = '\x01';
          if ((CWZWDYN & 2) == 0) {
            uVar4 = (uint)(byte)(&UNK_003fdda8)[stkrnx] + (uint)wkrdyvs;
            if (0xff < uVar4) {
              uVar4 = 0xff;
            }
            wkrdy = (undefined)uVar4;
          }
          else {
            wkrdy = 0;
          }
          DAT_003fb158 = stkrnx;
          zaldy = DYAVF;
        }
        if (bVar2) {
          B_krldyf = 1;
        }
      }
    }
    if ((B_ll == '\0') && (((short)ngkrv_w <= (short)ngas_w || ((short)ngas_w <= (short)nngkrv_w))))
    {
      zndy = azkrndy;
      B_krndy = 1;
    }
  }
  if ((CWZWDYN & 2) != 0) {
    B_krldy = B_zwdyn;
  }
  return;
}

