/*
 * Program: n42.bin
 * Function: FUN_000ce3b4
 * Entry: 000ce3b4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000ce3b4(void)

{
  char cVar1;
  uint local_10;
  byte local_c;
  
  cVar1 = func_0x010339ac(2,&local_10);
  if (cVar1 == '\0') {
    gangauti = (byte)(local_10 & 7);
    B_fs = '\x01' - ((local_10 & 7) == 0);
    DAT_003fbeb6 = (local_10 >> 5 & 1) != 0;
    B_wkr = '\x01' - ((local_10 >> 6 & 1) == 0);
    B_wk = '\x01' - ((local_10 >> 6 & 2) == 0);
    obdstegs = (byte)(local_10 >> 0xc) & 0xf;
    migs_w = (undefined2)((local_10 >> 0x18) << 8);
    B_pn = B_fs;
    func_0x010339ac(3,&local_10);
    DAT_003fbeb5 = '\x01' - ((local_10 >> 0xc & 1) == 0);
    mdwancan = (byte)(local_10 >> 0x18);
    DAT_003fbeb3 = 1;
    B_egs1cok = 1;
    DAT_003fd7e7 = 0x55;
    B_autget = 1;
  }
  else {
    if (DAT_003fddad != '\0') {
      DAT_003fd7e7 = 0;
      B_autget = 0;
    }
    DAT_003fbeb3 = 0;
    if ((local_c & 7) != 0) {
      B_egs1cok = 0;
      B_wk = '\x01';
      B_wkr = '\x01';
      migs_w = 0xffff;
      gangauti = 0;
      B_fs = '\0';
      mdwancan = 0;
      B_pn = '\0';
      DAT_003fbeb6 = 0;
      DAT_003fbeb5 = '\0';
      obdstegs = 0xf;
    }
  }
  return;
}

