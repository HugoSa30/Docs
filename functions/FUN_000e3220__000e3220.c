/*
 * Program: n42.bin
 * Function: FUN_000e3220
 * Entry: 000e3220
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000e3220(void)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  short sVar4;
  uint local_48 [2];
  char local_40;
  char cStack_3f;
  
  cVar3 = func_0x010339ac(0x17,local_48);
  if (cVar3 == '\0') {
    DAT_003f9b9e = '\x01';
  }
  if (DAT_003f9b9e == '\0') {
    if (DAT_003f9b9d < 0x33) {
      DAT_003f9b9d = DAT_003f9b9d + 1;
    }
    else {
      B_vvt1cok = 0;
      exwnki_w = 0x6e9;
      vvt_ready = 3;
      DAT_005b8e92 = 0;
      DAT_005b8e8a = 5;
      DAT_005b8e8c = 3;
      vvt_iw = 0xffff;
      vvt_es = 0x8b;
      DAT_005b8e96 = 0;
      vvt_errst = 0;
    }
    B_vvt1new = 0;
  }
  else {
    DAT_003f9b9d = 0;
    DAT_003f9b9e = '\0';
    DAT_005b8e84 = (char)local_48[0];
    DAT_005b8e98 = (byte)(local_48[0] >> 8) & 0xf;
    DAT_005b8e8c = (byte)(local_48[0] >> 0xc) & 3;
    vvt_ready = (byte)(local_48[0] >> 0xe) & 3;
    vvt_iw = (word)(local_48[0] >> 0x10);
    exwnki_w = (word)((local_48[0] >> 0x10) * 0x6e9 >> 0x10);
    func_0x010339ac(0x18,local_48);
    vvt_errst = (undefined)(local_48[0] & 7);
    uVar1 = local_48[0] >> 3 & 3;
    DAT_005b8e92 = (undefined)uVar1;
    uVar2 = local_48[0] >> 5 & 7;
    DAT_005b8e86 = (undefined)uVar2;
    vvt_es = (byte)(local_48[0] >> 8);
    DAT_005b8e96 = (undefined)(local_48[0] >> 0x10);
    sVar4 = (ushort)vvt_ready * 0x40 + (ushort)DAT_005b8e8c * 0x10 + (ushort)DAT_005b8e98 +
            (vvt_iw & 0xff) + (vvt_iw >> 8) + (short)(local_48[0] & 7) + (short)(uVar1 << 3) +
            (short)(uVar2 << 5) + ((ushort)(local_48[0] >> 8) & 0xff) +
            ((ushort)(local_48[0] >> 0x10) & 0xff) + 0x284;
    local_40 = (char)((ushort)sVar4 >> 8);
    cStack_3f = (char)sVar4;
    DAT_003f9ba0 = local_40 + cStack_3f;
    if ((DAT_005b8e84 == DAT_003f9ba0) && (DAT_003f9ba1 != DAT_005b8e98)) {
      if (DAT_005b8e88 != 0) {
        DAT_005b8e88 = DAT_005b8e88 - 1;
      }
    }
    else if (DAT_005b8e88 < 0x1f) {
      DAT_005b8e88 = DAT_005b8e88 + 4;
    }
    B_vvt1cok = B_vvt1cok;
    B_vvt1new = B_vvt1new;
    DAT_005b8e8a = DAT_005b8e86;
  }
  if ((((B_sicvvt & 0xf) == 4) || (B_vvt1chso == 0)) || (B_vvt1cok == 0)) {
    exwnki_w = 0x6e9;
    vvt_ready = 3;
    DAT_005b8e92 = 0;
    DAT_005b8e8a = 5;
    DAT_005b8e8c = 3;
    vvt_iw = 0xffff;
    vvt_es = 0x8b;
    DAT_005b8e96 = 0;
    vvt_errst = 0;
    B_iwfalse = B_iwfalse;
  }
  else {
    B_iwfalse = 0;
    if (vvt_iw == 0xffff) {
      B_iwfalse = B_iwfalse;
    }
  }
  B_vvt2new = B_vvt2new;
  B_vvt2cok = B_vvt2cok;
  DAT_005b8e89 = 0;
  B_vvt1chso = DAT_005b8e88 < 0x10;
  B_vvt2chso = B_vvt2chso;
  DAT_003f9ba1 = DAT_005b8e98;
  return;
}

