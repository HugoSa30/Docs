/*
 * Program: n42.bin
 * Function: FUN_000c1efc
 * Entry: 000c1efc
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000c1efc(void)

{
  int iVar1;
  uint uVar2;
  
  if (B_stend == '\0') {
    wvesp = wvespst;
  }
  else {
    uVar2 = (uint)DWEEMX + (uint)wvesp;
    if (0xff < uVar2) {
      uVar2 = 0xff;
    }
    if ((short)((ushort)wvesp - (ushort)DWEEMX) < 1) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)(short)((ushort)wvesp - (ushort)DWEEMX);
    }
    wvesp = FUN_000b222c(iVar1,wvespnst,uVar2 & 0xff);
  }
  return;
}

