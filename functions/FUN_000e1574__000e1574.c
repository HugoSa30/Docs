/*
 * Program: n42.bin
 * Function: FUN_000e1574
 * Entry: 000e1574
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000e1574(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_000a90c8(DITVAUS,&DAT_001cf4f1,&DAT_001cf4f8,Di_cnt);
  uVar2 = FUN_000a87cc(&KLDISATVUB,ub);
  uVar1 = (uVar1 & 0xffff) * (uVar2 & 0xff) >> 7;
  if (uVar1 < 0x10000) {
    Ditv_aus = (word)uVar1;
  }
  else {
    Ditv_aus = 0xffff;
  }
  if (Di_cnt < DI_ENDE) {
    Di_cnt = Di_cnt + 1;
    B_di_ausschalt = B_di_ausschalt | B_di_ausschalt;
    if (Di_dir == '\0') {
      FUN_000e2a70(Ditv_aus,1);
    }
    else {
      FUN_000e2a70(Ditv_aus,0);
    }
  }
  else {
    B_di_ausschalt = B_di_ausschalt & ~B_disa;
    if (Di_dir == '\0') {
      FUN_000e2a70(Ditv_aus,1);
    }
    else {
      FUN_000e2a70(Ditv_aus,0);
    }
    B_di_ausschalt = B_di_ausschalt & ~B_di_ausschalt;
    Di_cnt = 0;
  }
  return;
}

