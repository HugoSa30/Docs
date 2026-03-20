/*
 * Program: n42.bin
 * Function: FUN_00174728
 * Entry: 00174728
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00174728(void)

{
  byte bVar1;
  uint uVar2;
  
  B_krmfok = 0;
  wmfa_new = func_0xff2196d0(&KFMAKR,nmot,rl);
  if (wmfa_new == 0) {
    wmfa_new = 1;
  }
  if (0x2f < wmfa_new) {
    wmfa_new = 0x2f;
  }
  bVar1 = wmfa_new;
  if (wmfa_new < 0x1c) {
    bVar1 = 0x1b;
  }
  wmfl_new = func_0xff2187cc(&KEMLN,nmot);
  if (wmfl_new < 0xd) {
    wmfl_new = 0xd;
  }
  if ((byte)(0xf0 - bVar1) < wmfl_new) {
    wmfl_new = 0xf0 - bVar1;
  }
  B_krmfok = 1;
  FUN_0017464c();
  ks_sym = 0;
  DAT_003fc255 = 1;
  DAT_003fc256 = 2;
  DAT_003fc257 = 3;
  uVar2 = 0;
  do {
    (&DAT_005b90e8)[uVar2] = (&ks_sym)[(byte)(&SENZZYL)[uVar2]];
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 4);
  if (((B_ntini != '\0') && (B_stend != '\0')) && ((int)(TMKR - 5) < (int)(uint)tmot)) {
    B_dntb = '\x01';
  }
  if (ztpnt_a == 0) {
    if (B_tpnt_aw == '\0') {
      if ((B_kr != '\0') || (B_tpnt_e != '\0')) {
        if (B_tpnt_e == '\0') {
          B_dntb = '\x01';
          B_tpnt_e = '\x01';
        }
        else if (B_dntb == '\0') {
          if (B_krntfv == '\0') {
            ztpnt_a = 0xfa;
            if (DAT_001c7f4a != '\0') {
              B_tpnt_aw = '\x01';
            }
          }
          else {
            ztpnt_a = 0x78;
          }
          B_tpnt_e = '\0';
        }
      }
    }
    else if ((B_tmkr != '\0') && (DAT_001c7f4a != '\0')) {
      if (B_tpnt_e == '\0') {
        B_dtpb = '\x01';
        B_tpnt_e = '\x01';
      }
      else if (B_dtpb == '\0') {
        if (B_krtpfv == '\0') {
          ztpnt_a = 0xfa;
        }
        else {
          ztpnt_a = 0x78;
        }
        B_tpnt_aw = B_krtpfv != '\0';
        B_tpnt_e = '\0';
      }
    }
  }
  return;
}

