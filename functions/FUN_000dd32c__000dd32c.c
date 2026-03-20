/*
 * Program: n42.bin
 * Function: FUN_000dd32c
 * Entry: 000dd32c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x000dd430) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000dd32c(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ushort local_20;
  word wStack_1e;
  
  uVar4 = ((uint)miopt_w * (uint)etazwmn) / 200;
  local_20 = (ushort)(uVar4 >> 0x10);
  if (local_20 == 0) {
    wStack_1e = (word)uVar4;
    mizwmn_w = wStack_1e;
  }
  else {
    mizwmn_w = 0xffff;
  }
  if (DAT_003fc120 == '\0') {
    uVar4 = (uint)mizwmn_w;
  }
  else {
    uVar4 = (uint)mizwmn_w + (uint)DAT_001c99f9 * -0x100;
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    else if (0xffff < (int)uVar4) {
      uVar4 = 0xffff;
    }
  }
  uVar2 = (uint)_misol_w;
  if ((uVar4 & 0xffff) < uVar2) {
    uVar4 = (uVar4 & 0xffff) + (uint)DAT_001c99fa * 0x100;
    if (0xffff < uVar4) {
      uVar4 = 0xffff;
    }
    if ((uVar4 & 0xffff) <= uVar2) {
      DAT_003fc128 = '\x01';
    }
  }
  else {
    DAT_003fc128 = '\0';
  }
  if ((DAT_001c99f8 & 2) == 0) {
    if (((B_sab == '\0') || (DAT_003fc124 != '\0')) || (DAT_003fc128 != '\0')) {
      B_sa = '\0';
    }
    else {
      B_sa = '\x01';
    }
  }
  else if (redist < DAT_001c99fd) {
    B_sa = '\0';
  }
  else if ((B_sab == '\0') || (DAT_003fc124 != '\0')) {
    B_sa = '\0';
  }
  else {
    B_sa = '\x01';
  }
  if ((B_sa == '\0') && (DAT_003fbf5b == '\0')) {
    if (uVar2 < mibas_w) {
      uVar4 = FUN_000a7b40(uVar2,0,(uint)mibas_w);
      uVar4 = 0xffff - (uVar4 & 0xffff);
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
      else if (0xffff < (int)uVar4) {
        uVar4 = 0xffff;
      }
      local_20 = (ushort)((uVar4 & 0xffff) * 4000 >> 0x10);
      DAT_005b95e4 = local_20;
    }
    else {
      DAT_005b95e4 = 0;
    }
    iVar3 = ((uint)redsol * 1000 & 0xffff) - (uint)DAT_005b95e4;
    if (iVar3 < -0x8000) {
      iVar3 = -0x8000;
    }
    else if (0x7fff < iVar3) {
      iVar3 = 0x7fff;
    }
    DAT_005b91ab = DAT_001c99fb;
    if ((short)(DAT_001c99fb * 0x14) <= (short)iVar3) {
      DAT_005b91ab = DAT_001c99fc;
    }
    uVar4 = (uint)DAT_005b95e4 + (int)(short)(DAT_005b91ab * 0x14);
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    else if (0xffff < (int)uVar4) {
      uVar4 = 0xffff;
    }
    uVar4 = (uVar4 & 0xffff) / 1000;
    DAT_005b91ac = (byte)uVar4;
    if ((((B_dkpu == '\0') && (B_nmax == '\0')) &&
        ((B_dknolu == '\0' && ((DAT_003fc120 == '\0' || ((DAT_001c99f8 & 1) == 0)))))) &&
       ((B_sab == '\0' || ((DAT_001c99f8 & 2) == 0)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((DAT_005b91ae <= uVar4) && (bVar1)) && (DAT_003fc128 == '\0')) || (DAT_003fbf5b != '\0'))
    {
      DAT_003fc127 = true;
    }
    else {
      DAT_003fc127 = false;
    }
    if ((bool)DAT_003fc127) {
      redsol = DAT_005b91ac;
      if (4 < uVar4) {
        redsol = 4;
      }
    }
    else {
      redsol = 0;
    }
  }
  else {
    redsol = 4;
    DAT_003fc127 = DAT_003fbf5b;
  }
  return;
}

