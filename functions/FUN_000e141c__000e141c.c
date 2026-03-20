/*
 * Program: n42.bin
 * Function: FUN_000e141c
 * Entry: 000e141c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000e141c(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_000a90c8(DITVEIN,&DAT_001cf505,&DAT_001cf50c,Di_cnt);
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
    B_di_ausschalt = B_di_ausschalt | B_di_einschalt;
    if (Di_dir == '\0') {
      FUN_000e2a70(Ditv_aus,0);
    }
    else {
      FUN_000e2a70(Ditv_aus,1);
    }
  }
  else {
    B_di_ausschalt = B_di_ausschalt | B_disa;
    if (Di_dir == '\0') {
      FUN_000e2a70(Ditv_aus,0);
    }
    else {
      FUN_000e2a70(Ditv_aus,1);
    }
    B_di_ausschalt = B_di_ausschalt & ~B_di_einschalt;
    Di_cnt = 0;
  }
  return;
}

