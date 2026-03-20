/*
 * Program: n42.bin
 * Function: FUN_0011ef34
 * Entry: 0011ef34
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011ef34(undefined4 param_1,char **param_2)

{
  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  
  if (DAT_003f9b6a == '\x01') {
    DAT_003fb1f4 = 0;
    DAT_003fb1f5 = 0;
    if (*(short *)((int)param_2 + 6) != 1) {
      *(undefined2 *)(param_2 + 2) = 0;
      *(undefined *)((int)param_2 + 10) = 3;
      return;
    }
    cVar2 = **param_2;
    if (cVar2 == '\0') {
      bVar4 = 0xa8;
      if ((DAT_005b961a >> 9 & 1) == 0) {
        bVar4 = 0x28;
      }
      if (((int)(uint)B_cdswe >> 6 & 1U) == 0) {
        bVar4 = bVar4 & 0xdf;
      }
      if (((int)(uint)B_cdswe >> 9 & 1U) == 0) {
        bVar4 = bVar4 & 0xf7;
      }
      (*param_2)[1] = -1;
      (*param_2)[2] = bVar4;
      (*param_2)[3] = '\0';
      (*param_2)[4] = '\0';
      (*param_2)[5] = '\0';
      *(undefined2 *)(param_2 + 2) = 6;
      *(undefined *)((int)param_2 + 10) = 1;
      return;
    }
    if (cVar2 == '\x01') {
      DAT_003fb1f4 = 0;
      if ((((int)(uint)DAT_005b961a >> 9 & 1U) != 0) && (((int)(uint)DAT_005b961a >> 10 & 1U) != 0))
      {
        DAT_003fb1f6 = DAT_003fdbb6;
        DAT_003fb220 = (undefined)((ushort)_DAT_003fdbb0 >> 8);
        DAT_003fb1f7 = DAT_003fb220;
        DAT_003fb221 = (undefined)_DAT_003fdbb0;
        DAT_003fb1f8 = DAT_003fb221;
        _DAT_003fb220 = _DAT_003fdbae;
        uVar3 = _DAT_003fb220;
        DAT_003fb220 = (undefined)((ushort)_DAT_003fdbae >> 8);
        DAT_003fb1f9 = DAT_003fb220;
        DAT_003fb221 = (undefined)_DAT_003fdbae;
        DAT_003fb1fa = DAT_003fb221;
        DAT_003fb1f4 = 1;
        _DAT_003fb220 = uVar3;
      }
    }
    else if (cVar2 == '\x03') {
      DAT_003fb1f4 = 0;
      if ((B_cdswe >> 6 & 1) != 0) {
        DAT_003fb1f6 = m6cmsl;
        DAT_003fb220 = (undefined)((ushort)_m6wmsl_w >> 8);
        DAT_003fb1f7 = DAT_003fb220;
        DAT_003fb221 = (undefined)_m6wmsl_w;
        DAT_003fb1f8 = DAT_003fb221;
        DAT_003fb220 = (undefined)((ushort)_m6smsl_w >> 8);
        DAT_003fb1f9 = DAT_003fb220;
        DAT_003fb221 = (undefined)_m6smsl_w;
        DAT_003fb1fa = DAT_003fb221;
        DAT_003fb1fb = m6cmsl2;
        DAT_003fb220 = (undefined)((ushort)_m6wmsl2_w >> 8);
        DAT_003fb1fc = DAT_003fb220;
        DAT_003fb221 = (undefined)_m6wmsl2_w;
        DAT_003fb1fd = DAT_003fb221;
        _DAT_003fb220 = _m6smsl2_w;
        uVar3 = _DAT_003fb220;
        DAT_003fb220 = (undefined)((ushort)_m6smsl2_w >> 8);
        DAT_003fb1fe = DAT_003fb220;
        DAT_003fb221 = (undefined)_m6smsl2_w;
        DAT_003fb1ff = DAT_003fb221;
        DAT_003fb1f4 = 2;
        _DAT_003fb220 = uVar3;
        if ((B_mslmin & B_cwdslt) !=
            ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) {
          DAT_003fb200 = m6cmslv;
          DAT_003fb220 = (undefined)((ushort)_m6wmslv_w >> 8);
          DAT_003fb201 = DAT_003fb220;
          DAT_003fb221 = (undefined)_m6wmslv_w;
          DAT_003fb202 = DAT_003fb221;
          DAT_003fb220 = (undefined)((ushort)_m6smslv_w >> 8);
          DAT_003fb203 = DAT_003fb220;
          DAT_003fb221 = (undefined)_m6smslv_w;
          DAT_003fb204 = DAT_003fb221;
          DAT_003fb205 = m6cmslv2;
          DAT_003fb220 = (undefined)((ushort)_m6wmslv2_w >> 8);
          DAT_003fb206 = DAT_003fb220;
          DAT_003fb221 = (undefined)_m6wmslv2_w;
          DAT_003fb207 = DAT_003fb221;
          _DAT_003fb220 = _m6smslv2_w;
          uVar3 = _DAT_003fb220;
          DAT_003fb220 = (undefined)((ushort)_m6smslv2_w >> 8);
          DAT_003fb208 = DAT_003fb220;
          DAT_003fb221 = (undefined)_m6smslv2_w;
          DAT_003fb209 = DAT_003fb221;
          DAT_003fb1f4 = 4;
          _DAT_003fb220 = uVar3;
        }
      }
    }
    else {
      if (cVar2 != '\x05') {
        *(undefined2 *)(param_2 + 2) = 0;
        *(undefined *)((int)param_2 + 10) = 3;
        return;
      }
      DAT_003fb1f4 = 0;
      if ((B_cdswe >> 9 & 1) != 0) {
        DAT_003fb1f6 = tc6tesc;
        DAT_003fb220 = (undefined)((ushort)_tc6tesw >> 8);
        DAT_003fb1f7 = DAT_003fb220;
        DAT_003fb221 = (undefined)_tc6tesw;
        DAT_003fb1f8 = DAT_003fb221;
        _DAT_003fb220 = _tc6tess;
        uVar3 = _DAT_003fb220;
        DAT_003fb220 = (undefined)((ushort)_tc6tess >> 8);
        DAT_003fb1f9 = DAT_003fb220;
        DAT_003fb221 = (undefined)_tc6tess;
        DAT_003fb1fa = DAT_003fb221;
        DAT_003fb1f4 = 1;
        _DAT_003fb220 = uVar3;
      }
    }
    if (DAT_003fb1f4 == 0) {
      *(undefined2 *)(param_2 + 2) = 0;
      *(undefined *)((int)param_2 + 10) = 3;
      return;
    }
  }
  iVar5 = (uint)DAT_003fb1f5 * 5;
  (*param_2)[1] = (&DAT_003fb1f6)[iVar5];
  (*param_2)[2] = (&DAT_003fb1f7)[iVar5];
  (*param_2)[3] = (&DAT_003fb1f8)[iVar5];
  (*param_2)[4] = (&DAT_003fb1f9)[iVar5];
  (*param_2)[5] = (&DAT_003fb1fa)[iVar5];
  uVar6 = DAT_003fb1f5 + 1;
  DAT_003fb1f5 = (byte)uVar6;
  bVar1 = (uVar6 & 0xff) != (uint)DAT_003fb1f4;
  if (bVar1) {
    *(undefined2 *)(param_2 + 2) = 6;
    *(undefined *)((int)param_2 + 10) = 4;
  }
  else {
    *(undefined2 *)(param_2 + 2) = 6;
    *(undefined *)((int)param_2 + 10) = 1;
  }
  DAT_003f9b6a = !bVar1;
  return;
}

