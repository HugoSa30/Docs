/*
 * Program: n42.bin
 * Function: FUN_000dc78c
 * Entry: 000dc78c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000dc78c(void)

{
  int iVar1;
  uint uVar2;
  undefined2 local_18;
  undefined2 local_14;
  
  etazaist = -(char)((uint)redist * 200 >> 2) - 0x38;
  iVar1 = (int)(char)zwopt - (int)zwist;
  if (iVar1 < -0x80) {
    iVar1 = -0x80;
  }
  else if (0x7f < iVar1) {
    iVar1 = 0x7f;
  }
  DAT_005b91a6 = (char)iVar1;
  if (DAT_005b91a6 < '\0') {
    DAT_005b91a6 = '\0';
  }
  DAT_005b8a1c = DZW2DZWQ;
  if (0 < DAT_005b91a6) {
    DAT_005b8a1c = (&DZW2DZWQ)[DAT_005b91a6];
  }
  uVar2 = (uint)DAT_005b8a1c * (uint)dzwkoef >> 5;
  if (0xfffe < uVar2) {
    uVar2 = 0xffff;
  }
  DAT_005b8a18 = (undefined2)uVar2;
  uVar2 = 200 - uVar2;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0xffff < (int)uVar2) {
    uVar2 = 0xffff;
  }
  DAT_005b8a1a = (undefined2)uVar2;
  if (0xff < (uVar2 & 0xffff)) {
    uVar2 = 0xff;
  }
  etazwist = (byte)uVar2;
  uVar2 = (uVar2 & 0xff) * (uint)miopt_w;
  local_18 = (undefined2)(uVar2 >> 0x10);
  DAT_005b95ba = FUN_000a7b40(local_18,uVar2 & 0xffff,200);
  local_14 = (undefined2)((uint)DAT_005b95ba * (uint)etazaist >> 0x10);
  miist_w = FUN_000a7b40(local_14,(uint)DAT_005b95ba * (uint)etazaist & 0xffff,200);
  if ((uint)mdverl_w < (uint)miist_w) {
    iVar1 = (uint)miist_w - (uint)mdverl_w;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    else if (0xffff < iVar1) {
      iVar1 = 0xffff;
    }
    DAT_005b95be = (ushort)iVar1;
  }
  else {
    DAT_005b95be = 0;
  }
  DAT_005b95bc = (short)((uint)DAT_005b95be * (uint)MDNORM >> 0xb);
  return;
}

