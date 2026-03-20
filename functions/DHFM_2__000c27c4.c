/*
 * Program: n42.bin
 * Function: DHFM_2
 * Entry: 000c27c4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DHFM_2(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  uint unaff_r29;
  int unaff_r30;
  uint unaff_r31;
  
  iVar5 = _DAT_003fb074;
  iVar4 = _DAT_003fb070;
  iVar3 = _DAT_003fb06c;
  iVar2 = _DAT_003fb068;
  bVar1 = DAT_003fae1c & 1 ^ 1;
  DAT_003fae1c = bVar1 | DAT_003fae1c & 0xfe;
  if (bVar1 == 0) {
    uVar6 = (uint)_DAT_003fb07a;
    if (_DAT_003fb07a != 0) {
      if ((_DAT_003fb07a == 0) || (unaff_r29 = _DAT_003fb064 / _DAT_003fb07a, 0xffff < unaff_r29)) {
        unaff_r29 = 0xffff;
      }
      _DAT_003fb064 = 0;
      _DAT_003fb07a = 0;
      _DAT_003fb074 = 0;
      _DAT_003fb06c = 0;
      param_3 = iVar5;
      unaff_r30 = iVar3;
      unaff_r31 = uVar6;
    }
  }
  else {
    uVar6 = (uint)_DAT_003fb078;
    if (_DAT_003fb078 != 0) {
      if ((_DAT_003fb078 == 0) || (unaff_r29 = _DAT_003fb060 / _DAT_003fb078, 0xffff < unaff_r29)) {
        unaff_r29 = 0xffff;
      }
      _DAT_003fb060 = 0;
      _DAT_003fb078 = 0;
      _DAT_003fb070 = 0;
      _DAT_003fb068 = 0;
      param_3 = iVar4;
      unaff_r30 = iVar2;
      unaff_r31 = uVar6;
    }
  }
  if (nmot < DAT_001d0a05) {
    uVar6 = param_3 * (unaff_r31 & 0xffff) - unaff_r30 * unaff_r30;
    if (uVar6 < 0x1000000) {
      uVar6 = uVar6 * 0x100;
    }
    else {
      uVar6 = 0xffffffff;
    }
    _DAT_003fae10 = (uVar6 / ((unaff_r31 & 0xffff) - 1)) / (unaff_r31 & 0xffff);
    if (_DAT_003fae10 < 0xffffff) {
      _DAT_003fae0c = (undefined2)(_DAT_003fae10 >> 8);
    }
    else {
      _DAT_003fae0c = 0xffff;
    }
    DAT_005b9a04 = FUN_000b2514(&UNK_003fae14,_DAT_003fae0c,_ZSIGHFM);
    if (AFSTB == '\0') {
      DAT_005b9a02 = calc_value_from_x_y(&KFHFMKOH,evhubi_w,DAT_005b9a04);
    }
    else if (AFSTB == '\x01') {
      DAT_005b9a02 = calc_value_from_x_y(&KFHFMKOM,_mshfmkor,DAT_005b9a04);
    }
    else if (AFSTB == '\x02') {
      DAT_005b9a06 = (undefined2)((uint)wdkba << 8);
      DAT_005b9a02 = calc_value_from_x_y(&KFHFMKOW,(uint)wdkba << 8,DAT_005b9a04);
    }
    else if (AFSTB == '\x03') {
      if (B_gdvhub == 0) {
        DAT_005b9a02 = calc_value_from_x_y(&KFHFMKOH,evhubi_w,DAT_005b9a04);
      }
      else {
        DAT_005b9a02 = calc_value_from_x_y(&KFHFMKOM,_mshfmkor,DAT_005b9a04);
      }
    }
    else if (B_gdvhub == 0) {
      DAT_005b9a02 = calc_value_from_x_y(&KFHFMKOH,evhubi_w,DAT_005b9a04);
    }
    else {
      DAT_005b9a06 = (undefined2)((uint)wdkba << 8);
      DAT_005b9a02 = calc_value_from_x_y(&KFHFMKOW,(uint)wdkba << 8,DAT_005b9a04);
    }
  }
  mlhfmm_w = (word)unaff_r29;
  if ((uint)_MLOFS < (unaff_r29 & 0xffff)) {
    uVar6 = unaff_r29 - _MLOFS;
  }
  else {
    uVar6 = 0;
  }
  _mshfmkor = (undefined2)uVar6;
  if (B_stend != '\0') {
    uVar6 = (int)((uVar6 & 0xffff) * (uint)DAT_005b9a02) >> 0xf;
  }
  _mshfmkor = (undefined2)uVar6;
  tans16 = (ushort)tans;
  uVar7 = calc_value_from_x_y(&KFTHFM,tans,uVar6 & 0xffff);
  _mshfmnof = FUN_000b181c(_DAT_003fae08,(int)((uVar6 & 0xffff) * (uVar7 & 0xffff)) >> 0xf & 0xffff)
  ;
  if (B_stend == '\0') {
    _DAT_003fae18 = (uint)_mshfmnof << 0x10;
  }
  uVar8 = calc_value_from_x_y(&KFZKHFM,nmot_w,rlvw_w);
  _mshfm_w = FUN_000b2514(&DAT_003fae18,_mshfmnof,uVar8);
  return;
}

