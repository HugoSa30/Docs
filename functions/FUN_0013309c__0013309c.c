/*
 * Program: n42.bin
 * Function: FUN_0013309c
 * Entry: 0013309c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013309c(void)

{
  int iVar1;
  uint uVar2;
  word wVar3;
  
  DAT_005b9356 = pu_w;
  _ps_w = pu_w;
  _DAT_003fabd0 = 0;
  if (DAT_001c39e9 == '\0') {
    wVar3 = dps_w;
    if ((short)dps_w < 1) {
      wVar3 = 0;
    }
  }
  else {
    wVar3 = dpssyn_w;
    if ((short)dpssyn_w < 1) {
      wVar3 = 0;
    }
  }
  iVar1 = func_0xff21949c(KLSRMKOR,&DAT_001cf8ea,0x1cf8fa,nmot_w);
  uVar2 = func_0xff21a054(DAT_001c39ee,&DAT_001c39f0,DAT_001c39ef,&DAT_001c39f8,&DAT_001c3a08,tans,
                          wVar3);
  DAT_003fabd2 = (char)((int)(iVar1 * (uVar2 & 0xff) * 4 + 0x80) >> 10);
  DAT_003fabd3 = 1;
  return;
}

