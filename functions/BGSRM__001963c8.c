/*
 * Program: n42.bin
 * Function: BGSRM
 * Entry: 001963c8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BGSRM(void)

{
  undefined2 uVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  undefined2 uVar6;
  uint uVar1;
  ushort uVar7;
  ushort uVar8;
  
  uVar2 = func_0xff22181c(umsrln_w,_rl_w);
  _ml_w = func_0xff221800(uVar2,0xf5c2);
  uVar3 = func_0xff2217f4(0x666,_ml_w);
  if (0xff < uVar3) {
    uVar3 = 0xff;
  }
  ml = (undefined)uVar3;
  DAT_005b9858 = _DAT_001c39e0 - Vsa_spri;
  DAT_005b9866 = Vse_spri + Vsa_spri;
  DAT_005b986e = func_0xff21984c(&KFUEF,evhubi_w,DAT_005b9866);
  DAT_005b9868 = func_0xff21984c(&DAT_001c2f54,evhubi_w,DAT_005b9866);
  sVar4 = func_0xff2189bc(0x1c396a,evhubi_w);
  DAT_005b986a = DAT_005b9868 - (sVar4 - Vse_spri);
  if (DAT_005b986a < 0) {
    DAT_005b986a = 0;
  }
  DAT_005b986c = DAT_005b986a + -0x8000;
  if (DI_SCHALT == '\0') {
    uVar3 = func_0xff21984c(&DAT_001c2c64,nmot_w,DAT_005b986e);
    uVar7 = func_0xff21984c(&DAT_001c2ddc,nmot_w,DAT_005b986e);
    if (uVar3 < uVar7) {
      sVar4 = func_0xff221800(uVar7 - uVar3,DAT_005b878e);
    }
    else {
      sVar4 = func_0xff221800(uVar3 - uVar7,DAT_005b878e);
      sVar4 = -sVar4;
    }
    uVar7 = func_0xff21984c(&DAT_001c2974,nmot_w,DAT_005b986c);
    uVar8 = func_0xff21984c(&DAT_001c2aec,nmot_w,DAT_005b986c);
    if (uVar7 < uVar8) {
      sVar5 = func_0xff221800(uVar8 - uVar7,DAT_005b878e);
    }
    else {
      sVar5 = func_0xff221800(uVar7 - uVar8,DAT_005b878e);
      sVar5 = -sVar5;
    }
    DAT_005b9354 = uVar3 + sVar4 + uVar7 + sVar5;
    uVar3 = func_0xff21984c(&DAT_001c33dc,nmot_w,DAT_005b986e);
    uVar7 = func_0xff21984c(&DAT_001c37c0,nmot_w,DAT_005b986e);
    if (uVar3 < uVar7) {
      sVar4 = func_0xff221800(uVar7 - uVar3,DAT_005b878e);
    }
    else {
      sVar4 = func_0xff221800(uVar3 - uVar7,DAT_005b878e);
      sVar4 = -sVar4;
    }
    uVar7 = func_0xff21984c(&DAT_001c3554,nmot_w,DAT_005b986c);
    uVar8 = func_0xff21984c(&DAT_001c36cc,nmot_w,DAT_005b986c);
    if (uVar7 < uVar8) {
      sVar5 = func_0xff221800(uVar8 - uVar7,DAT_005b878e);
    }
    else {
      sVar5 = func_0xff221800(uVar7 - uVar8,DAT_005b878e);
      sVar5 = -sVar5;
    }
    DAT_005b934e = func_0xff221800(uVar3 + sVar4,uVar7 + sVar5);
    DAT_005b9860 = (ushort)dpsfak << 8;
    uVar3 = func_0xff2189bc(&KLKISRM,nmot_w);
    uVar7 = func_0xff2189bc(&KLKISRMSU,nmot_w);
    if (uVar3 < uVar7) {
      sVar4 = func_0xff221800(uVar7 - uVar3,DAT_005b878e);
      sVar4 = uVar3 + sVar4;
    }
    else {
      sVar4 = func_0xff221800(uVar3 - uVar7,DAT_005b878e);
      sVar4 = uVar3 - sVar4;
    }
  }
  else {
    if (DAT_003fabdc != B_su) {
      _DAT_003fabe8 = (short)(0x2fd / ZVTPRGSU);
    }
    DAT_003fabdc = B_su;
    DAT_003fbf74 = _DAT_003fabe8 == 0;
    if (!(bool)DAT_003fbf74) {
      _DAT_003fabe8 = _DAT_003fabe8 + -1;
    }
    if (B_su == '\0') {
      sVar4 = func_0xff21984c(&DAT_001c2c64,nmot_w,DAT_005b986e);
      sVar5 = func_0xff21984c(&DAT_001c2974,nmot_w,DAT_005b986c);
      DAT_005b9352 = sVar5 + sVar4;
      uVar2 = func_0xff21984c(&DAT_001c3554,nmot_w,DAT_005b986c);
      uVar6 = func_0xff21984c(&DAT_001c33dc,nmot_w,DAT_005b986e);
      DAT_005b935a = func_0xff221800(uVar6,uVar2);
      DAT_005b9860 = (ushort)dpsfak << 8;
      sVar4 = func_0xff2189bc(&KLKISRM,nmot_w);
    }
    else {
      sVar4 = func_0xff21984c(&DAT_001c2ddc,nmot_w,DAT_005b986e);
      sVar5 = func_0xff21984c(&DAT_001c2aec,nmot_w,DAT_005b986c);
      DAT_005b9352 = sVar5 + sVar4;
      uVar2 = func_0xff21984c(&DAT_001c36cc,nmot_w,DAT_005b986c);
      uVar6 = func_0xff21984c(&DAT_001c37c0,nmot_w,DAT_005b986e);
      DAT_005b935a = func_0xff221800(uVar6,uVar2);
      DAT_005b9860 = (ushort)dpsfak << 8;
      sVar4 = func_0xff2189bc(&KLKISRMSU,nmot_w);
    }
                    /* WARNING: Read-only address (ram,0x003fabe2) is written */
    if (DAT_003fbf74 == '\0') {
      uVar1 = func_0xff217f20((uint)ZVTPRGSU << 8,DAT_005b9352,_DAT_003fabe0,_DAT_003fabe0 & 0xffff)
      ;
      _DAT_003fabe0 = (undefined2)(uVar1 >> 0x10);
      uVar2 = _DAT_003fabe0;
      _DAT_003fabe0 = uVar1;
      DAT_005b9354 = func_0xff22181c(uVar2,fho_w);
      uVar1 = func_0xff217f20((uint)ZVTPRGSU << 8,DAT_005b935a,_DAT_003fabe4,_DAT_003fabe4 & 0xffff)
      ;
      _DAT_003fabe4 = (undefined2)(uVar1 >> 0x10);
      uVar2 = _DAT_003fabe4;
      _DAT_003fabe4 = uVar1;
      DAT_005b934e = func_0xff221800(uVar2,DAT_005b87c2);
    }
    else {
      _DAT_003fabe0 = CONCAT22(DAT_005b9352,_DAT_003fabe2);
      DAT_005b9354 = func_0xff22181c(DAT_005b9352,fho_w);
                    /* WARNING: Read-only address (ram,0x003fabe6) is written */
      _DAT_003fabe4 = CONCAT22(DAT_005b935a,_DAT_003fabe6);
      DAT_005b934e = func_0xff221800(DAT_005b935a,DAT_005b87c2);
    }
  }
  uVar2 = func_0xff221800((uint)DAT_005b90a9 << 8,0x510a);
  DAT_005b9350 = func_0xff2217f4(uVar2,sVar4);
  _DAT_003fabce = (short)((uint)DAT_005b9350 * 0x999 >> 0xb);
  return;
}

