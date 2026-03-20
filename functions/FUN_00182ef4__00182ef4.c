/*
 * Program: n42.bin
 * Function: FUN_00182ef4
 * Entry: 00182ef4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00182ef4(void)

{
  ushort uVar1;
  
  DAT_003fb884 = func_0xff219ee0(KFZWWLTM,0x1d333d,DAT_001d333c,0x1d3349,0x1d3355,tmot,tmst);
  DAT_003fb885 = func_0xff219ee0(KFZWWLTMVT,&DAT_001d33e7,DAT_001d33e6,0x1d33f3,0x1d33ff,tmot,tmst);
  uVar1 = func_0xff21984c(&DAT_001cdf10,tmot,tnst_w);
  if (uVar1 < 0x100) {
    fwltmkh = func_0xff21984c(&DAT_001cdf10,tmot,tnst_w);
  }
  else {
    fwltmkh = 0xff;
  }
  return;
}

