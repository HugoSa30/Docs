/*
 * Program: n42.bin
 * Function: FUN_000b441c
 * Entry: 000b441c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000b441c(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 == 1) {
    B_genactiv = B_genactiv;
  }
  else if (param_2 == 2) {
    uVar2 = param_3 & 0xffff;
    uVar3 = param_4 >> 0x10 & 0xff;
    if (param_4 >> 0x18 == 6) {
      B_genfbsd = 0;
      DAT_005bb844 = 0;
      DAT_005bb848 = 0;
      if (uVar3 == 0) {
        ufgen = (undefined)(param_3 & 0x3f);
        uVar2 = (int)uVar2 >> 6 & 3;
        lrfgen = (byte)uVar2;
        uVar2 = uVar2 * (byte)QKORRLR;
        if (0xfffe < uVar2) {
          uVar2 = 0xffff;
        }
        if (uVar2 < 0x100) {
          tlrfgen = (byte)uVar2;
        }
        else {
          tlrfgen = 0xff;
        }
        if ((uint)OUINIGEN < (param_3 & 0x3f)) {
          DAT_005bb7b7 = 1;
        }
        else {
          DAT_005bb7b7 = 0;
        }
      }
      else {
        bVar1 = (byte)((int)uVar2 >> 5);
        if (uVar3 == 2) {
          tvdfrfgen = (byte)(param_3 & 0x1f);
          uVar3 = (param_3 & 0x1f) * (uint)QKORRDF;
          if (0xfffe < uVar3) {
            uVar3 = 0xffff;
          }
          if (uVar3 < 0x100) {
            dffgen = (byte)uVar3;
          }
          else {
            dffgen = 0xff;
          }
          B_genfel = bVar1 & 1;
          B_genfme = (byte)((int)uVar2 >> 6) & 1;
          B_genfht = (byte)((int)uVar2 >> 7) & 1;
        }
        else if (uVar3 == 6) {
          genmanufak = bVar1 & 3;
          gentypkenn = (byte)((int)uVar2 >> 2) & 7;
        }
        else {
          chkbfgen = (byte)uVar2;
        }
      }
    }
  }
  else if (param_2 == 3) {
    B_genfbsd = 0;
    DAT_005bb842 = 0;
    DAT_005bb848 = 0;
  }
  else if (param_2 == 4) {
    DAT_005bb7b2 = 0xff;
    DAT_005bb846 = 0;
    DAT_005bb7b4 = 0;
  }
  return;
}

