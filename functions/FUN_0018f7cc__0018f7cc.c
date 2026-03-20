/*
 * Program: n42.bin
 * Function: FUN_0018f7cc
 * Entry: 0018f7cc
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0018f7cc(void)

{
  int iVar1;
  
  wesnesprau = func_0xff2189bc(&WESNESPR,evhubs_w);
  iVar1 = 0x78 - ((uint)wesnesprau + ((uint)Vse_spri * 0x22 >> 10));
  if (iVar1 < 0) {
    wes = 0;
  }
  else if (iVar1 < 0x100) {
    wes = (byte)iVar1;
  }
  else {
    wes = 0xff;
  }
  return;
}

