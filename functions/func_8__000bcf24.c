/*
 * Program: n42.bin
 * Function: func_8
 * Entry: 000bcf24
 * Exported by: ExportAllDecompiledFunctions.java
 */


void func_8(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = (uint)irspsyn;
  if (3 < uVar1) {
    B_ngasok = 1;
  }
  uVar2 = (uint)nmot_w;
  *(word *)(&DAT_005b97b4 + uVar1 * 2) = nmot_w;
  if (DAT_003fbecd == '\0') {
    DAT_003fbecd = '\x01';
  }
  else {
    iVar3 = uVar2 - *(ushort *)(&DAT_005b97b4 + (uint)irspsynold * 2);
    if (iVar3 < -0x8000) {
      iVar3 = -0x8000;
    }
    else if (0x7fff < iVar3) {
      iVar3 = 0x7fff;
    }
    dnmot_w = (word)iVar3;
  }
  if (tseg_l < 0x8000000) {
    *(dword *)(&DAT_005b9d4c + uVar1 * 4) = tseg_l;
  }
  else {
    *(undefined4 *)(&DAT_005b9d4c + uVar1 * 4) = 0x7ffffff;
  }
  irspsynold = irspsyn;
  if (uVar1 < 5) {
    irspsyn = irspsyn + 1;
  }
  else {
    irspsyn = 0;
  }
  return;
}

