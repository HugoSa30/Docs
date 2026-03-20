/*
 * Program: n42.bin
 * Function: 2
 * Entry: 0016f2c8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void _(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = func_0xff2196d0(&KFLF,nmot,rl);
  uVar4 = (uint)FRKAP;
  uVar3 = (uint)DAT_005b91d2;
  uVar2 = func_0xff2187cc(&FRHOKRST,tkrst);
  uVar1 = ((uVar1 & 0xff) * uVar4 * (uVar3 + 0x180) >> 0xc) * ((uVar2 & 0xff) + 0x180) >> 0xd;
  fgru = (byte)uVar1;
  if (0xff < uVar1) {
    fgru = 0xff;
  }
  return;
}

