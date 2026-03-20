/*
 * Program: n42.bin
 * Function: FUN_000c619c
 * Entry: 000c619c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c619c(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 local_28;
  byte bStack_25;
  
  if (B_zwvz != '\0') {
    dmaufr_w = 0;
    goto LAB_000c639c;
  }
  if (B_zwvzm == '\0') {
    uVar3 = (uint)mibas_w - (uint)_misol_w;
    if ((int)uVar3 < 0) {
      uVar3 = 0;
    }
    else if (0xffff < (int)uVar3) {
      uVar3 = 0xffff;
    }
    uVar2 = (uint)dmaufr_w;
    if (uVar2 <= (uVar3 & 0xffff)) {
      if (uVar2 != 0) {
        iVar4 = uVar2 - _DAT_003fb830;
        if (iVar4 < 0) {
          iVar4 = 0;
        }
        else if (0xffff < iVar4) {
          iVar4 = 0xffff;
        }
        dmaufr_w = (word)iVar4;
      }
      goto LAB_000c639c;
    }
    if (uVar2 == 0) goto LAB_000c639c;
  }
  if (((B_zwvzm == '\0') || (uVar3 = (uint)_DAT_003fb832, uVar3 <= mizwmn_w)) || (uVar3 <= _misol_w)
     ) {
    if ((uint)_misol_w < (uint)mizwmn_w) {
      iVar4 = (uint)mibas_w - (uint)mizwmn_w;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0xffff < iVar4) {
        iVar4 = 0xffff;
      }
      dmaufr_w = (word)iVar4;
    }
    else {
      iVar4 = (uint)mibas_w - (uint)_misol_w;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0xffff < iVar4) {
        iVar4 = 0xffff;
      }
      dmaufr_w = (word)iVar4;
    }
  }
  else {
    iVar4 = mibas_w - uVar3;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (0xffff < iVar4) {
      iVar4 = 0xffff;
    }
    dmaufr_w = (word)iVar4;
  }
LAB_000c639c:
  _DAT_003fb832 = mizsol_w;
  B_zwvzm = B_zwvz;
  if ((B_zwvs == '\0') && (dmaufr_w == 0)) {
    B_nozwe = 1;
  }
  else {
    B_nozwe = 0;
  }
  uVar3 = (uint)mizsol_w - (uint)dmaufr_w;
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if (0xffff < (int)uVar3) {
    uVar3 = 0xffff;
  }
  uVar3 = (uVar3 & 0xffff) * 200;
  local_28 = (undefined2)(uVar3 >> 0x10);
  if (redist == 0) {
    uVar1 = FUN_000a7b40(local_28,uVar3 & 0xffff,_DAT_003fb82e);
  }
  else {
    uVar1 = FUN_000a7b40(local_28,uVar3 & 0xffff,_DAT_003fb82c);
  }
  if (uVar1 < 0xc9) {
    bStack_25 = (byte)uVar1;
    etazws = bStack_25;
  }
  else {
    etazws = 200;
  }
  uVar3 = 200 - etazws;
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if (0xff < (int)uVar3) {
    uVar3 = 0xff;
  }
  DAT_005b9203 = (char)uVar3;
  if ((dzwkoef == 0) || (uVar3 = ((uVar3 & 0xff) << 8) / (uint)dzwkoef, 0xffff < uVar3)) {
    uVar3 = 0xffff;
  }
  if (uVar3 < 0x40) {
    dzwssql = (byte)uVar3;
    dzwssq = 0;
    dzws = DZWQ2DZWL;
    if ((uVar3 & 0xff) != 0) {
      dzws = (&DZWQ2DZWL)[uVar3 & 0xff];
    }
  }
  else {
    dzwssql = 0;
    if (uVar3 >> 3 < 0x100) {
      dzwssq = (byte)(uVar3 >> 3);
    }
    else {
      dzwssq = 0xff;
    }
    uVar3 = (uint)dzwssq;
    dzws = DZWQ2DZW;
    if ((uVar3 != 0) && (dzws = DAT_001ccda4, uVar3 < 0xc9)) {
      dzws = (&DZWQ2DZW)[uVar3];
    }
  }
  iVar4 = (int)(char)zwopt - (int)(char)dzws;
  if (iVar4 < -0x80) {
    iVar4 = -0x80;
  }
  else if (0x7f < iVar4) {
    iVar4 = 0x7f;
  }
  zwsol = (byte)iVar4;
  return;
}

