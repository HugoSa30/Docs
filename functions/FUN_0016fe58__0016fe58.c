/*
 * Program: n42.bin
 * Function: FUN_0016fe58
 * Entry: 0016fe58
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0016fe58(void)

{
  byte bVar1;
  byte bVar2;
  
  if (TMVL < tmot) {
    DAT_003fadeb = '\x01';
  }
  if (B_vl == 0) {
    bVar1 = 0x80;
  }
  else if (DAT_003fadeb == '\0') {
    bVar1 = 0x80;
  }
  else {
    bVar1 = func_0xff2187cc(&LAMFAVL,nmot);
  }
  bVar2 = func_0xff2196d0(&KFLAMFA,nmot,rl);
  if (bVar1 < bVar2) {
    bVar2 = bVar1;
  }
  if (bVar2 < 0x80) {
    if (DAT_003fadea == '\0') {
      lamfa_w = (ushort)bVar2 << 5;
    }
    else {
      DAT_003fadea = DAT_003fadea + -1;
      lamfa_w = 0x1000;
    }
  }
  else {
    lamfa_w = 0x1000;
    DAT_003fadea = TLAFA;
  }
  B_vla = 0;
  return;
}

