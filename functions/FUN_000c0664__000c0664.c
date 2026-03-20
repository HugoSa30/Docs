/*
 * Program: n42.bin
 * Function: FUN_000c0664
 * Entry: 000c0664
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c0664(void)

{
  byte bVar1;
  undefined uVar2;
  uint uVar3;
  word wVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar4;
  uint uVar5;
  undefined2 uVar9;
  uint uVar10;
  
  uVar2 = B_vbmg;
  bVar1 = DAT_003fad9c >> 1 & 1;
  if (bVar1 == 0) {
    if ((tmst < TMHSG) || (IMLHS < imlatm)) {
      B_hst = B_hst & 0xfe;
    }
  }
  else {
    B_vbemg = B_vbmg;
    if (tistzyl == zzyl) {
      B_vbmg = 1;
    }
    if (B_stend != '\0') {
      if (bVar1 != 0) {
        DAT_003fad9c = DAT_003fad9c & 0xfd;
      }
      if (B_stend != '\0') {
        B_vbemg = uVar2;
        fst_w = 0x400;
        return;
      }
    }
    uVar10 = (uint)tans - (uint)tansab;
    if ((int)uVar10 < 0) {
      uVar10 = 0;
    }
    else if (0xff < (int)uVar10) {
      uVar10 = 0xff;
    }
    uVar3 = FUN_000a87cc(&TANDT,(uint)tansab);
    DAT_003fada0 = (undefined)uVar3;
    if (((B_hst & 1) != 0) || ((TMH < tmst && ((uVar3 & 0xff) < (uVar10 & 0xff))))) {
      B_hst = B_hst | 1;
    }
    if ((tmst < TMHSG) || (IMLHS < imlatm)) {
      B_hst = B_hst & 0xfe;
    }
    if (anztist != 0xff) {
      wVar6 = anzti_w;
      if (0xfe < anzti_w) {
        wVar6 = 0xff;
      }
      anztist = (byte)wVar6;
    }
    if ((B_hst & 1) == 0) {
      uVar10 = calc_value_from_y(&KLFWST,tabst_w);
      uVar3 = FUN_000aa1e0(KFFWST,&DAT_001c6000,DAT_001c5fff,&DAT_001c6010,&DAT_001c6018,_tmlauf_w,
                           tmotab);
      if (B_gdst == 0) {
        uVar4 = FUN_000a87cc(&FKSTT,tmst);
      }
      else {
        uVar4 = FUN_000a87cc(&FKSTTGD,tmst);
      }
      uVar5 = FUN_000a9d68(&KFWKSTT,tmst,anztist);
      uVar9 = FUN_000b17f4(((0xff - ((uVar10 >> 8 & 0xff) * (uVar3 & 0xff) >> 8) & 0xff) >> 1) *
                           (uVar4 & 0xff),(uVar5 & 0xff) << 7);
      uVar10 = calc_value_from_x_y_2(&KFWKSTN,tmst,nmot);
      fst0_w = FUN_000b181c(uVar9,(uVar10 & 0xff) << 8);
    }
    else {
      uVar7 = FUN_000a87cc(&FHSTT,tans);
      uVar8 = FUN_000a9d68(&KFWHSTT,tans,anztist);
      uVar7 = (uVar7 & 0xff) * (uVar8 & 0xff);
      if (uVar7 < 0x8000) {
        fst0_w = uVar7 * 2;
      }
      else {
        fst0_w = 0xffff;
      }
    }
    fst_w = FUN_000b1800(fst0_w,(uint)kstaa << 8);
  }
  return;
}

