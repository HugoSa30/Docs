/*
 * Program: n42.bin
 * Function: FUN_00133690
 * Entry: 00133690
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00133690(void)

{
  uint uVar1;
  uint uVar2;
  
  wea = (&WEAN)[esst_snm08gkub >> 0x10] +
        (char)((esst_snm08gkub & 0xffff) *
               ((uint)(byte)(&WEAN)[esst_snm08gkub >> 0x10] -
               (uint)(byte)(&WEAN)[esst_snm08gkub >> 0x10]) >> 0x10);
  uVar1 = func_0xff2187cc(&DAT_001c6594,tmot);
  uVar2 = func_0xff2187cc(&DAT_001c65bc,nmot);
  uVar1 = (uVar1 & 0xff) + (uVar2 & 0xff);
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  wvesp = (byte)uVar1;
  return;
}

