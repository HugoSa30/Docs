/*
 * Program: n42.bin
 * Function: FUN_0017bf80
 * Entry: 0017bf80
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017bf80(void)

{
  ushort uVar1;
  word wVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if ((B_genoffmd == 0) || (B_nmot == '\0')) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  func_0xff221e2c(&DAT_003fb4dc,&UNK_003fb4de,1,uVar5,_DAT_001cb326);
  if ((B_genoffmd == 0) || (_DAT_003fb4dc == 0)) {
    B_genoffok = 0;
  }
  else {
    B_genoffok = 1;
  }
  if ((((DAT_001cb337 == '\0') || (B_slp == '\0')) || (B_fasls != '\0')) || (B_dslfa != '\0')) {
    uVar3 = (uint)_DAT_001cb330 << 8;
  }
  else {
    uVar3 = func_0xff2190c8(DAT_001cb308,&DAT_001cb309,&DAT_001cb30e,tbatt);
    uVar3 = (uVar3 & 0xffff) << 8;
    uVar4 = func_0xff2187cc(&DAT_001cb318,imlpr);
    uVar4 = (uint)_DAT_001cb334 * (uVar4 & 0xff);
    if (uVar4 < uVar3) {
      uVar3 = uVar4;
    }
  }
  uVar4 = uVar3 >> 8;
  ugenslp = (word)(uVar3 >> 8);
  uVar3 = (uint)ctrgenutar;
  if ((((_DAT_001cb326 != 0) && ((B_genoffok != 0 || ((B_genoffmd != 0 && (B_nmot == '\0')))))) ||
      (uVar3 != 0)) || (ugloc = _DAT_001cb32e, B_1stugen == 0)) {
    if ((_DAT_001cb326 == 0) || ((B_genoffok == 0 && ((B_genoffmd == 0 || (B_nmot != '\0')))))) {
      if (uVar4 <= _DAT_001cb330) {
        uVar4 = (uint)(short)_DAT_001cb330;
      }
      iVar7 = uVar4 - 0x2968;
      if ((int)(short)iVar7 < (int)(uVar3 * 0x19)) {
        iVar7 = uVar3 * 0x19;
      }
      ugloc = (short)iVar7 + 0x2968;
    }
    else {
      ugloc = _DAT_001cb330;
      if (vfzg == 0) {
        ugloc = _DAT_001cb332;
      }
    }
  }
  iVar7 = (int)(short)ugloc;
  wVar2 = ugloc;
  if ((B_1stugen == 0) &&
     (((DAT_001cb338 == '\0' || ((int)(uint)_DAT_001cb330 < iVar7)) || (0 < iVar7 - (short)uramp))))
  {
    uVar1 = _DAT_001cb32a;
    if (iVar7 <= (int)(uint)_DAT_001cb330) {
      uVar1 = _DAT_001cb32c;
    }
    iVar6 = (int)(short)uramp;
    if ((int)(uint)uVar1 < iVar7 - iVar6) {
      uVar1 = _DAT_001cb32a;
      if (iVar7 <= (int)(uint)_DAT_001cb330) {
        uVar1 = _DAT_001cb32c;
      }
      if (((uint)uVar1 + iVar6 & 0xffff) < 0x7531) {
        wVar2 = (word)((uint)uVar1 + iVar6);
      }
      else {
        wVar2 = 30000;
      }
    }
    else {
      uVar1 = _DAT_001cb32a;
      if (iVar7 <= (int)(uint)_DAT_001cb330) {
        uVar1 = _DAT_001cb32c;
      }
      if ((int)(uint)uVar1 < iVar6 - iVar7) {
        uVar1 = _DAT_001cb32a;
        if (iVar7 <= (int)(uint)_DAT_001cb330) {
          uVar1 = _DAT_001cb32c;
        }
        wVar2 = uramp - uVar1;
        if ((short)(uramp - uVar1) < 0) {
          wVar2 = 0;
        }
      }
    }
  }
  uramp = wVar2;
  uVar1 = uramp;
  if (DAT_001cb336 == '\x01') {
    uVar1 = _DAT_001cb32e;
  }
  uVar4 = (uint)uVar1;
  if (_DAT_001cb328 <= uVar4) {
    uVar4 = (uint)_DAT_001cb328;
  }
  uVar4 = uVar4 / 100 - 0x6a;
  if ((char)uVar4 < '\0') {
    uVar4 = 0;
  }
  ugen = (byte)uVar4;
  B_noctrgen = 1 - ((uint)ctrgenutar + (uVar4 & 0xff) * -4 == 0);
  if (uVar3 != 0) {
    B_1stugen = 0;
  }
  B_genoff = (int)((uVar4 & 0xff) * 100) <= (int)(_DAT_001cb330 - 0x2968);
  return;
}

